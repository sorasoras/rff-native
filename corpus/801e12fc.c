#include "tc_rt.h"

void fn_801e12fc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x801dd9ecu, &a);
    wrf32d(rd32((u32)param_1 + 0x1cu) + 0x18u, (f64)rdf32(0x805762ccu));
    return;
}
