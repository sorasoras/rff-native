#include "tc_rt.h"

u32 fn_801771b4(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    c0lt = param_2 < 2;
    r31 = 1u;
    if ((u32)param_2 != 2u) {
        do {
            if (!c0lt) {
                if (param_2 >= 9) {
                    return r31;
                }
                if (param_2 >= 6) break;
            } else {
                c0lt = param_2 < 0;
                if ((u32)param_2 != 0u) {
                    if (!c0lt) break;
                    return r31;
                }
            }
            a.r[0] = 0x202du;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 == 1u) {
                return r31;
            }
            r31 = 0u;
            return r31;
        } while (0);
        a.r[0] = 0x202du;
        r3 = tc_call(0x8014d9a4u, &a);
        if (r3 != 2u) {
            r31 = 0u;
        }
    }
    return r31;
}
