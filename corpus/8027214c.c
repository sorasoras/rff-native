#include "tc_rt.h"

u32 fn_8027214c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0x8038f5dcu;
    a.r[2] = 9u;
    r3 = tc_call(0x8025bfccu, &a);
    if (r3 == 0u && (u32)(s8)rd8((u32)param_1 + 9u) != 0u) {
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
