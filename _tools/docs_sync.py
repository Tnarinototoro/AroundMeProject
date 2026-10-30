# -*- coding: utf-8 -*-
"""
Docs 文本镜像同步器 —— 以 AroundMe/Docs/README.md 为唯一事实源。

规则：
  1. README.md 的「一、现行」章节里用反引号登记的路径 == 现行资料清单。
  2. 物理存在但 README 未登记的文件 → 仍然抽取，但标记为「未登记」并告警。
  3. README 登记但物理不存在的路径 → 告警，不生成。
  4. _Deprecated/ 下的文件不抽取，只在索引里列出，避免被误引用。

用法：python docs_sync.py
输出：仓库根 _docs_txt/ （目录结构与 Docs 一致）+ 00_INDEX.md
"""
import os
import re
import sys
import zipfile
import shutil

from lxml import etree

REPO = r"S:\AroundMeProject"
DOCS = os.path.join(REPO, "AroundMe", "Docs")
OUT = os.path.join(REPO, "_docs_txt")

README = os.path.join(DOCS, "README.md")
DEP_README = os.path.join(DOCS, "_Deprecated", "README.md")

W = "{http://schemas.openxmlformats.org/wordprocessingml/2006/main}"
EXTS = (".pptx", ".docx", ".xlsx")
PATH_RE = re.compile(r"`([^`]+?\.(?:pptx|docx|xlsx))`")


# ---------------------------------------------------------------- extractors
def docx_text(path):
    with zipfile.ZipFile(path) as z:
        names = z.namelist()
        if "word/document.xml" not in names:
            return ""
        root = etree.fromstring(z.read("word/document.xml"))
        out = []
        for p in root.iter(W + "p"):
            t = "".join(n.text or "" for n in p.iter(W + "t"))
            if t.strip():
                out.append(t)
        for extra, tag in (("word/footnotes.xml", "脚注"),
                           ("word/comments.xml", "批注")):
            if extra in names:
                try:
                    r = etree.fromstring(z.read(extra))
                    buf = ["".join(n.text or "" for n in p.iter(W + "t"))
                           for p in r.iter(W + "p")]
                    buf = [b for b in buf if b.strip()]
                    if buf:
                        out.append(f"\n[[{tag}]]")
                        out.extend(buf)
                except Exception:
                    pass
        return "\n".join(out)


def pptx_text(path):
    from pptx import Presentation
    prs = Presentation(path)
    out = []
    for i, slide in enumerate(prs.slides, 1):
        out.append(f"\n===== SLIDE {i} =====")
        def walk(shapes):
            for sh in shapes:
                try:
                    if sh.shape_type == 6:
                        walk(sh.shapes)
                        continue
                except Exception:
                    pass
                try:
                    if sh.has_text_frame:
                        t = "\n".join(p.text for p in sh.text_frame.paragraphs if p.text.strip())
                        if t.strip():
                            out.append(t)
                    if getattr(sh, "has_table", False) and sh.has_table:
                        for row in sh.table.rows:
                            cells = [c.text.strip().replace("\n", " / ") for c in row.cells]
                            if any(cells):
                                out.append(" | ".join(cells))
                except Exception:
                    pass
        walk(slide.shapes)
        try:
            if slide.has_notes_slide:
                nt = slide.notes_slide.notes_text_frame.text.strip()
                if nt:
                    out.append("[备注] " + nt)
        except Exception:
            pass
    return "\n".join(out)


def xlsx_text(path):
    from openpyxl import load_workbook
    wb = load_workbook(path, data_only=True)
    out = []
    for ws in wb.worksheets:
        out.append(f"\n===== SHEET {ws.title} =====")
        for row in ws.iter_rows(values_only=True):
            vals = ["" if v is None else str(v) for v in row]
            if any(v.strip() for v in vals):
                out.append(" | ".join(vals).rstrip(" |"))
    return "\n".join(out)


EXTRACT = {".docx": docx_text, ".pptx": pptx_text, ".xlsx": xlsx_text}


