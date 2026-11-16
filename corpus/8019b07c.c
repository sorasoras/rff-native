#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_8019b07c(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r3 = rd32(0x804863d8u);
    f0 = (f64)rdf32(rd32(r3 + 0x70u) + 0x54u);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    r31 = (u32)px_f2b(f0);
    a.r[0] = r3;
    f1 = tc_callf(0x80064f9cu, &a);
    r0 = rd32(0x8057117cu);
    c0lt = (s32)r0 < 6;
    r4 = (u32)px_f2b(px_ctiw(f1, ppc_fctiwz(f1)));
    if (r0 == 6u) {
        if (r31 == (u32)((s32)(((r4 >> 0x1fu) & 1u) + r4) >> 1)) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = 0xd41u;
            (void)tc_call(0x8010a74cu, &a);
        }
    } else if (!c0lt) {
        c0lt = (s32)r0 < 8;
        if (r0 == 8u) {
            if (r31 == (u32)((s32)(((r4 >> 0x1fu) & 1u) + r4) >> 1)) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0xd43u;
                (void)tc_call(0x8010a74cu, &a);
            }
        } else if (c0lt) {
            r3 = (u32)((s32)(((r4 >> 0x1fu) & 1u) + r4) >> 1);
            if ((r31 - ((u32)ppc_divw((s32)r31, (s32)r3) * r3)) == 0u) {
                a.r[0] = 0x804b9da0u;
                a.r[1] = 0xd42u;
                (void)tc_call(0x8010a74cu, &a);
            }
        }
    } else if ((s32)r0 >= 5) {
        if ((u32)rd8(0x80492830u) != 1u || r31 != 0x14u) {
            if ((u32)rd8(0x80492830u) != 2u) {
                if (((u32)rd8(0x80492830u) != 3u || r31 != (r4 - 1u)) && ((u32)rd8(0x80492830u) != 4u || r31 != (r4 - 1u))) {
                    return;
                }
            } else {
                r3 = (u32)((s32)(((r4 >> 0x1fu) & 1u) + r4) >> 1);
                if ((r31 - ((u32)ppc_divw((s32)r31, (s32)r3) * r3)) != 0u && (((u32)rd8(0x80492830u) != 3u || r31 != (r4 - 1u)) && ((u32)rd8(0x80492830u) != 4u || r31 != (r4 - 1u)))) {
                    return;
                }
            }
        }
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xd44u;
        (void)tc_call(0x8010a74cu, &a);
    }
    return;
}
