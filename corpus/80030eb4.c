#include "tc_rt.h"

u32 fn_80030eb4(s32 param_1)
{
    u32 c0lt = 0;
    c0lt = param_1 < 1;
    if ((u32)param_1 != 1u) {
        if (c0lt) {
            if (param_1 >= 0) {
                return 0x68u;
            }
            return 0u;
        }
        if (param_1 >= 3) {
            return 0u;
        }
        return 0xc8u;
    }
    return 0x98u;
}
