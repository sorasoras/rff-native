#include "tc_rt.h"

u32 fn_80295814(void)
{
    return (ppc_cntlzw((u32)rd8(0x8053dfa6u) - 5u) >> 5u) & 0xffu;
}
