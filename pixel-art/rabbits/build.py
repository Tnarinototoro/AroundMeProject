import os
import sys

SKILL = os.path.join(os.path.expanduser("~"), ".dsh", "skills", "pixel-art-studio", "scripts")
sys.path.insert(0, SKILL)
from pixelstudio import Sprite, ramp

OUT = r"S:\AroundMeProject\pixel-art\rabbits"
os.makedirs(OUT, exist_ok=True)

SNOW_FUR = ramp("#e8ecf4", 5, hue_shift=10)
SNOW_EAR = ramp("#f0a8bc", 3)
HARE_FUR = ramp("#b9854f", 5, hue_shift=16)
HARE_BELLY = ramp("#e8d5b0", 4, hue_shift=10)
MOON_FUR = ramp("#8f7bff", 5, hue_shift=22)
MOON_GLOW = ramp("#5be8ff", 4, hue_shift=18)
WHITE = "#ffffff"
EYE_RED = "#c93a5c"
EYE_DARK = "#221a2e"


def rabbit(s, fur, ear_in, belly, eye, *, bob=0, ear_lag=0, glow=None, whiskers=True):
    """Sitting rabbit, 3/4 view, light top-left. Shapes must be FILLED (circle default is a ring)."""
    d, m1, m2, l1, l2 = fur[0], fur[1], fur[2], fur[3], fur[-1]

    # ---- ears first (behind the head so the base merges into it)
    # left ear, upright and long
    s.ellipse(21, 2 + bob + ear_lag, 28, 18 + bob, d)
    s.ellipse(22, 3 + bob + ear_lag, 27, 16 + bob, m2, only="opaque")
    s.ellipse(23, 6 + bob + ear_lag, 27, 16 + bob, ear_in[1], only="opaque")
    # right ear, shorter and tipped back
    s.ellipse(31, 5 + bob, 39, 19 + bob - ear_lag, d)
    s.ellipse(32, 6 + bob, 38, 17 + bob - ear_lag, m1, only="opaque")
    s.ellipse(34, 9 + bob, 37, 17 + bob - ear_lag, ear_in[0], only="opaque")

    # ---- tail
    s.circle(49, 45 + bob, 4, m1, fill=True)
    s.circle(48, 44 + bob, 3, l1, fill=True, only="opaque")
    s.circle(47, 43 + bob, 1, l2, fill=True, only="opaque")

    # ---- hind leg
    s.ellipse(33, 42 + bob, 50, 57 + bob, d)
    s.ellipse(34, 43 + bob, 49, 55 + bob, m2, only="opaque")
    s.ellipse(35, 44 + bob, 46, 51 + bob, l1, only="opaque")
    s.ellipse(37, 52 + bob, 49, 56 + bob, m1, only="opaque")

    # ---- body
    s.ellipse(14, 30 + bob, 45, 58 + bob, d)
    s.ellipse(15, 29 + bob, 44, 56 + bob, m2, only="opaque")
    s.ellipse(16, 28 + bob, 40, 52 + bob, l1, only="opaque")
    s.ellipse(18, 30 + bob, 35, 44 + bob, belly[2], only="opaque")
    s.ellipse(17, 28 + bob, 32, 39 + bob, belly[-1], only="opaque")
    s.ellipse(21, 49 + bob, 39, 57 + bob, m1, only="opaque")

    # ---- front paws
    s.ellipse(18, 47 + bob, 25, 55 + bob, m2)
    s.ellipse(18, 47 + bob, 24, 53 + bob, l1, only="opaque")
    s.ellipse(27, 48 + bob, 33, 55 + bob, m2)
    s.ellipse(27, 48 + bob, 32, 53 + bob, l1, only="opaque")

    # ---- head (filled)
    s.circle(29, 24 + bob + ear_lag, 10, d, fill=True)
    s.circle(28, 23 + bob + ear_lag, 9, m2, fill=True, only="opaque")
    s.circle(27, 22 + bob + ear_lag, 7, l1, fill=True, only="opaque")
    s.circle(25, 19 + bob + ear_lag, 4, l2, fill=True, only="opaque")

    # ---- muzzle
    s.ellipse(19, 26 + bob + ear_lag, 31, 34 + bob + ear_lag, l2, fill=True)
    s.ellipse(21, 29 + bob + ear_lag, 29, 33 + bob + ear_lag, belly[-1], fill=True, only="opaque")
    s.rect(23, 28 + bob + ear_lag, 24, 28 + bob + ear_lag, eye)
    s.px(24, 29 + bob + ear_lag, EYE_DARK)

    # ---- eyes
    s.rect(20, 21 + bob + ear_lag, 23, 24 + bob + ear_lag, EYE_DARK)
    s.px(20, 21 + bob + ear_lag, WHITE)
    s.rect(29, 22 + bob + ear_lag, 32, 25 + bob + ear_lag, EYE_DARK)
    s.px(29, 22 + bob + ear_lag, WHITE)

    # ---- whiskers (paired runs)
    if whiskers:
        s.rect(16, 30 + bob, 18, 30 + bob, m1)
        s.rect(16, 33 + bob, 18, 33 + bob, m1)
        s.rect(32, 32 + bob, 34, 32 + bob, m1)

    # ---- radio antennae
    if glow:
        s.line(37, 12 + bob, 41, 7 + bob, glow[2])
        s.circle(41, 6 + bob, 1, glow[-1], fill=True)
        s.line(40, 26 + bob, 44, 23 + bob, glow[2])

    # ---- selective outline, inward
    s.outline(d, where="inside")

    # ---- contact shadow: 1px, hugging the feet, not a platform bar
    s.ellipse(24, 58 + bob, 46, 59 + bob, m1, only="empty")


