#include "tc_rt.h"

u32 fn_8013ca6c(s32 param_1)
{
    return (ppc_cntlzw((u32)param_1 - 0x286u) >> 5u) & 0x7ffffffu;
}
