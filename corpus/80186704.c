#include "tc_rt.h"

void fn_80186704(s32 param_1)
{
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x805751b8u);
    wr32((u32)param_1 + 0xab8u, 0u);
    wr32((u32)param_1 + 0xab4u, 0xbu);
    wr32((u32)param_1 + 0xabcu, 0u);
    wr32((u32)param_1 + 0xac0u, 0u);
    wrf32d((u32)param_1 + 0xad0u, f0);
    return;
}
