#include "tc_rt.h"

s32 fn_8030a014(s32 param_1, s32 param_2)
{
    if (param_2 > 7) {
        return 0;
    }
    return (s32)((u32)param_1 + ((u32)param_2 * 0x38u) + 0xb74u);
}
