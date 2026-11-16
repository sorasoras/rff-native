#include "tc_rt.h"

u32 fn_80121590(void)
{
    return (ppc_cntlzw(rd32(0x805706e0u) - 8u) >> 5u) & 0x7ffffffu;
}
