#include "tc_rt.h"

u32 fn_8011baf4(s32 param_1, s32 param_2, s32 param_3)
{
    if (param_1 > param_2 && param_1 <= param_3) {
        return 1u;
    }
    return 0u;
}
