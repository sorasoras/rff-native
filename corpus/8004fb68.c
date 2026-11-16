#include "tc_rt.h"

void fn_8004fb68(u32 param_1, u32 param_2)
{
    wr32(0x803c6e04u, param_1);
    wr32(0x803c6e08u, param_2);
    return;
}
