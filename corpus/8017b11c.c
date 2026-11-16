#include "tc_rt.h"

u32 fn_8017b11c(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    c0lt = param_2 < 14;
    r31 = 1u;
    if ((u32)param_2 != 0xeu) {
        if (!c0lt) {
            return r31;
        }
        if (param_2 < 13) {
            return r31;
        }
        a.r[0] = 0x4cu;
        r3 = tc_call(0x8014d9a4u, &a);
        if (r3 == 0u) {
            return r31;
        }
        r31 = 0u;
    } else {
        a.r[0] = 0x4cu;
        r3 = tc_call(0x8014d9a4u, &a);
        if (r3 == 0u) {
            r31 = 0u;
        }
    }
    return r31;
}
