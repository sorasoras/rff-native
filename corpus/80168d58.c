#include "tc_rt.h"

void fn_80168d58(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r0 = rd32((u32)param_2 + 0x15f4u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r0) + 0xcu), &a);
    } else {
        r3 = 0u;
    }
    a.r[0] = (u32)param_2;
    a.r[1] = r3;
    (void)tc_call(0x800b32d0u, &a);
    a.f[0] = (f64)rdf32(0x80574c2cu);
    a.r[0] = (u32)param_2;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 1u;
    a.r[4] = 3u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    a.f[0] = (f64)rdf32(0x80574c28u);
    a.r[0] = (u32)param_2;
    a.r[1] = 1u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0xc8u;
    (void)tc_call(0x800b5248u, &a);
    a.f[0] = (f64)rdf32(0x80574c28u);
    a.r[0] = (u32)param_2;
    a.r[1] = 2u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    r3 = rd32((u32)param_2 + 0xf78u);
    wr16((u32)param_2 + 0xf9cu, 0u);
    wr32((u32)param_2 + 0xf78u, r3 | (r3 ^ 0x10u));
    f1 = tc_callf(0x80040a00u, &a);
    f31 = f1;
    f1 = tc_callf(0x80040a00u, &a);
    f1 = (f64)(f32)(f1 - f31);
    wrf32d((u32)param_2 + 0xfa0u, (f64)(f32)((f64)rdf32(0x80574c30u) * f1));
    wr32((u32)param_1 + 0xcu, 0xffffffffu);
    wr32((u32)param_1 + 0x10u, 0u);
    return;
}
