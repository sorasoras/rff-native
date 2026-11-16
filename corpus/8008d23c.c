#include "tc_rt.h"

u32 fn_8008d23c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0;
    r0 = 0u;
    if (param_1 >= 625 && param_1 <= 629) {
        r0 = 1u;
    }
    if (r0 != 0u) {
        return 1u;
    }
    r0 = 0u;
    if (param_1 >= 570 && param_1 <= 591) {
        r0 = 1u;
    }
    if (r0 == 0u) {
        r0 = 0u;
        if (param_1 >= 592 && param_1 <= 613) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            return 0u;
        }
    }
    if ((u32)param_2 == 0u) {
        return 1u;
    }
    if ((u32)param_3 == 1u) {
        return 2u;
    }
    if ((u32)param_3 == 2u) {
        return 4u;
    }
    if ((u32)param_3 == 3u) {
        return 6u;
    }
    if ((u32)param_3 != 4u) {
        return 1u;
    }
    return 0xcu;
}
