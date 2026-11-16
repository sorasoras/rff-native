#include "tc_rt.h"

void fn_802dcfec(s32 param_1)
{
    u32 r3 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x802dce74u, &a);
    f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x24u) * f1);
    f1 = (f64)(f32)((f64)rdf32(0x80348b48u) * f1);
    a.f[0] = f1;
    r3 = tc_call(0x802558e4u, &a);
    wr16(rd32((u32)param_1 + 4u) + 0x30u, 1u);
    r5 = rd32((u32)param_1 + 4u);
    wr16(r5 + 0xceu, (u16)((r3 >> 0x10u) & 0xffffu));
    wr16(r5 + 0xd0u, (u16)r3);
    wr16(r5 + 0xd2u, 0u);
    wr16(r5 + 0xd4u, 0u);
    wr16(r5 + 0xd6u, 0u);
    wr16(r5 + 0xd8u, 0u);
    wr16(r5 + 0xdau, 0u);
    r3 = rd32((u32)param_1 + 4u);
    wr32(r3 + 0x1cu, rd32(r3 + 0x1cu) & 0xfffdffffu);
    r3 = rd32((u32)param_1 + 4u);
    wr32(r3 + 0x1cu, rd32(r3 + 0x1cu) | 0x10001u);
    return;
}
