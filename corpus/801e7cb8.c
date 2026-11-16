#include "tc_rt.h"

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

void fn_801e7cb8(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32((u32)param_1 + 0xa2cu, (ppc_cntlzw(rd32(0x80571188u) & 1u) >> 5u) & 0x7ffffffu);
    wr32((u32)param_1 + 0xa30u, (ppc_cntlzw(rd32(0x80571188u) & 2u) >> 5u) & 0x7ffffffu);
    wr32((u32)param_1 + 0xa34u, (ppc_cntlzw(rd32(0x80571188u) & 4u) >> 5u) & 0x7ffffffu);
    wr32((u32)param_1 + 0xa3cu, (ppc_cntlzw(rd32(0x80571188u) & 0x10u) >> 5u) & 0x7ffffffu);
    r5 = rd32(0x80571188u) | 0x17u;
    r4 = rd32(0x8057118cu) & 0xfffbffffu;
    wr32(0x80571188u, r5);
    wr32(0x8057118cu, r4);
    wr32((u32)param_1 + 0xa50u, 0u);
    r30 = rd32(0x80571140u);
    if (r30 != 0u) {
        r3 = rd32(0x804863d8u);
        if (r3 != 0u && rd32(r3 + 0xe0u) == r30) {
            a.r[0] = r3;
            f1 = tc_callf(0x800c4f20u, &a);
            a.r[0] = r30;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
            r5 = 0u;
            r4 = rd32(r3 + 4u);
            wr32(0x817fdfe8u, rd32(r3));
            r0 = rd32(r3 + 8u);
            f2 = (f64)(f32)((f64)rdf32(0x817fdfe8u) + (f64)rdf32(0x8057633cu));
            f1 = (f64)px_w2f(r4);
            wrf32d(r30 + 0x84u, f2);
            f0 = (f64)px_w2f(r0);
            wrf32d(r30 + 0x88u, f1);
            wrf32d(r30 + 0x8cu, f0);
            wrf32d(r30 + 4u, f2);
            wrf32d(r30 + 8u, f1);
            wrf32d(0x817fdfe8u, f2);
            wrf32d(r30 + 0xcu, f0);
        }
        wr32((u32)param_1 + 0xa50u, (u32)((s32)rd32(r30 + 0x9cu) >> 31));
        a.r[0] = r30;
        a.r[1] = 0u;
        a.r[2] = r5;
        a.f[0] = f1;
        a.f[1] = f2;
        (void)tc_call(rd32(rd32(r30) + 0x68u), &a);
    }
    return;
}
