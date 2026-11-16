#include "tc_rt.h"

s32 fn_80141ef0(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0xcu;
    r30 = 0u;
    do {
        a.r[0] = r31;
        r3 = tc_call(0x80141ff8u, &a);
        if (r3 == 0u) {
            r3 = r31;
            return (s32)r3;
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x20u;
    } while ((s32)r30 < 8);
    r3 = 0u;
    return (s32)r3;
}
