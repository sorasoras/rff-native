#include "tc_rt.h"

s32 fn_802ffe00(s32 param_1, s32 param_2)
{
    if (param_2 < 16) {
        return (s32)((u32)param_1 + (((u32)param_2 << 1u) & 0xfffffffeu) + 0xccu);
    }
    return 0;
}
