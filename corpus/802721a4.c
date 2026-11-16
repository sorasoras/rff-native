#include "tc_rt.h"

u32 fn_802721a4(void)
{
    return (ppc_cntlzw(rd32(0x80571aa0u) - 2u) >> 5u) & 0x7ffffffu;
}
