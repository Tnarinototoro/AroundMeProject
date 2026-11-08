#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
把 PropHunt_Whitebox_Design.md 渲染成带字体颜色的 Word 文档（.docx）。

与 render_design_colored.py 共用解析器；不修改原 md。
颜色：DONE 绿 / TODO 红 / DOING 蓝 / BLOCKED 紫 / CUT 灰 / 待验证 橙。

用法：
    python _tools/render_design_docx.py
"""

import os
import re
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)

import render_design_colored as rd  # noqa: E402

from docx import Document  # noqa: E402
from docx.enum.table import WD_TABLE_ALIGNMENT  # noqa: E402
from docx.enum.text import WD_ALIGN_PARAGRAPH  # noqa: E402
from docx.oxml import OxmlElement  # noqa: E402
from docx.oxml.ns import qn  # noqa: E402
from docx.shared import Pt, RGBColor  # noqa: E402

ROOT = rd.ROOT
SRC = rd.SRC
DST = os.path.join(ROOT, "PropHunt_Whitebox_Design.docx")

COLORS = {
    "DONE": "1A7F37",
    "TODO": "C62828",
    "DOING": "1565C0",
    "BLOCKED": "6A1B9A",
    "CUT": "6B7280",
    "wait": "B26A00",
    "text": "23211D",
    "muted": "6B665C",
    "accent": "8A6D3B",
}

ROW_FILL = {
    "done": "E8F5EC",
    "todo": "FDEAEA",
    "doing": "E7F0FB",
    "blocked": "F2E8F8",
    "cut": "F0F0F0",
    "wait": "FDF3E2",
}

CJK_FONT = "微软雅黑"
MONO_FONT = "Consolas"


def set_run_font(run, name=CJK_FONT, size=None, bold=None, color=None):
    run.font.name = name
    rpr = run._element.get_or_add_rPr()
    rfonts = rpr.find(qn("w:rFonts"))
    if rfonts is None:
        rfonts = OxmlElement("w:rFonts")
        rpr.append(rfonts)
    rfonts.set(qn("w:eastAsia"), name)
    rfonts.set(qn("w:ascii"), name)
    rfonts.set(qn("w:hAnsi"), name)
    if size is not None:
        run.font.size = Pt(size)
    if bold is not None:
        run.font.bold = bold
    if color is not None:
        run.font.color.rgb = RGBColor.from_string(color)


WAIT_PAT = rd.WAIT_RE.pattern.replace("(", "(?:", 1)

TOKEN_RE = re.compile(
    r"(`[^`]+`)"          # 行内代码
    r"|(\*\*[^*]+\*\*)"   # 加粗
    r"|(\bBLOCKED\b|\bDOING\b|\bDONE\b|\bTODO\b|\bCUT\b)"  # 状态码
    r"|(" + WAIT_PAT + r")"  # 待验证类
)


def add_inline(paragraph, text, base_size=10.5, muted=False):
    """把 markdown 行内语法写进段落，状态词上色。"""
    pos = 0
    base_color = COLORS["muted"] if muted else COLORS["text"]
    for m in TOKEN_RE.finditer(text):
        if m.start() > pos:
            run = paragraph.add_run(text[pos:m.start()])
            set_run_font(run, size=base_size, color=base_color)
        code, bold, status, wait = m.groups()
        if code:
            inner = code[1:-1]
            run = paragraph.add_run(inner)
            if inner.strip() in COLORS and inner.strip() in ("TODO", "DONE", "DOING", "BLOCKED", "CUT"):
                set_run_font(run, name=MONO_FONT, size=base_size - 0.5,
                             bold=True, color=COLORS[inner.strip()])
            else:
                set_run_font(run, name=MONO_FONT, size=base_size - 0.5, color=base_color)
        elif bold:
            run = paragraph.add_run(bold[2:-2])
            set_run_font(run, size=base_size, bold=True, color=base_color)
        elif status:
            run = paragraph.add_run(status)
            set_run_font(run, size=base_size, bold=True, color=COLORS[status])
        elif wait:
            run = paragraph.add_run(wait)
            set_run_font(run, size=base_size, bold=True, color=COLORS["wait"])
        pos = m.end()
    if pos < len(text):
        run = paragraph.add_run(text[pos:])
        set_run_font(run, size=base_size, color=base_color)


def shade_cell(cell, fill):
    tc_pr = cell._tc.get_or_add_tcPr()
    shd = OxmlElement("w:shd")
    shd.set(qn("w:val"), "clear")
    shd.set(qn("w:color"), "auto")
    shd.set(qn("w:fill"), fill)
    tc_pr.append(shd)


def add_table(doc, rows):
    cells = [rd.split_row(r) for r in rows]
    header = cells[0]
    body = cells[2:] if len(cells) > 2 and rd.is_align_row(cells[1]) else cells[1:]

    table = doc.add_table(rows=1, cols=len(header))
    table.style = "Table Grid"
    table.alignment = WD_TABLE_ALIGNMENT.CENTER

    hdr = table.rows[0].cells
    for i, c in enumerate(header):
        hdr[i].text = ""
        p = hdr[i].paragraphs[0]
        run = p.add_run(re.sub(r"[`*]", "", c))
        set_run_font(run, size=9.5, bold=True, color="2B2823")
        shade_cell(hdr[i], "F2EFE7")

    for row in body:
        state = None
        for c in row:
            st, _ = rd.classify(c)
            if st in ROW_FILL:
                state = st
                break
        cells_row = table.add_row().cells
        for i, c in enumerate(row):
            if i >= len(cells_row):
                break
            cells_row[i].text = ""
            p = cells_row[i].paragraphs[0]
            p.paragraph_format.space_before = Pt(1)
            p.paragraph_format.space_after = Pt(1)
            add_inline(p, c, base_size=9.5)
            if state:
                shade_cell(cells_row[i], ROW_FILL[state])

    doc.add_paragraph()


def add_heading(doc, level, text):
    sizes = {1: 20, 2: 15, 3: 12.5, 4: 11}
    p = doc.add_paragraph()
    p.paragraph_format.space_before = Pt(14 if level <= 2 else 10)
    p.paragraph_format.space_after = Pt(6)
    p.paragraph_format.keep_with_next = True
    add_inline(p, text, base_size=sizes.get(level, 11))
    for r in p.runs:
        r.font.bold = True
    if level == 1:
        # 下划线分节
        pPr = p._p.get_or_add_pPr()
        bottom = OxmlElement("w:pBdr")
        b = OxmlElement("w:bottom")
        b.set(qn("w:val"), "single")
        b.set(qn("w:sz"), "8")
        b.set(qn("w:space"), "2")
        b.set(qn("w:color"), "8A6D3B")
        bottom.append(b)
        pPr.append(bottom)


def build():
    with open(SRC, "r", encoding="utf-8") as f:
        lines = f.read().replace("\r\n", "\n").split("\n")

    blocks = rd.parse_blocks(lines)

    doc = Document()
    # 页边距
    for section in doc.sections:
        section.left_margin = Pt(54)
        section.right_margin = Pt(54)
        section.top_margin = Pt(54)
        section.bottom_margin = Pt(54)

    # 封面信息
    p = doc.add_paragraph()
    run = p.add_run("状态着色说明")
    set_run_font(run, size=10, bold=True, color=COLORS["muted"])
    p = doc.add_paragraph()
    add_inline(
        p,
        "本文由 PropHunt_Whitebox_Design.md 自动渲染，正文未改动；"
        "绿色=已完成，红色=未开始，蓝色=进行中，紫色=被卡住，灰色=本期不做，橙色=待验证。",
        base_size=9.5,
        muted=True,
    )
    doc.add_paragraph()

    for b in blocks:
        kind = b[0]
        if kind == "h":
            add_heading(doc, b[1], b[2])
        elif kind == "para":
            text = " ".join(x.strip() for x in b[1])
            p = doc.add_paragraph()
            p.paragraph_format.space_after = Pt(4)
            add_inline(p, text)
        elif kind == "quote":
            for line in b[1]:
                if not line.strip():
                    continue
                p = doc.add_paragraph()
                p.paragraph_format.left_indent = Pt(14)
                p.paragraph_format.space_after = Pt(2)
                add_inline(p, line, muted=True)
                pPr = p._p.get_or_add_pPr()
                left = OxmlElement("w:pBdr")
                lb = OxmlElement("w:left")
                lb.set(qn("w:val"), "single")
                lb.set(qn("w:sz"), "12")
                lb.set(qn("w:space"), "6")
                lb.set(qn("w:color"), "8A6D3B")
                left.append(lb)
                pPr.append(left)
        elif kind == "list":
            ordered, items = b[1], b[2]
            for idx, it in enumerate(items):
                body = re.sub(r"^\s*(?:[-*+]|\d+\.)\s+", "", it)
                p = doc.add_paragraph()
                p.paragraph_format.left_indent = Pt(18)
                p.paragraph_format.space_after = Pt(2)
                bullet = ("%d. " % (idx + 1)) if ordered else "• "
                run = p.add_run(bullet)
                set_run_font(run, size=10.5, color=COLORS["muted"])
                add_inline(p, body)
        elif kind == "code":
            lang, code = b[1], b[2]
            p = doc.add_paragraph()
            p.paragraph_format.left_indent = Pt(12)
            p.paragraph_format.space_before = Pt(4)
            p.paragraph_format.space_after = Pt(8)
            run = p.add_run(code)
            set_run_font(run, name=MONO_FONT, size=8.5, color="4A463C")
            shade_paragraph(p, "F7F5EF")
        elif kind == "table":
            add_table(doc, b[1])
        elif kind == "hr":
            p = doc.add_paragraph()
            pPr = p._p.get_or_add_pPr()
            bottom = OxmlElement("w:pBdr")
            b2 = OxmlElement("w:bottom")
            b2.set(qn("w:val"), "single")
            b2.set(qn("w:sz"), "6")
            b2.set(qn("w:space"), "1")
            b2.set(qn("w:color"), "E3DED2")
            bottom.append(b2)
            pPr.append(bottom)

    doc.save(DST)
    print("written:", DST)


def shade_paragraph(paragraph, fill):
    pPr = paragraph._p.get_or_add_pPr()
    shd = OxmlElement("w:shd")
    shd.set(qn("w:val"), "clear")
    shd.set(qn("w:color"), "auto")
    shd.set(qn("w:fill"), fill)
    pPr.append(shd)


if __name__ == "__main__":
    build()
