#include "tc_rt.h"

u32 fn_801b3a7c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    c0lt = param_1 < 1;
    r0 = 0u;
    if ((u32)param_1 == 1u) {
        r0 = 0x80571388u;
    } else if (!c0lt) {
        if (param_1 < 3) {
            r0 = 0x80571390u;
        }
    } else if (param_1 >= 0) {
        r0 = 0x80571380u;
    }
    return r0;
}
