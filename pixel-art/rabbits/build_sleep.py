import json
import os
import sys

SKILL = os.path.join(os.path.expanduser("~"), ".dsh", "skills", "pixel-art-studio", "scripts")
sys.path.insert(0, SKILL)
from pixelstudio import Sprite, ramp, mix

OUT = r"S:\AroundMeProject\pixel-art\rabbits"
os.makedirs(OUT, exist_ok=True)

FUR = ramp("#e8ecf4", 5, hue_shift=10)       # snow fur, cool shadows
EAR = ramp("#f0a8bc", 3)                     # inner ear
BELLY = ramp("#f4f7fb", 4, hue_shift=8)
WHITE = "#ffffff"
NOSE = "#c93a5c"
INK = "#221a2e"
D, M1, M2, L1, L2 = FUR[0], FUR[1], FUR[2], FUR[3], FUR[-1]


def zed(s, x, y, size, color):
    """Draw a blocky 'Z' of the given size (3,4,5)."""
    s.rect(x, y, x + size - 1, y, color)
    for i in range(1, size - 1):
        s.px(x + size - 1 - i, y + i, color)
    s.rect(x, y + size - 1, x + size - 1, y + size - 1, color)


def sleeping(s, *, breath=0, twitch=0, zz=0, ear_lag=0):
    """Curled sleeping rabbit, facing left, light from top-left."""
    b = breath

    # ---------- tail
    s.circle(52, 45, 4, M1, fill=True)
    s.circle(51, 44, 3, L1, fill=True, only="opaque")

    # ---------- hind leg (tucked)
    s.ellipse(38, 38 + b, 54, 56 + b, D)
    s.ellipse(39, 39 + b, 52, 54 + b, M2, only="opaque")
    s.ellipse(40, 40 + b, 49, 50 + b, L1, only="opaque")
    s.ellipse(41, 50 + b, 53, 55 + b, M1, only="opaque")   # foot pad

    # ---------- body (curled mass)
    s.ellipse(14, 30 + b, 52, 57 + b, D)
    s.ellipse(15, 29 + b, 51, 55 + b, M2, only="opaque")
    s.ellipse(16, 28 + b, 46, 51 + b, L1, only="opaque")
    s.ellipse(17, 30 + b, 40, 44 + b, BELLY[2], only="opaque")
    s.ellipse(16, 28 + b, 36, 40 + b, BELLY[-1], only="opaque")
    s.ellipse(22, 50 + b, 44, 57 + b, M1, only="opaque")   # belly floor shade

    # ---------- ears: swept back along the body (before the head, so they tuck under)
    # back ear
    s.polygon([(27, 21 + ear_lag), (45, 15 + ear_lag), (48, 20 + ear_lag), (29, 27 + ear_lag)],
              D, fill=True)
    s.polygon([(28, 22 + ear_lag), (44, 16 + ear_lag), (46, 19 + ear_lag), (30, 25 + ear_lag)],
              M1, fill=True, only="opaque")
    s.polygon([(30, 22 + ear_lag), (43, 17 + ear_lag), (44, 19 + ear_lag), (31, 24 + ear_lag)],
              EAR[0], fill=True, only="opaque")
    # front ear (shorter, lower)
    s.polygon([(26, 26 + twitch), (43, 22 + twitch), (45, 27 + twitch), (28, 31 + twitch)],
              M1, fill=True)
    s.polygon([(30, 26 + twitch), (41, 23 + twitch), (42, 25 + twitch), (31, 28 + twitch)],
              EAR[1], fill=True, only="opaque")
    # ---------- head (resting, low)
    s.circle(24, 31 + b, 10, D, fill=True)
    s.circle(23, 30 + b, 9, M2, fill=True, only="opaque")
    s.circle(22, 29 + b, 7, L1, fill=True, only="opaque")
    s.circle(20, 26 + b, 4, L2, fill=True, only="opaque")

    # ---------- muzzle
    s.ellipse(15, 32 + b, 25, 39 + b, L2, fill=True)
    s.ellipse(16, 35 + b, 23, 38 + b, BELLY[-1], fill=True, only="opaque")
    s.rect(17, 35 + b, 18, 35 + b, NOSE)          # nose
    s.px(18, 36 + b, INK)                          # mouth corner

    # ---------- closed eye: 5px downward curve + lash
    s.rect(19, 31 + b, 23, 31 + b, INK)
    s.px(18, 30 + b, INK)
    s.px(24, 30 + b, INK)
    s.px(21, 32 + b, INK)
    # brow hint above the eye
    s.rect(20, 28 + b, 22, 28 + b, M1)

    # ---------- front paws tucked under the chin
    s.ellipse(18, 38 + b, 27, 45 + b, M2)
    s.ellipse(18, 38 + b, 26, 43 + b, L1, only="opaque")
    s.ellipse(27, 39 + b, 35, 46 + b, M1)
    s.ellipse(27, 39 + b, 34, 44 + b, L1, only="opaque")

    # ---------- outline only: the level or engine owns ground contact shadows
    s.outline(D, where="inside")

    # ---------- drifting Zzz (drawn last, above everything)
    zed(s, 35, 17 - zz, 3, M1)
    zed(s, 41, 12 - zz, 4, M2)
    zed(s, 47, 6 - zz, 5, D)


