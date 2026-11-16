#include "tc_rt.h"

void fn_80209b40(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0;
    r0 = rd32(0x805709e4u);
    if (r0 != (u32)param_1) {
        wr32(0x805709e8u, r0);
    }
    wr32(0x805709e4u, (u32)param_1);
    wr32(0x805709ecu, param_2);
    wr32(0x805709f0u, param_3);
    return;
}
