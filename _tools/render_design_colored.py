#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
把 PropHunt_Whitebox_Design.md 渲染成带状态颜色的 HTML。

只做渲染：不修改原 md 一个字，解析后按 DONE / TODO / DOING / BLOCKED / CUT
以及「待验证」类措辞上色，表格行整行着色，顶部给统计与筛选。

用法：
    python _tools/render_design_colored.py
"""

import html
import os
import re
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, "PropHunt_Whitebox_Design.md")
DST = os.path.join(ROOT, "PropHunt_Whitebox_Design.html")

# ---------------------------------------------------------------- 状态识别

STATUS_CODES = ["BLOCKED", "DOING", "DONE", "TODO", "CUT"]
DONE_WORDS = ["已修", "已实现", "已落地", "已并入", "已实测", "已确认"]
WAIT_RE = re.compile(r"(待实测|待验证|待双端实测|待确认|待调|待测|待改|待补|待接入|待实现|待定|未验证|尚未验证|未实测)")
TODO_WORDS = ["未实现", "未开始", "缺失", "没有实现"]


def classify(text):
    """返回 (state, span) —— span 是可着色替换片段列表。"""
    t = text.strip()
    for code in STATUS_CODES:
        if t == code or t.startswith(code):
            return code.lower(), None
    if WAIT_RE.search(t):
        return "wait", None
    for w in DONE_WORDS:
        if w in t:
            return "done", None
    for w in TODO_WORDS:
        if w in t:
            return "todo", None
    return None, None


# ---------------------------------------------------------------- 行内渲染

CHIP_CLASS = {
    "TODO": "todo",
    "DONE": "done",
    "DOING": "doing",
    "BLOCKED": "blocked",
    "CUT": "cut",
}


def _chip(code):
    cls = CHIP_CLASS.get(code, "todo")
    return '<span class="chip chip-%s">%s</span>' % (cls, code)


def inline(text, wait=True):
    """markdown 行内元素 -> HTML，状态关键词上色。"""
    # 1. 转义
    s = html.escape(text, quote=False)

    # 2. 行内代码 `x` -> 占位
    codes = []

    def _keep(m):
        codes.append(m.group(1))
        return "\x00%d\x00" % (len(codes) - 1)

    s = re.sub(r"`([^`]+)`", _keep, s)

    # 3. 链接 [t](u)
    s = re.sub(r"\[([^\]]+)\]\(([^)]+)\)", r'<a href="\2">\1</a>', s)

    # 4. 加粗 / 斜体
    s = re.sub(r"\*\*([^*]+)\*\*", r"<strong>\1</strong>", s)
    s = re.sub(r"(?<!\*)\*([^*]+)\*(?!\*)", r"<em>\1</em>", s)

    # 5. 状态码（独立词）
    for code in STATUS_CODES:
        s = re.sub(r"\b%s\b" % code, _chip(code), s)

    # 6. 待验证类措辞
    if wait:
        s = WAIT_RE.sub(lambda m: '<span class="wait">%s</span>' % m.group(1), s)

    # 7. 还原行内代码（本身是状态码的也上色）
    def _restore(m):
        idx = int(m.group(1))
        raw = codes[idx]
        if raw.strip() in STATUS_CODES:
            return _chip(raw.strip())
        return '<code>%s</code>' % raw

    s = re.sub(r"\x00(\d+)\x00", _restore, s)
    return s


# ---------------------------------------------------------------- 块级解析

def parse_blocks(lines):
    blocks = []
    i, n = 0, len(lines)
    while i < n:
        line = lines[i]
        if not line.strip():
            i += 1
            continue

        if line.startswith("```"):
            lang = line[3:].strip()
            j = i + 1
            buf = []
            while j < n and not lines[j].startswith("```"):
                buf.append(lines[j])
                j += 1
            blocks.append(("code", lang, "\n".join(buf)))
            i = j + 1
            continue

        m = re.match(r"^(#{1,6})\s+(.*)$", line)
        if m:
            blocks.append(("h", len(m.group(1)), m.group(2).strip()))
            i += 1
            continue

        if re.match(r"^-{3,}\s*$", line) or re.match(r"^\*{3,}\s*$", line):
            blocks.append(("hr",))
            i += 1
            continue

        if line.startswith("|"):
            rows = []
            while i < n and lines[i].startswith("|"):
                rows.append(lines[i])
                i += 1
            blocks.append(("table", rows))
            continue

        if line.startswith(">"):
            buf = []
            while i < n and lines[i].startswith(">"):
                buf.append(lines[i][1:].lstrip())
                i += 1
            blocks.append(("quote", buf))
            continue

        if re.match(r"^\s*[-*+]\s+", line) or re.match(r"^\s*\d+\.\s+", line):
            ordered = bool(re.match(r"^\s*\d+\.\s+", line))
            marker = r"^\s*\d+\.\s+" if ordered else r"^\s*[-*+]\s+"
            items = []
            while i < n and re.match(marker, lines[i]):
                items.append(lines[i])
                i += 1
            blocks.append(("list", ordered, items))
            continue

        buf = [line]
        i += 1
        while i < n and lines[i].strip():
            nxt = lines[i]
            if (
                nxt.startswith("|")
                or nxt.startswith(">")
                or nxt.startswith("```")
                or nxt.startswith("#")
                or re.match(r"^\s*[-*+]\s+", nxt)
                or re.match(r"^\s*\d+\.\s+", nxt)
                or re.match(r"^-{3,}\s*$", nxt)
            ):
                break
            buf.append(nxt)
            i += 1
        blocks.append(("para", buf))

    return blocks


def split_row(row):
    cells = row.strip().strip("|")
    return [c.strip() for c in cells.split("|")]


def is_align_row(cells):
    return all(re.match(r"^:?-{1,}:?$", c.replace(" ", "")) for c in cells if c != "")


# ---------------------------------------------------------------- 统计

STATS = {"done": 0, "todo": 0, "doing": 0, "blocked": 0, "cut": 0, "wait": 0}


def bump(state):
    if state in STATS:
        STATS[state] += 1


# ---------------------------------------------------------------- HTML 生成

def render_table(rows, extra_class=""):
    cells = [split_row(r) for r in rows]
    header = cells[0]
    body = cells[2:] if len(cells) > 2 and is_align_row(cells[1]) else cells[1:]

    out = ['<div class="table-wrap"><table class="%s">' % extra_class]
    out.append("<thead><tr>")
    for c in header:
        out.append("<th>%s</th>" % inline(c))
    out.append("</tr></thead><tbody>")

    for row in body:
        state = None
        for c in row:
            st, _ = classify(c)
            if st in ("done", "todo", "doing", "blocked", "cut"):
                state = st
                break
            if st == "wait" and state is None:
                state = "wait"
        bump(state)
        cls = ' class="row-%s"' % state if state else ""
        out.append("<tr%s>" % cls)
        for c in row:
            out.append("<td>%s</td>" % inline(c))
        out.append("</tr>")

    out.append("</tbody></table></div>")
    return "".join(out)


def slug(text):
    t = re.sub(r"<[^>]+>", "", text)
    t = re.sub(r"[^\w\u4e00-\u9fff]+", "-", t).strip("-")
    return t.lower() or "sec"


def render(lines):
    blocks = parse_blocks(lines)
    out = []
    toc = []
    used = {}

    for idx, b in enumerate(blocks):
        kind = b[0]
        if kind == "h":
            level, text = b[1], b[2]
            sid = slug(text)
            if sid in used:
                used[sid] += 1
                sid = "%s-%d" % (sid, used[sid])
            else:
                used[sid] = 0
            if 2 <= level <= 3:
                toc.append((level, sid, re.sub(r"[`*]", "", text)))
            tag = "h%d" % level
            out.append('<%s id="%s">%s</%s>' % (tag, sid, inline(text, wait=False), tag))

        elif kind == "para":
            text = " ".join(x.strip() for x in b[1])
            out.append("<p>%s</p>" % inline(text))

        elif kind == "quote":
            inner = "".join("<p>%s</p>" % inline(x) for x in b[1] if x.strip())
            out.append("<blockquote>%s</blockquote>" % inner)

        elif kind == "list":
            ordered, items = b[1], b[2]
            tag = "ol" if ordered else "ul"
            out.append("<%s>" % tag)
            for it in items:
                body = re.sub(r"^\s*(?:[-*+]|\d+\.)\s+", "", it)
                out.append("<li>%s</li>" % inline(body))
            out.append("</%s>" % tag)

        elif kind == "code":
            lang, code = b[1], b[2]
            esc = html.escape(code)
            if lang == "mermaid":
                out.append(
                    '<div class="mermaid-box"><div class="mermaid-label">'
                    "mermaid 流程图（保留源码，文本版见 §3.3–§3.4）</div>"
                    "<pre class=\"mermaid\">%s</pre></div>" % esc
                )
            else:
                out.append('<pre class="code"><code>%s</code></pre>' % esc)

        elif kind == "table":
            out.append(render_table(b[1]))

        elif kind == "hr":
            out.append("<hr>")

    return "\n".join(out), toc


# ---------------------------------------------------------------- 模板

CSS = """
:root{
  --bg:#fbfaf7; --fg:#23211d; --muted:#6b665c; --line:#e3ded2;
  --done:#1a7f37; --done-bg:#e8f5ec;
  --todo:#c62828; --todo-bg:#fdeaea;
  --doing:#1565c0; --doing-bg:#e7f0fb;
  --blocked:#6a1b9a; --blocked-bg:#f2e8f8;
  --cut:#6b7280; --cut-bg:#f0f0f0;
  --wait:#b26a00; --wait-bg:#fdf3e2;
  --accent:#8a6d3b;
}
*{box-sizing:border-box}
html{scroll-behavior:smooth}
body{
  margin:0; background:var(--bg); color:var(--fg);
  font-family:"Source Han Sans SC","Noto Sans CJK SC","Microsoft YaHei","PingFang SC",system-ui,sans-serif;
  font-size:15px; line-height:1.75;
}
.wrap{display:grid; grid-template-columns:260px minmax(0,1fr); gap:36px; max-width:1280px; margin:0 auto; padding:32px 28px 80px}
nav{
  position:sticky; top:24px; align-self:start; max-height:calc(100vh - 48px); overflow:auto;
  font-size:13px; border-right:1px solid var(--line); padding-right:18px;
}
nav h4{margin:0 0 10px; font-size:12px; letter-spacing:.08em; color:var(--muted); text-transform:uppercase}
nav a{display:block; color:var(--muted); text-decoration:none; padding:3px 0; border-left:2px solid transparent; padding-left:8px}
nav a:hover{color:var(--fg)}
nav a.l3{padding-left:22px; font-size:12.5px}
main{min-width:0}
h1{font-size:26px; line-height:1.4; margin:0 0 18px; letter-spacing:-.01em}
h2{font-size:20px; margin:44px 0 14px; padding-bottom:8px; border-bottom:2px solid var(--line)}
h3{font-size:16.5px; margin:30px 0 10px; color:#3b372e}
h4{font-size:15px; margin:22px 0 8px}
p{margin:10px 0}
a{color:#0b5cad}
strong{font-weight:650}
hr{border:none; border-top:1px solid var(--line); margin:34px 0}
blockquote{
  margin:14px 0; padding:12px 16px; background:#fff; border-left:3px solid var(--accent);
  color:#3d3a33; border-radius:0 6px 6px 0;
}
blockquote p{margin:4px 0}
ul,ol{margin:10px 0; padding-left:24px}
li{margin:5px 0}
code{background:#efece4; padding:1px 5px; border-radius:4px; font-size:.9em;
     font-family:"Cascadia Code",Consolas,"Courier New",monospace}
pre.code{background:#2b2823; color:#e9e4d8; padding:14px 16px; border-radius:8px; overflow:auto; font-size:13px; line-height:1.6}
pre.code code{background:none; color:inherit; padding:0}
.mermaid-box{background:#fff; border:1px dashed var(--line); border-radius:8px; padding:10px 14px; margin:14px 0}
.mermaid-label{font-size:12px; color:var(--muted); margin-bottom:6px}
pre.mermaid{margin:0; font-size:12px; line-height:1.6; color:#4a463c; overflow:auto}

/* 状态 */
.chip{display:inline-block; padding:0 7px; border-radius:999px; font-size:12px; font-weight:700;
      letter-spacing:.03em; line-height:20px; vertical-align:1px; font-family:Consolas,monospace}
.chip-done{background:var(--done-bg); color:var(--done); box-shadow:inset 0 0 0 1px #bfe0c8}
.chip-todo{background:var(--todo-bg); color:var(--todo); box-shadow:inset 0 0 0 1px #f0bcbc}
.chip-doing{background:var(--doing-bg); color:var(--doing); box-shadow:inset 0 0 0 1px #b9d2ee}
.chip-blocked{background:var(--blocked-bg); color:var(--blocked); box-shadow:inset 0 0 0 1px #d8bce9}
.chip-cut{background:var(--cut-bg); color:var(--cut); box-shadow:inset 0 0 0 1px #d5d5d5}
.wait{color:var(--wait); font-weight:600; background:linear-gradient(transparent 62%, #fbe6c2 62%)}

.table-wrap{overflow:auto; margin:14px 0}
table{border-collapse:collapse; width:100%; font-size:14px; background:#fff}
th,td{border:1px solid var(--line); padding:7px 10px; text-align:left; vertical-align:top}
th{background:#f2efe7; font-weight:650; white-space:nowrap}
tbody tr:hover{filter:brightness(.985)}
tr.row-done td{background:var(--done-bg)}
tr.row-done td:first-child{box-shadow:inset 3px 0 0 var(--done)}
tr.row-todo td{background:var(--todo-bg)}
tr.row-todo td:first-child{box-shadow:inset 3px 0 0 var(--todo)}
tr.row-doing td{background:var(--doing-bg)}
tr.row-doing td:first-child{box-shadow:inset 3px 0 0 var(--doing)}
tr.row-blocked td{background:var(--blocked-bg)}
tr.row-blocked td:first-child{box-shadow:inset 3px 0 0 var(--blocked)}
tr.row-cut td{background:var(--cut-bg); color:#777}
tr.row-wait td{background:var(--wait-bg)}
tr.row-wait td:first-child{box-shadow:inset 3px 0 0 var(--wait)}

/* 顶部面板 */
.hero{border:1px solid var(--line); background:#fff; border-radius:10px; padding:16px 18px; margin-bottom:26px}
.hero .meta{font-size:13px; color:var(--muted)}
.legend{display:flex; flex-wrap:wrap; gap:10px; margin:12px 0 0; font-size:13px}
.legend .item{display:flex; align-items:center; gap:6px}
.stat-row{display:flex; flex-wrap:wrap; gap:22px; margin-top:14px; padding-top:12px; border-top:1px dashed var(--line)}
.stat{font-size:13px; color:var(--muted)}
.stat b{display:block; font-size:22px; line-height:1.2; color:var(--fg)}
.toolbar{display:flex; gap:8px; align-items:center; margin-top:14px; font-size:13px; color:var(--muted)}
.toolbar button{
  border:1px solid var(--line); background:#fff; color:#3d3a33; border-radius:999px;
  padding:4px 14px; cursor:pointer; font-size:13px; font-family:inherit;
}
.toolbar button.on{background:#2b2823; color:#fff; border-color:#2b2823}
body.only-todo tr.row-done{display:none}
body.only-todo tr.row-cut{display:none}
body.only-done tr.row-todo,body.only-done tr.row-doing,body.only-done tr.row-wait{display:none}

@media print{
  nav,.toolbar{display:none}
  .wrap{display:block; max-width:none; padding:0}
  tr,pre,blockquote{break-inside:avoid}
  body{background:#fff}
}
@media (max-width:900px){
  .wrap{display:block; padding:20px}
  nav{position:static; border-right:none; border-bottom:1px solid var(--line); padding:0 0 14px; margin-bottom:20px; max-height:none}
}
"""

JS = """
<script>
function setFilter(mode){
  document.body.classList.remove('only-todo','only-done');
  if(mode==='todo') document.body.classList.add('only-todo');
  if(mode==='done') document.body.classList.add('only-done');
  document.querySelectorAll('.toolbar button').forEach(function(b){
    b.classList.toggle('on', b.dataset.mode===mode);
  });
}
</script>
"""


def build():
    with open(SRC, "r", encoding="utf-8") as f:
        lines = f.read().replace("\r\n", "\n").split("\n")

    body, toc = render(lines)

    nav = ['<nav><h4>目录</h4>']
    for level, sid, text in toc:
        nav.append('<a class="l%d" href="#%s">%s</a>' % (level, sid, html.escape(text)))
    nav.append("</nav>")

    total = sum(STATS.values())
    hero = [
        '<div class="hero">',
        '<div class="meta">白盒设计文档 · 状态着色视图（由 <code>PropHunt_Whitebox_Design.md</code> 自动渲染，原文未改动）</div>',
        '<div class="legend">',
        '<span class="item"><span class="chip chip-done">DONE</span>已实现</span>',
        '<span class="item"><span class="chip chip-todo">TODO</span>未开始</span>',
        '<span class="item"><span class="chip chip-doing">DOING</span>进行中</span>',
        '<span class="item"><span class="chip chip-blocked">BLOCKED</span>被卡住</span>',
        '<span class="item"><span class="chip chip-cut">CUT</span>本期不做</span>',
        '<span class="item"><span class="wait">待验证</span>已写但未自测</span>',
        "</div>",
        '<div class="stat-row">',
        '<div class="stat"><b>%d</b>状态条目</div>' % total,
        '<div class="stat"><b style="color:var(--done)">%d</b>已完成</div>' % STATS["done"],
        '<div class="stat"><b style="color:var(--todo)">%d</b>未开始</div>' % STATS["todo"],
        '<div class="stat"><b style="color:var(--wait)">%d</b>待验证</div>' % STATS["wait"],
        '<div class="stat"><b style="color:var(--doing)">%d</b>进行中</div>' % STATS["doing"],
        "</div>",
        '<div class="toolbar">视图：'
        '<button class="on" data-mode="all" onclick="setFilter(\'all\')">全部</button>'
        '<button data-mode="todo" onclick="setFilter(\'todo\')">只看没做的</button>'
        '<button data-mode="done" onclick="setFilter(\'done\')">只看做完的</button>'
        "</div>",
        "</div>",
    ]

    doc = """<!DOCTYPE html>
<html lang="zh-CN">
<head>
<meta charset="utf-8">
<meta name="viewport" content="width=device-width,initial-scale=1">
<title>Prop Hunt 白盒设计文档 · 状态着色</title>
<style>%s</style>
</head>
<body>
<div class="wrap">
%s
<main>
%s
%s
</main>
</div>
%s
</body>
</html>
""" % (CSS, "\n".join(nav), "\n".join(hero), body, JS)

    with open(DST, "w", encoding="utf-8") as f:
        f.write(doc)

    print("written:", DST)
    print("stats:", STATS)


if __name__ == "__main__":
    build()
