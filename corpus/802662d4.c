#include "tc_rt.h"

void fn_802662d4(u32 param_1, u32 param_2)
{
    wr32(param_1, param_2);
    wr32(param_1 + 4u, 0u);
    wr32(param_1 + 8u, 0xffffffffu);
    return;
}
