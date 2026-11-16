#include "tc_rt.h"

u32 fn_80035b50(void)
{
    return (ppc_cntlzw((u32)(s8)rd8(0x803a3e88u)) >> 5u) & 0x7ffffffu;
}
