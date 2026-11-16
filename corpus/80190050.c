#include "tc_rt.h"

u32 fn_80190050(u32 param_1, s32 param_2)
{
    (void)param_1;
    if (param_2 >= 0) {
        if (param_2 >= 33) {
            return 0u;
        }
        return 1u;
    }
    return 0u;
}
