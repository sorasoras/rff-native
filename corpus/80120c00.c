#include "tc_rt.h"

void fn_80120c00(s32 param_1, s32 param_2, u32 param_r5)
{
    u32 r3 = 0;
    f64 f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = param_r5;
    f1 = tc_callf(0x80120ae4u, &a);
    r3 = rd32((u32)param_2 + 4u);
    f31 = f1;
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0xcu) * f1);
    if (r3 != 0u) {
        a.f[0] = f1;
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x802f7194u, &a);
    }
    r3 = rd32((u32)param_2 + 8u);
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x10u) * f31);
    if (r3 != 0u) {
        a.f[0] = f1;
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x802f7194u, &a);
    }
    return;
}
