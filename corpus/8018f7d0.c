#include "tc_rt.h"

u32 fn_8018f7d0(u32 param_1, s32 param_2)
{
    (void)param_1;
    if (param_2 <= 25) {
        return 2u;
    }
    if (param_2 >= 80) {
        return 1u;
    }
    return 0u;
}
