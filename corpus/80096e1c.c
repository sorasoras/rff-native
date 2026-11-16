#include "tc_rt.h"

u32 fn_80096e1c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800efcb0u, &a);
    if (r3 != 0u) {
        r3 = 1u;
    } else {
        r3 = (ppc_cntlzw(rd32(rd32((u32)param_1 + 0x4cu) + 0xcu) - 1u) >> 5u) & 0x7ffffffu;
    }
    return r3;
}
