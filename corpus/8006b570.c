#include "tc_rt.h"

void fn_8006b570(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x8019bf38u, &a);
    wrf32d(rd32((u32)param_1 + 0x70u) + 0x54u, (f64)rdf32(0x805725d8u));
    wr32((u32)param_1 + 0x290u, 0u);
    wr32((u32)param_1 + 0xa08u, 0x21u);
    wr32((u32)param_1 + 0xa0cu, 0x21u);
    wr32((u32)param_1 + 0xa10u, 0x21u);
    wr32((u32)param_1 + 0xa14u, 0u);
    return;
}
