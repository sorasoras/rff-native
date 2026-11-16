#include "tc_rt.h"

void fn_800c4b50(s32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x8019bf38u, &a);
    wr32((u32)param_1 + 0xa08u, 0x21u);
    f1 = (f64)rdf32(0x80572ea8u);
    wr32((u32)param_1 + 0xa0cu, 0x21u);
    wr32((u32)param_1 + 0xa10u, 0x21u);
    wr32((u32)param_1 + 0xa14u, 0u);
    wr32((u32)param_1 + 0x290u, 0u);
    a.f[0] = f1;
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    a.r[2] = 1u;
    (void)tc_call(0x800bf1d4u, &a);
    return;
}
