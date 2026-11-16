#include "tc_rt.h"

void fn_802dd088(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x802dce74u, &a);
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x24u) * f1);
    f1 = (f64)(f32)((f64)rdf32(0x80348b48u) * f1);
    a.f[0] = f1;
    r3 = tc_call(0x802558e4u, &a);
    wr32(rd32((u32)param_1 + 4u) + 0xceu, r3);
    r3 = rd32((u32)param_1 + 4u);
    wr32(r3 + 0x1cu, rd32(r3 + 0x1cu) | 0x20000u);
    return;
}
