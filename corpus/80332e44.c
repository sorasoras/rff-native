#include "tc_rt.h"

void fn_80332e44(f64 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0;
    r8 = rd32(param_3 + 4u);
    r7 = rd32(param_3 + 8u);
    r6 = rd32(param_4);
    r4 = rd32(param_4 + 4u);
    r0 = rd32(param_4 + 8u);
    wr32(param_2, rd32(param_3));
    wr32(param_2 + 4u, r8);
    wr32(param_2 + 8u, r7);
    wr32(param_2 + 0xcu, r6);
    wr32(param_2 + 0x10u, r4);
    wr32(param_2 + 0x14u, r0);
    wrf32d(param_2 + 0x18u, param_1);
    return;
}
