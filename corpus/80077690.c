#include "tc_rt.h"

void fn_80077690(u32 param_1)
{
    u32 r4 = 0;
    r4 = rd32(0x804865bcu);
    if (r4 != 0u) {
        wr32(r4 + 0x34u, (ppc_cntlzw(param_1) >> 5u) & 0x7ffffffu);
        return;
    }
    return;
}
