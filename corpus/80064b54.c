#include "tc_rt.h"

void fn_80064b54(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wrf32d(rd32((u32)param_1 + 0x70u) + 0x58u, (f64)rdf32((u32)param_1 + 0x10cu));
    a.r[0] = rd32((u32)param_1 + 0x70u);
    a.r[1] = 0u;
    r3 = tc_call(0x800355acu, &a);
    wr32((u32)param_1 + 0x110u, r3);
    return;
}
