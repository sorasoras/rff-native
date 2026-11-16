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

void fn_8006cbd8(f64 param_1, u32 param_2, s32 param_3)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r30 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    r6 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
    if ((s32)r6 <= 0) {
        r6 = 0u;
    }
    if ((s32)r6 >= 65535) {
        r6 = 0xffffu;
    }
    if ((s32)r6 <= 0) {
        r6 = 0x64u;
    }
    c0lt = param_3 < 5;
    r6 = r6 & 0xffffu;
    if ((u32)param_3 == 5u) {
        a.r[0] = param_2;
        (void)tc_call(0x800c4ab4u, &a);
    } else if (c0lt && (u32)param_3 == 0u) {
        wrf64(0x817fdff0u, px_ctiw(param_1, ppc_fctiwz(param_1)));
        r5 = rd32(0x817fdff4u);
        r0 = (u32)((s32)ppc_mulhw(458129845, (s32)r5) >> 4);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0x96u;
        r0 = r5 - r0;
        if (r0 == 0u) {
            r4 = (u32)((s32)ppc_mulhw(715827883, (s32)r6) >> 2);
            r4 = r4 + ((r4 >> 0x1fu) & 1u);
            r30 = r4 & 0xffffu;
            if ((u32)rd16(0x8049908au) > r30) {
                f0 = (f64)rdf32(0x805725d8u);
                wrf32d(0x817fdfecu, f0);
                wrf32d(0x817fdfe8u, f0);
                wrf32d(0x817fdfe4u, f0);
                a.r[0] = param_2;
                a.r[1] = 0x817fdfe4u;
                (void)tc_call(0x8019fbdcu, &a);
                r3 = rd32(0x817fdfe8u);
                r6 = rd32(0x817fdfecu);
                wr32(0x817fdfd8u, rd32(0x817fdfe4u));
                r0 = (u32)((s32)ppc_mulhw(1374389535, (s32)r30) >> 5);
                wr32(0x817fdfdcu, r3);
                wr32(0x817fdfe0u, r6);
                a.r[0] = r0 + ((r0 >> 0x1fu) & 1u);
                a.r[1] = 0x817fdfd8u;
                a.r[2] = 0u;
                (void)tc_call(0x800d7d2cu, &a);
                r0 = ((u32)rd16(0x8049908au) - r30) & 0xffffu;
                if (r0 >= 0xffffu) {
                    r0 = 0xffffu;
                }
                wr16(0x8049908au, (u16)r0);
            }
        }
    }
    return;
}
