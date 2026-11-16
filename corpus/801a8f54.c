#include "tc_rt.h"

u32 fn_801a8f54(s32 param_1)
{
    u32 c0lt = 0, r0 = 0;
    r0 = (u32)(s8)param_1;
    if ((s32)r0 < 60) {
        if ((s32)r0 < 30) {
            if ((s32)r0 < 20) {
                if ((s32)r0 >= 14) {
                    return 0u;
                }
                if ((s32)r0 >= 0) {
                    return 1u;
                }
                return 0u;
            }
            if ((s32)r0 >= 24) {
                return 0u;
            }
            return 2u;
        }
        if ((s32)r0 < 50) {
            if ((s32)r0 >= 44) {
                return 0u;
            }
            return 1u;
        }
        if ((s32)r0 >= 54) {
            return 0u;
        }
        return 2u;
    }
    c0lt = (s32)r0 < 78;
    if (r0 == 0x4eu) {
        return 4u;
    }
    if (c0lt) {
        c0lt = (s32)r0 < 74;
        if (r0 == 0x4au) {
            return 0u;
        }
        if (c0lt) {
            if ((s32)r0 >= 68) {
                return 0u;
            }
            return 1u;
        }
        if ((s32)r0 >= 76) {
            return 0u;
        }
        return 1u;
    }
    if ((s32)r0 >= 82) {
        return 0u;
    }
    if ((s32)r0 >= 80) {
        return 2u;
    }
    return 0u;
}
