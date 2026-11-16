#include "tc_rt.h"

u32 fn_80177238(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    c0lt = param_2 < 1;
    r31 = 0u;
    if ((u32)param_2 == 1u) {
        a.r[0] = 0x202du;
        r3 = tc_call(0x8014d9a4u, &a);
        if (r3 == 2u) {
            r31 = 1u;
        }
    } else if (!c0lt) {
        if (param_2 < 3) {
            r31 = 1u;
        }
    } else if (param_2 >= 0) {
        a.r[0] = 0x202du;
        r3 = tc_call(0x8014d9a4u, &a);
        if (r3 != 2u) {
            r31 = 1u;
        }
    }
    return r31;
}
