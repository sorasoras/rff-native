#include "tc_rt.h"

u32 fn_802223d8(u32 param_1, s32 param_2)
{
    (void)param_1;
    if (param_2 < 0 || param_2 >= 16) {
        return 0u;
    }
    return 1u;
}
