#include "tc_rt.h"

u32 fn_80042e74(void)
{
    return (ppc_cntlzw(rd32(0x803c1c74u) - 3u) >> 5u) & 0x7ffffffu;
}
