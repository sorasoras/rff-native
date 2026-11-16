#include "tc_rt.h"

s32 fn_801cfa98(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 2u;
    do {
        a.r[0] = param_1;
        a.r[1] = r30;
        r3 = tc_call(0x801cfa64u, &a);
        if (r3 != 0u) {
            r31 = r31 + 1u;
        }
        r30 = r30 + 1u;
    } while ((s32)r30 < 10);
    return (s32)r31;
}
