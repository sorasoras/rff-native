#include "tc_rt.h"

u32 fn_80320fe4(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(param_1 + 4u);
    if (r4 == 0u) {
        return 0u;
    }
    return (ppc_cntlzw(rd32(r4 + 8u) - rd32(param_1)) >> 5u) & 0x7ffffffu;
}
