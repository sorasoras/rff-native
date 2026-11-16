#include "tc_rt.h"

s32 fn_800ccd30(u32 param_1, u32 param_2)
{
    (void)param_1;
    if ((s32)param_2 >= 48 && (s32)param_2 <= 57) {
        return (s32)(param_2 - 0x30u);
    }
    if (param_2 >= 0xff10u && param_2 <= 0xff19u) {
        return (s32)(param_2 - 0xff10u);
    }
    return -1;
}
