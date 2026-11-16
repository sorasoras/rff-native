#include "tc_rt.h"

void fn_8012ee7c(u32 param_1, u32 param_2)
{
    u32 r5 = 0;
    r5 = rd32(param_1);
    wr32(param_1, rd32(param_2));
    wr32(param_2, r5);
    r5 = rd32(param_1 + 8u);
    wr32(param_1 + 8u, rd32(param_2 + 8u));
    wr32(param_2 + 8u, r5);
    return;
}
