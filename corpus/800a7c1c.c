#include "tc_rt.h"

s32 fn_800a7c1c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    if ((u32)param_1 == 0u) {
        r3 = 1u;
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = 0xeu;
        r3 = tc_call(0x8014da9cu, &a);
        r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
        r3 = r3 + 1u;
    }
    return (s32)r3;
}
