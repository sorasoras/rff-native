#include "tc_rt.h"

void fn_802551b8(u32 param_1, u32 param_2, u32 param_3)
{
    wr32(param_3, rd32(0x805719b0u));
    wr32(param_3 + 4u, param_2);
    wr32(param_3 + 8u, param_1);
    wr32(0x805719b0u, param_3);
    return;
}
