#include "tc_rt.h"

void fn_80090400(u32 param_1)
{
    wr32(param_1, 0u);
    wr32(param_1 + 0xc48u, 0u);
    wr32(param_1 + 0xc4cu, 0u);
    wr32(param_1 + 0xc50u, 0u);
    wr32(param_1 + 0xc54u, 0u);
    wr32(param_1 + 0xc58u, 0u);
    wr32(param_1 + 0xc5cu, 0u);
    return;
}
