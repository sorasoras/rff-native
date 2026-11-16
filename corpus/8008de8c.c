#include "tc_rt.h"

s32 fn_8008de8c(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r3 = 0;
    (void)param_1;
    if ((((u32)param_4 + 0xfdu) & 0xffu) <= 1u) {
        return 0;
    }
    r3 = 0u;
    if (param_2 == 1u) {
        r3 = 0xffffffffu;
    } else {
        if (param_2 >= 2u && param_2 <= 4u) {
            r3 = 0xfffffffeu;
        } else {
            if (param_2 >= 5u && param_2 <= 7u) {
                r3 = 0xfffffffdu;
            } else {
                if (param_2 >= 8u) {
                    r3 = 0xfffffffcu;
                }
            }
        }
    }
    if (param_3 == 1u) {
        r3 = r3 + 1u;
        return (s32)r3;
    }
    if (param_3 >= 2u && param_3 <= 4u) {
        r3 = r3 + 2u;
        return (s32)r3;
    }
    if (param_3 >= 5u && param_3 <= 7u) {
        r3 = r3 + 3u;
        return (s32)r3;
    }
    if (param_3 >= 8u) {
        r3 = r3 + 4u;
        return (s32)r3;
    }
    return (s32)r3;
}
