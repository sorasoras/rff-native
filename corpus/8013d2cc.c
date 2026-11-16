#include "tc_rt.h"

s32 fn_8013d2cc(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, c1lt = 0, r4 = 0;
    r4 = (u32)param_2;
    c1lt = param_1 < 4;
    if (c1lt) {
        c0lt = param_1 < 2;
        if ((u32)param_1 == 2u) {
            if ((u32)param_2 == 0x7au) {
                return 126;
            }
        } else if (!c0lt) {
            if (c1lt && (u32)param_2 == 0x7au) {
                return 125;
            }
        } else {
            c0lt = param_1 < 0;
            if ((u32)param_1 == 0u) {
                if ((u32)param_2 != 0x53u) {
                    if (param_2 < 37 || param_2 > 84) {
                        return 744;
                    }
                    if (param_2 < 71 || param_2 > 81) {
                        if (param_2 > 81) {
                            r4 = (u32)param_2 - 0xbu;
                        }
                        return (s32)(r4 - 0x25u);
                    }
                    return 744;
                }
                return 34;
            }
            if (!c0lt && (u32)param_2 == 0x190u) {
                return 401;
            }
        }
        return 744;
    }
    return -1;
}
