#include "tc_rt.h"

void fn_801e7230(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32((u32)param_1 + 0xcdcu);
    a.r[0] = rd32((u32)param_1 + 0x70u);
    (void)tc_call(0x80040728u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = param_2;
    (void)tc_call(0x8007e6d4u, &a);
    return;
}
