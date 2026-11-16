#include "tc_rt.h"

u32 fn_8013e350(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    c0lt = param_2 < 2;
    r31 = 1u;
    if ((u32)param_2 != 2u) {
        if (c0lt) {
            return r31;
        }
        if (param_2 >= 4) {
            return r31;
        }
        r3 = tc_call(0x80081324u, &a);
        if (r3 != 0u) {
            r31 = 0u;
            return r31;
        }
    } else {
        r3 = tc_call(0x800813c0u, &a);
        if (r3 == 0u) {
            r3 = tc_call(0x800813fcu, &a);
            if (r3 == 0u) {
                return r31;
            }
        }
        r31 = 0u;
        return r31;
    }
    r3 = tc_call(0x80081370u, &a);
    if (r3 == 0u) {
        return r31;
    }
    r31 = 0u;
    return r31;
}
