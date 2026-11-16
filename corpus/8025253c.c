#include "tc_rt.h"

void fn_8025253c(u32 param_1, u32 param_2)
{
    wr32(param_1, (rd32(param_1) & 0xfffffeffu) | ((ppc_cntlzw(param_2) << 3u) & 0x100u));
    return;
}
