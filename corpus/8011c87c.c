#include "tc_rt.h"

u32 fn_8011c87c(u32 param_1)
{
    return (ppc_cntlzw((u32)(s8)rd8(param_1)) >> 5u) & 0x7ffffffu;
}
