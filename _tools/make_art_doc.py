# -*- coding: utf-8 -*-
"""Generate the 'art direction' extraction docx from the deprecated worldbuilding pptx."""
from docx import Document
from docx.shared import Pt
from docx.oxml.ns import qn
import os

OUT = r"S:\AroundMeProject\AroundMe\Docs\Alpha-Trial\ART\美术方向摘录（2024会议·现行）.docx"

doc = Document()

# force CJK font
style = doc.styles["Normal"]
style.font.name = "Microsoft YaHei"
style.font.size = Pt(10.5)
style.element.rPr.rFonts.set(qn("w:eastAsia"), "Microsoft YaHei")


def h(text, level=1):
    p = doc.add_heading(text, level=level)
    for r in p.runs:
        r.font.name = "Microsoft YaHei"
        r._element.rPr.rFonts.set(qn("w:eastAsia"), "Microsoft YaHei")
    return p


def para(text, bold=False):
    p = doc.add_paragraph()
    r = p.add_run(text)
    r.bold = bold
    r.font.name = "Microsoft YaHei"
    r._element.rPr.rFonts.set(qn("w:eastAsia"), "Microsoft YaHei")
    return p


h("美术与调性方向摘录", 0)
para("来源：_Deprecated/AlphaTrial世界观背景&美术.pptx 第 10–19 页（2024 年 1 月 5 日 / 2 月 23 日会议记录）")
para("说明：该 pptx 的「剧本策划」部分（第 3–9 页）是已废弃的旧世界观（K-PAX 版），不在此摘录。"
     "以下仅保留美术、镜头、调性与世界边界的结论，原文照录，未作改写。")
para("状态：这些结论在 2024 年会议上确定；是否仍为现行标准，请策划/美术确认后在 Docs/README.md 勾选。", bold=True)

h("一、美术风格", 1)
para("渲染风格（2024/2/23 线下会议）：塞尔达式卡通 / 日式三渲二 / 轻量手绘贴图。"
     "（与 ART/CelShading一些参数调教方法.pptx 的技术方案一致）")
para("镜头（LensCamera）：动森那样略带弯曲的镜头；先按动森做；旋转方案「先写着备用」。")
para("头身比与写实度（2024/1/5）：参考《蔚蓝档案》+ 粘土人 —— 保证细节与可爱度，同时让资产制作难度可控。")
para("捏人系统：Animal Party + Chiikawa 方向。")
para("角色模型：手部先做「烘焙手套」的手感。")

h("二、调性与叙事口吻", 1)
para("主题：小孩 / 绘本风格 / 无厘头 / 后启示录 / 有点荒废、有点地球的感觉，也允许其它奇幻元素存在。")

h("三、世界与玩法的早期边界结论", 1)
for t in [
    "地图尺度：1–2 分钟走到边界，约等于动森一座岛那么大。",
    "玩家也可以选择基地。",
    "家园没了，流浪到未来的偏远星球。",
    "大功率联系不可实现，只能微弱传递信息 —— 这条是「擦肩通信」在世界观里的合法性来源。",
    "货币：以太能量（普通货币）→ 抽东西 / 交换东西 / 抽 NPC；稀有能量货币 → 更高级的抽取与交换。",
    "信息 → 蓝图 / 提示。",
    "核心情感动作：一直在试图联系同胞；非主动式社交；获得与收到消息。",
    "生活 + 绿化。",
]:
    doc.add_paragraph(t, style="List Bullet")

h("附：同一批会议中仍需复核的三条策略表述", 1)
para("以下三条出自 MTG/会议_头脑风暴记录.docx（2024/1/29），属策略性表述而非美术结论，"
     "放在这里只为避免丢失，不代表现行立场：", )
for t in [
    "「先抄一个动森」（Alpha Trial 阶段目标）。",
    "「确定众筹来做初期的资金募集」。",
    "「AI 出图 尽可能碰瓷动森、原神等知名 IP」—— 涉及第三方 IP，若仍有效需法务复核。",
]:
    doc.add_paragraph(t, style="List Bullet")

os.makedirs(os.path.dirname(OUT), exist_ok=True)
doc.save(OUT)
print("saved:", OUT, os.path.getsize(OUT), "bytes")
