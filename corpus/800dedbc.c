#include "tc_rt.h"

u32 fn_800dedbc(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r31 = 1u;
    if (param_2 >= 3) {
        if (param_2 < 6) {
            a.r[0] = 0x2fu;
            r3 = tc_call(0x8014d9a4u, &a);
            if (r3 != 1u) {
                r31 = 0u;
            }
        }
    } else if (param_2 >= 0) {
        a.r[0] = 0x2fu;
        r3 = tc_call(0x8014d9a4u, &a);
        if (r3 != 0u) {
            r31 = 0u;
        }
    }
    return r31;
}