# ---------------------------------------------------------------- readme parse
def parse_readme():
    """-> (ordered list of (relpath, category, note), resolved set)"""
    with open(README, encoding="utf-8") as f:
        lines = f.read().splitlines()

    section = None      # 一 / 二 / 三
    category = None     # ### 小标题
    registered = []     # keep order, dedup later
    seen = set()

    for ln in lines:
        if ln.startswith("## "):
            if "一、" in ln:
                section = "current"
            elif "二、" in ln:
                section = "deprecated"
            elif "三、" in ln:
                section = "pending"
            elif "四、" in ln:
                section = "rules"
            else:
                section = None
            category = None
            continue
        if ln.startswith("### "):
            category = ln[4:].strip()
            continue
        if section != "current":
            continue
        for m in PATH_RE.finditer(ln):
            raw = m.group(1).strip()
            if raw.startswith("_Deprecated") or raw.endswith("README.md"):
                continue
            if raw in seen:
                continue
            seen.add(raw)
            note = ""
            # table row: | `path` | 作用 | 备注 |
            if ln.lstrip().startswith("|"):
                cells = [c.strip() for c in ln.strip().strip("|").split("|")]
                cells = [c for c in cells if c]
                if len(cells) >= 2:
                    idx = next((i for i, c in enumerate(cells) if raw in c), None)
                    if idx is not None and idx + 1 < len(cells):
                        note = re.sub(r"`", "", cells[idx + 1])
            registered.append((raw, category or "", note))
    return registered


def scan_files():
    found = []
    for dirpath, _, files in os.walk(DOCS):
        rel_dir = os.path.relpath(dirpath, DOCS)
        if rel_dir.split(os.sep)[0] == "_Deprecated":
            continue
        for fn in files:
            if os.path.splitext(fn)[1].lower() in EXTS:
                rel = os.path.normpath(os.path.join(rel_dir, fn)).replace("\\", "/")
                found.append(rel)
    return sorted(found)