def build(slug, fur, ear_in, belly, eye, frames, glow=None, whiskers=True):
    pal = fur + belly + ear_in + [WHITE, EYE_RED, EYE_DARK] + (glow or [])
    s = Sprite(64, 64, palette=pal)
    for i, (bob, lag) in enumerate(frames):
        if i > 0:
            s.add_frame(copy=False)
        rabbit(s, fur, ear_in, belly, eye, bob=bob, ear_lag=lag, glow=glow, whiskers=whiskers)
        s.use(frame=i + 1)
        s.set_duration(150)
    s.tag("idle", 1, len(frames))
    s.save_png(os.path.join(OUT, slug + "_1x.png"))
    s.preview(os.path.join(OUT, slug + "_preview.png"), scale=6)
    s.save_silhouette(os.path.join(OUT, slug + "_silhouette.png"))
    s.save_gif(os.path.join(OUT, slug + "_idle.gif"), scale=4)
    st = s.stats(print_=False) or {}
    print("[%s] frames=%s colors=%s isolated=%s semialpha=%s" % (
        slug, s.n_frames, st.get("colors_used"), len(st.get("isolated_px") or []), st.get("semi_alpha_px")))
    return s


build("rabbit_snow", SNOW_FUR, SNOW_EAR, SNOW_FUR, EYE_RED, [(0, 0), (-1, 0), (-1, 1), (0, 1)])
build("rabbit_hare", HARE_FUR, ramp("#d98a7a", 3), HARE_BELLY, EYE_DARK, [(0, 0), (-1, 0), (0, 1), (0, 0)])
build("rabbit_moon", MOON_FUR, ramp("#ff9ad5", 3), ramp("#cfe9ff", 3), EYE_RED,
      [(0, 0), (-1, 0), (-1, 1), (0, 1)], glow=MOON_GLOW)

# ---- 32x32 baby rabbit
s = Sprite(32, 32, palette=SNOW_FUR + SNOW_EAR + [WHITE, EYE_RED, EYE_DARK])
s.ellipse(10, 1, 14, 10, SNOW_FUR[0])
s.ellipse(11, 2, 13, 9, SNOW_EAR[1], only="opaque")
s.ellipse(16, 3, 20, 11, SNOW_FUR[0])
s.ellipse(17, 4, 19, 10, SNOW_EAR[0], only="opaque")
s.ellipse(5, 14, 25, 29, SNOW_FUR[0])
s.ellipse(6, 13, 24, 27, SNOW_FUR[2], only="opaque")
s.ellipse(7, 13, 20, 24, SNOW_FUR[-1], only="opaque")
s.circle(15, 12, 7, SNOW_FUR[0], fill=True)
s.circle(14, 11, 6, SNOW_FUR[2], fill=True, only="opaque")
s.circle(13, 10, 4, SNOW_FUR[-1], fill=True, only="opaque")
s.rect(10, 12, 12, 14, EYE_DARK)
s.px(10, 12, WHITE)
s.rect(16, 12, 18, 14, EYE_DARK)
s.px(16, 12, WHITE)
s.rect(13, 16, 14, 16, EYE_RED)
s.ellipse(9, 24, 13, 28, SNOW_FUR[2])
s.ellipse(18, 24, 23, 28, SNOW_FUR[2])
s.outline(SNOW_FUR[0], where="inside")
s.save_png(os.path.join(OUT, "rabbit_baby_1x.png"))
s.preview(os.path.join(OUT, "rabbit_baby_preview.png"), scale=8)
print("[baby] 32x32 colors=", (s.stats(print_=False) or {}).get("colors_used"))

# ---- contact sheet + text grids
from PIL import Image

names = ["rabbit_snow", "rabbit_hare", "rabbit_moon", "rabbit_baby"]
SCALE, PAD = 6, 16
cell = 64 * SCALE
sheet = Image.new("RGBA", (cell * len(names), cell + PAD * 2), (26, 22, 34, 255))
for i, n in enumerate(names):
    im = Image.open(os.path.join(OUT, n + "_1x.png")).convert("RGBA")
    big = im.resize((im.width * SCALE, im.height * SCALE), Image.NEAREST)
    sheet.alpha_composite(big, (i * cell + (cell - big.width) // 2, PAD))
sheet.save(os.path.join(OUT, "rabbits_contact_sheet.png"))


def grid(png):
    im = Image.open(png).convert("RGBA")
    chars, letters, out = {}, ".:-=+*#%@&$", []
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
        out.append("".join(line))
    return out


for n in ("rabbit_snow", "rabbit_baby"):
    with open(os.path.join(OUT, n + "_grid.txt"), "w", encoding="utf-8") as fh:
        fh.write("\n".join(grid(os.path.join(OUT, n + "_1x.png"))) + "\n")
print("done")
