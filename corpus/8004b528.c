#include "tc_rt.h"

u32 fn_8004b528(s32 param_1)
{
    u32 c0lt = 0;
    c0lt = param_1 < 64;
    if ((u32)param_1 != 0x40u) {
        if (c0lt) {
            c0lt = param_1 < 8;
            if ((u32)param_1 == 8u) {
                return 1u;
            }
            if (c0lt) {
                c0lt = param_1 < 3;
                if ((u32)param_1 == 3u) {
                    return 0u;
                }
                if (c0lt) {
                    if (param_1 >= 1) {
                        return 1u;
                    }
                    return 0u;
                }
                if (param_1 >= 5) {
                    return 0u;
                }
                return 1u;
            }
            c0lt = param_1 < 32;
            if ((u32)param_1 == 0x20u) {
                return 1u;
            }
            if (!c0lt) {
                return 0u;
            }
            if ((u32)param_1 == 0x10u) {
                return 1u;
            }
            return 0u;
        }
        c0lt = param_1 < 512;
        if ((u32)param_1 != 0x200u) {
            if (c0lt) {
                c0lt = param_1 < 256;
                if ((u32)param_1 == 0x100u) {
                    return 1u;
                }
                if (!c0lt) {
                    return 0u;
                }
                if ((u32)param_1 == 0x80u) {
                    return 1u;
                }
                return 0u;
            }
            if ((u32)param_1 != 0x400u) {
                return 0u;
            }
        }
    }
    return 1u;
}
