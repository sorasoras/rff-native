#include "tc_rt.h"

u32 fn_801e7148(u32 param_1, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r4)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    r3 = tc_call(0x8007e160u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        r4 = rd32(param_1 + 0x150u);
        f0 = (f64)rdf32(0x80576330u);
        wr8(r4 - 0x7fb79ba4u, (u8)((u32)rd8(r4 - 0x7fb79ba4u) | 4u));
        f0 = (f64)(f32)((f64)rdf32(param_1 + 0x16cu) + f0);
        r3 = rd32(param_1 + 0x148u) | 0x80000000u;
        wr32(param_1 + 0x148u, r3);
        wrf32d(param_1 + 0x16cu, f0);
        if ((u32)((s32)r3 >> 31) == 0u) {
            f0 = (f64)rdf32(0x80576334u);
            wr32(param_1 + 0xccu, 1u);
            wrf32d(param_1 + 0x250u, f0);
            wrf32d(param_1 + 0xd0u, f0);
        } else {
            wr32(param_1 + 0x258u, 0u);
        }
        wr32(param_1 + 0x148u, rd32(param_1 + 0x148u) | 0x2400000u);
        a.r[0] = param_1;
        (void)tc_call(0x801e7820u, &a);
        a.r[0] = param_1;
        f1 = tc_callf(0x801e7ec8u, &a);
        a.r[0] = param_1;
        a.r[1] = rd32(param_1 + 0x340u);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x1a4u), &a);
        wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) & 0xff7fffffu);
        a.r[0] = param_1;
        (void)tc_call(0x801e8734u, &a);
        r3 = 1u;
    }
    return r3;
}
