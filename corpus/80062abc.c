#include "tc_rt.h"

void fn_80062abc(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(param_2);
    a.f[1] = (f64)rdf32(param_2 + 8u);
    a.f[2] = (f64)(f32)((f64)rdf32(param_2 + 4u) + (f64)rdf32((u32)param_1 + 0xa0u));
    a.r[0] = (rd32(0x80471a18u) * 0x4150u) - 0x7fb92738u;
    a.r[1] = (u32)param_1 + 0xc0u;
    a.r[2] = (u32)param_1 + 0xbcu;
    (void)tc_call(0x8008a150u, &a);
    return;
}
