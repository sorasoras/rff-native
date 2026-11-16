#include "tc_rt.h"

u32 fn_801fbcac(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = (u32)param_1 + 0xd8u;
    r3 = tc_call(0x800f84d0u, &a);
    if (r3 == 1u) {
        r31 = 1u;
    }
    return r31;
}
