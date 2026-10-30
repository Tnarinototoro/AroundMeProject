# -*- coding: utf-8 -*-
"""Extract all readable text from /Docs into .txt mirrors, report sizes."""
import os, sys, zipfile, re
from lxml import etree

SRC = r"S:\AroundMeProject\AroundMe\Docs"
OUT = r"S:\AroundMeProject\_docs_txt"

W = "{http://schemas.openxmlformats.org/wordprocessingml/2006/main}"
A = "{http://schemas.openxmlformats.org/drawingml/2006/main}"

def docx_text(path):
    with zipfile.ZipFile(path) as z:
        names = [n for n in z.namelist() if n.startswith("word/") and n.endswith(".xml")]
        if "word/document.xml" not in names:
            return ""
        try:
            root = etree.fromstring(z.read("word/document.xml"))
        except Exception as e:
            return f"[parse error {e}]"
        out = []
        for p in root.iter(W + "p"):
            txt = "".join(t.text or "" for t in p.iter(W + "t"))
            if txt.strip():
                out.append(txt)
        # footnotes/comments often hold extra text
        for extra in ("word/footnotes.xml", "word/endnotes.xml", "word/comments.xml"):
            if extra in names:
                try:
                    r2 = etree.fromstring(z.read(extra))
                    buf = ["".join(t.text or "" for t in p.iter(W + "t")) for p in r2.iter(W + "p")]
                    buf = [b for b in buf if b.strip()]
                    if buf:
                        out.append("\n[[%s]]" % extra)
                        out.extend(buf)
                except Exception:
                    pass
        return "\n".join(out)

def pptx_text(path):
    from pptx import Presentation
    try:
        prs = Presentation(path)
    except Exception as e:
        return f"[pptx parse error {e}]"
    out = []
    for i, slide in enumerate(prs.slides, 1):
        out.append(f"\n===== SLIDE {i} =====")
        def walk(shapes, depth=0):
            for sh in shapes:
                try:
                    if sh.shape_type == 6:  # group
                        walk(sh.shapes, depth + 1)
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
    try:
        wb = load_workbook(path, data_only=True)
    except Exception as e:
        return f"[xlsx parse error {e}]"
    out = []
    for ws in wb.worksheets:
        out.append(f"\n===== SHEET {ws.title} =====")
        for row in ws.iter_rows(values_only=True):
            vals = ["" if v is None else str(v) for v in row]
            if any(v.strip() for v in vals):
                out.append(" | ".join(vals).rstrip(" |"))
    return "\n".join(out)

def main():
    os.makedirs(OUT, exist_ok=True)
    rows = []
    for dirpath, _, files in os.walk(SRC):
        for fn in files:
            p = os.path.join(dirpath, fn)
            ext = fn.lower().rsplit(".", 1)[-1]
            try:
                if ext == "docx":
                    txt = docx_text(p)
                elif ext == "pptx":
                    txt = pptx_text(p)
                elif ext == "xlsx":
                    txt = xlsx_text(p)
                else:
                    continue
            except Exception as e:
                txt = f"[error {e}]"
            rel = os.path.relpath(p, SRC).replace("\\", "__").rsplit(".", 1)[0]
            dst = os.path.join(OUT, rel + ".txt")
            with open(dst, "w", encoding="utf-8") as f:
                f.write(txt)
            rows.append((os.path.relpath(p, SRC), len(txt), os.path.getsize(p)))
    rows.sort(key=lambda r: -r[1])
    print("chars | kbytes(src) | file")
    for rel, n, sz in rows:
        print(f"{n:7d} | {sz//1024:9d} | {rel}")

main()
