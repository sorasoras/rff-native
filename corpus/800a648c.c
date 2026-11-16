#include "tc_rt.h"

u32 fn_800a648c(void)
{
    return (ppc_cntlzw(rd32(0x80571100u) - 1u) >> 5u) & 0x7ffffffu;
}
