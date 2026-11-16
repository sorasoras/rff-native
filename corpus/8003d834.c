#include "tc_rt.h"

void fn_8003d834(f64 param_1, f64 param_2, f64 param_3, s32 param_4)
{
    u32 r6 = 0;
    r6 = ((u32)param_4 * 0x60u) - 0x7fc41d08u;
    wr32(r6 + 4u, 1u);
    wr32(r6, 0u);
    wrf32d(r6 + 0x48u, param_1);
    wrf32d(r6 + 0x4cu, param_2);
    wrf32d(r6 + 0x50u, param_3);
    wr32(0x803be5fcu, rd32(0x803be5fcu) | ((((u32)param_4 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_4 & 0x1fu))));
    return;
}
