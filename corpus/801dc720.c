#include "tc_rt.h"

u32 fn_801dc720(u32 param_1, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8)
{
    u32 r3 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    r3 = tc_call(0x8007e210u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        f1 = (f64)rdf32(0x80576208u);
        wr32(param_1 + 0x9cu, rd32(param_1 + 0x9cu) | 0xa000000u);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = f1;
        (void)tc_call(rd32(rd32(param_1) + 0x54u), &a);
        r5 = rd32(param_1 + 0x150u);
        wr8(r5 - 0x7fb79ba4u, (u8)((u32)rd8(r5 - 0x7fb79ba4u) | 8u));
        r5 = rd32(param_1 + 0x150u);
        wr32(param_1 + 0x148u, rd32(param_1 + 0x148u) | 0x200000u);
        wr8(r5 - 0x7fb79ba4u, (u8)((u32)rd8(r5 - 0x7fb79ba4u) | 4u));
        wr32(param_1 + 0x148u, rd32(param_1 + 0x148u) | 0x80000000u);
        a.r[0] = param_1;
        a.r[1] = 0u;
        (void)tc_call(0x801dc7f8u, &a);
        a.r[0] = param_1 + 0x1bcu;
        a.r[1] = rd32(param_1 + 0x150u);
        (void)tc_call(0x801dc614u, &a);
        r3 = 1u;
        wrf32d(param_1 + 0x330u, (f64)rdf32(0x805761f0u));
    }
    return r3;
}
