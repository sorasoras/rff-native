#include "tc_rt.h"

u32 fn_800d91d8(s32 param_1)
{
    if (param_1 > 5 && (param_1 < 207 || param_1 > 209)) {
        if ((u32)param_1 != 0xd4u) {
            return 0u;
        }
    }
    return 1u;
}
