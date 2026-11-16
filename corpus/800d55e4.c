#include "tc_rt.h"

s32 fn_800d55e4(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0;
    r3 = (u32)param_1;
    c0lt = param_2 < 0;
    if (param_2 > 0) {
        while ((s32)r3 >= param_2) {
            r3 = r3 - (u32)param_2;
        }
        while ((s32)r3 < 0) {
            r3 = r3 + (u32)param_2;
        }
        return (s32)r3;
    }
    if (c0lt) {
        while ((s32)r3 <= param_2) {
            r3 = r3 - (u32)param_2;
        }
        while ((s32)r3 > 0) {
            r3 = r3 + (u32)param_2;
        }
        return (s32)r3;
    }
    return 0;
}
