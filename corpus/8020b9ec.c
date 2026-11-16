#include "tc_rt.h"

void fn_8020b9ec(u32 param_1)
{
    wr32(param_1 + 4u, 0u);
    wr32(param_1, 0xffffffffu);
    return;
}