# ---------------------------------------------------------------- main
def main():
    if not os.path.isfile(README):
        sys.exit(f"README 不存在: {README}")

    registered = parse_readme()
    actual = scan_files()
    reg_paths = [r[0] for r in registered]
    act_set = set(actual)

    def resolve(rel):
        """README 里允许写简写（只写文件名）；能唯一匹配到实际文件就算命中。"""
        p = os.path.normpath(rel).replace("\\", "/")
        if p in act_set:
            return p, ""
        cands = [a for a in actual if os.path.basename(a) == os.path.basename(rel)]
        if len(cands) == 1:
            return cands[0], "按文件名匹配"
        return None, ""

    resolved = []
    missing = []
    for p in reg_paths:
        hit, how = resolve(p)
        if hit:
            resolved.append(hit)
        else:
            missing.append(p)
    resolved_set = set(resolved)
    unregistered = [p for p in actual if p not in resolved_set]

    if os.path.isdir(OUT):
        shutil.rmtree(OUT)
    os.makedirs(OUT, exist_ok=True)

    rows = []
    for rel_raw, cat, note in registered:
        rel, how = resolve(rel_raw)
        if not rel:
            continue
        src = os.path.join(DOCS, rel.replace("/", os.sep))
        if not os.path.isfile(src):
            continue
        ext = os.path.splitext(rel)[1].lower()
        try:
            txt = EXTRACT[ext](src)
            err = ""
        except Exception as e:
            txt, err = "", f"{type(e).__name__}: {e}"
        mirror_rel = os.path.splitext(rel)[0] + ".txt"
        mirror_abs = os.path.join(OUT, mirror_rel.replace("/", os.sep))
        os.makedirs(os.path.dirname(mirror_abs), exist_ok=True)
        header = (f"# 来源: AroundMe/Docs/{rel}\n"
                  f"# 状态: 现行（README 登记）\n"
                  f"# 分类: {cat}\n"
                  f"# 作用: {note or '-'}\n"
                  f"# 字符数: {len(txt)}\n"
                  f"{'# 抽取错误: ' + err if err else ''}\n"
                  f"{'-' * 60}\n\n")
        with open(mirror_abs, "w", encoding="utf-8") as f:
            f.write(header + txt)
        rows.append(("登记", cat, rel, note, len(txt), mirror_rel, err))

    for rel in unregistered:
        ext = os.path.splitext(rel)[1].lower()
        src = os.path.join(DOCS, rel.replace("/", os.sep))
        try:
            txt = EXTRACT[ext](src)
            err = ""
        except Exception as e:
            txt, err = "", f"{type(e).__name__}: {e}"
        mirror_rel = os.path.splitext(rel)[0] + ".txt"
        mirror_abs = os.path.join(OUT, mirror_rel.replace("/", os.sep))
        os.makedirs(os.path.dirname(mirror_abs), exist_ok=True)
        header = (f"# 来源: AroundMe/Docs/{rel}\n"
                  f"# 状态: 未在 README 登记（请补登记或移入 _Deprecated）\n"
                  f"# 字符数: {len(txt)}\n"
                  f"{'# 抽取错误: ' + err if err else ''}\n"
                  f"{'-' * 60}\n\n")
        with open(mirror_abs, "w", encoding="utf-8") as f:
            f.write(header + txt)
        rows.append(("未登记", "-", rel, "", len(txt), mirror_rel, err))

    # ---- index
    dep_files = []
    if os.path.isdir(os.path.join(DOCS, "_Deprecated")):
        for fn in sorted(os.listdir(os.path.join(DOCS, "_Deprecated"))):
            if os.path.splitext(fn)[1].lower() in EXTS:
                dep_files.append(fn)

    L = []
    L.append("# Docs 文本镜像索引\n")
    L.append("> 本目录由 `_tools/docs_sync.py` 自动生成，勿手工编辑。")
    L.append("> 事实源：`AroundMe/Docs/README.md`。重新同步：`python _tools/docs_sync.py`\n")
    L.append(f"- 现行条目：**{sum(1 for r in rows if r[0] == '登记')}** 份")
    L.append(f"- 未登记条目：**{sum(1 for r in rows if r[0] == '未登记')}** 份")
    L.append(f"- README 登记但文件缺失：**{len(missing)}** 份")
    L.append(f"- 已废弃（未抽取）：**{len(dep_files)}** 份\n")

    if missing:
        L.append("## ⚠ README 登记但文件不存在\n")
        for p in missing:
            L.append(f"- `{p}`")
        L.append("")

    L.append("## 现行\n")
    L.append("| 分类 | 源文件 | 作用 | 字符 | 镜像 |")
    L.append("|---|---|---|---:|---|")
    for status, cat, rel, note, n, mirror, err in rows:
        if status != "登记":
            continue
        flag = " ⚠" if err else ""
        L.append(f"| {cat} | `{rel}` | {note or '-'} | {n:,} | `{mirror}`{flag} |")
    L.append("")

    if unregistered:
        L.append("## 未登记（README 里没有）\n")
        L.append("| 源文件 | 字符 | 镜像 |")
        L.append("|---|---:|---|")
        for status, cat, rel, note, n, mirror, err in rows:
            if status == "未登记":
                L.append(f"| `{rel}` | {n:,} | `{mirror}` |")
        L.append("")

    if dep_files:
        L.append("## 已废弃（不抽取，见 `_Deprecated/README.md`）\n")
        for fn in dep_files:
            L.append(f"- `_Deprecated/{fn}`")
        L.append("")

    with open(os.path.join(OUT, "00_INDEX.md"), "w", encoding="utf-8") as f:
        f.write("\n".join(L))

    # ---- console
    print(f"现行 {sum(1 for r in rows if r[0]=='登记')} 份 / 未登记 {len(unregistered)} 份 / 缺失 {len(missing)} 份")
    if missing:
        print("缺失：")
        for p in missing:
            print("  -", p)
    if unregistered:
        print("未登记：")
        for p in unregistered:
            print("  -", p)
    print("索引：", os.path.join(OUT, "00_INDEX.md"))


main()
