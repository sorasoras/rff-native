#include "tc_rt.h"

s32 fn_802763e4(s32 param_1, s32 param_2)
{
    if ((u32)param_1 == 0xau) {
        return 1;
    }
    if ((u32)param_1 == 0xdu) {
        return (s32)(((ppc_cntlzw((u32)param_2 - 0xau) >> 5u) & 0x7ffffffu) + 1u);
    }
    return 0;
}