FRAMES = [
    # breath, twitch, zz, ear_lag
    (0, 0, 0, 0),
    (1, 0, 1, 0),
    (2, 0, 2, 1),
    (1, 1, 3, 1),   # ear twitch
    (0, 0, 4, 0),
    (0, 0, 5, 0),
]

s = Sprite(64, 64, palette=FUR + BELLY + EAR + [WHITE, NOSE, INK])
for i, (breath, twitch, zz, lag) in enumerate(FRAMES):
    if i > 0:
        s.add_frame(copy=False)
    sleeping(s, breath=breath, twitch=twitch, zz=zz, ear_lag=lag)
    s.use(frame=i + 1)
    s.set_duration(160)

s.tag("sleep", 1, len(FRAMES))
s.save_png(os.path.join(OUT, "rabbit_sleep_1x.png"))
s.preview(os.path.join(OUT, "rabbit_sleep_preview.png"), scale=6)
s.save_silhouette(os.path.join(OUT, "rabbit_sleep_silhouette.png"))
s.save_gif(os.path.join(OUT, "rabbit_sleep_idle.gif"), scale=5)
s.save_spritesheet(os.path.join(OUT, "rabbit_sleep_sheet.png"), layout="grid", scale=1,
                   padding=0, json_path=os.path.join(OUT, "rabbit_sleep_sheet.json"))
st = s.stats(print_=False) or {}
print("[rabbit_sleep] frames=%s colors=%s isolated=%s semialpha=%s" % (
    s.n_frames, st.get("colors_used"), len(st.get("isolated_px") or []), st.get("semi_alpha_px")))

# text grid for eyes-free verification
from PIL import Image

im = Image.open(os.path.join(OUT, "rabbit_sleep_1x.png")).convert("RGBA")
chars, letters, rows = {}, ".:-=+*#%@&$", []
for y in range(im.height):
    line = []
    for x in range(im.width):
        r, g, b, a = im.getpixel((x, y))
        if a == 0:
            line.append(" ")
        else:
            k = (r, g, b)
            if k not in chars:
                chars[k] = letters[len(chars) % len(letters)]
            line.append(chars[k])
    rows.append("".join(line))
with open(os.path.join(OUT, "rabbit_sleep_grid.txt"), "w", encoding="utf-8") as fh:
    fh.write("\n".join(rows) + "\n")
print("legend:", {v: "#%02x%02x%02x" % k for k, v in chars.items()})
print("done")
