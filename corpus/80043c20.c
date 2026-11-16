#include "tc_rt.h"

u32 fn_80043c20(u32 param_1)
{
    if ((s32)param_1 < 0) {
        return 0u;
    }
    if (param_1 >= 4u) {
        return 0u;
    }
    return (param_1 * 0x954u) - 0x7fc400d4u;
}
