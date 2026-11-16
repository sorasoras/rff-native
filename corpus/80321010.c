#include "tc_rt.h"

s32 fn_80321010(u32 param_1)
{
    u32 r0 = 0, r4 = 0;
    r4 = rd32(param_1 + 4u);
    if (r4 == 0u) {
        r0 = 0u;
    } else {
        r0 = (ppc_cntlzw(rd32(r4 + 8u) - rd32(param_1)) >> 5u) & 0x7ffffffu;
    }
    if (r0 != 0u) {
        return (s32)r4;
    }
    return 0;
}
