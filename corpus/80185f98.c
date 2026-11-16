#include "tc_rt.h"

u32 fn_80185f98(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r31 = 1u;
    if ((u32)param_2 != 6u) {
        return r31;
    }
    a.r[0] = 0x48u;
    r3 = tc_call(0x8014d9a4u, &a);
    if (r3 == 1u) {
        r31 = 0u;
    }
    return r31;
}
