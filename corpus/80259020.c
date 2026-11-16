#include "tc_rt.h"

u32 fn_80259020(u32 param_1, u32 param_2)
{
    if (param_1 == 0u) {
        return 0u;
    }
    wr8(param_1, (u8)param_2);
    return 1u;
}
