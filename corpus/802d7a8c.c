#include "tc_rt.h"

u32 fn_802d7a8c(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r4 = 0, r6 = 0;
    r4 = rd32(param_2);
    r6 = rd32(r4 + 4u);
    wr32(param_3, r4);
    wr32(param_3 + 4u, r6);
    wr32(r4 + 4u, param_3);
    wr32(r6, param_3);
    wr32(param_1, rd32(param_1) + 1u);
    return param_3;
}
