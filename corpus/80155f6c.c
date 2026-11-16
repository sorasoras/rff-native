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

void fn_80155f6c(u32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = 0x8049c500u;
    a.r[1] = param_1;
    r3 = tc_call(0x800c8b88u, &a);
    r5 = r3 & 0xffu;
    if ((s32)r5 > 0) {
        r0 = (u32)((s32)ppc_mulhw(1717986919, (s32)r5) >> 2);
        r29 = r0 + ((r0 >> 0x1fu) & 1u) + 1u;
        a.r[0] = (u32)param_2;
        a.r[1] = param_3;
        a.r[2] = 0x817fdf88u;
        (void)tc_call(0x80155d40u, &a);
        if ((s32)rd32(0x817fdf88u) > 0) {
            if (param_2 >= 5) {
                if (param_2 < 7) {
                    if ((s32)r29 > 10) {
                        r29 = 0xau;
                    }
                    r30 = 0x817fdf88u;
                    r28 = 0u;
                    while ((s32)r28 < (s32)rd32(0x817fdf88u)) {
                        r4 = rd32(r30 + 4u);
                        if (r4 == 0u) {
                            a.r[0] = (u32)param_2;
                            a.r[1] = rd32(r30 + 0x28u);
                            a.r[2] = r29;
                            (void)tc_call(0x80155788u, &a);
                        } else {
                            a.r[0] = (u32)param_2;
                            a.r[1] = r4;
                            a.r[2] = r29;
                            (void)tc_call(0x80155a8cu, &a);
                        }
                        r30 = r30 + 4u;
                        r28 = r28 + 1u;
                    }
                }
            } else if (param_2 >= 3) {
                if ((s32)r29 > 9) {
                    r29 = 9u;
                }
                r30 = 0x817fdf88u;
                r28 = 0u;
                for (;;) {
                    if ((s32)r28 >= (s32)rd32(0x817fdf88u)) {
                        return;
                    }
                    if ((s32)r28 >= (s32)r29) break;
                    r4 = rd32(r30 + 4u);
                    if (r4 == 0u) {
                        a.r[0] = (u32)param_2;
                        a.r[1] = rd32(r30 + 0x28u);
                        a.r[2] = 1u;
                        (void)tc_call(0x80155788u, &a);
                    } else {
                        a.r[0] = (u32)param_2;
                        a.r[1] = r4;
                        a.r[2] = 1u;
                        (void)tc_call(0x80155a8cu, &a);
                    }
                    r30 = r30 + 4u;
                    r28 = r28 + 1u;
                }
            } else if (param_2 >= 1) {
                wr32(0x817fdfdcu, r29 ^ 0x80000000u);
                r4 = rd32(0x817fdf8cu);
                wr32(0x817fdfd8u, 0x43300000u);
                f0 = (f64)(f32)((f64)rdf32(0x805748f8u) * (f64)(f32)(rdf64(0x817fdfd8u) - rdf64(0x805748f0u)));
                f0 = px_ctiw(f0, ppc_fctiwz(f0));
                wrf64(0x817fdfe0u, f0);
                r5 = rd32(0x817fdfe4u);
                if (r4 == 0u) {
                    a.r[0] = (u32)param_2;
                    a.r[1] = rd32(0x817fdfb0u);
                    a.r[2] = r5;
                    (void)tc_call(0x80155788u, &a);
                } else {
                    a.r[0] = (u32)param_2;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    (void)tc_call(0x80155a8cu, &a);
                }
            }
        }
    }
    return;
}
