#include "tc_rt.h"

s32 fn_8017af64(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8017ad14u, &a);
    r31 = r3;
    r30 = 0u;
    r29 = 0u;
    while ((s32)r29 < (s32)r31) {
        a.r[0] = param_1;
        a.r[1] = r29;
        r3 = tc_call(0x8017aef8u, &a);
        if ((u32)rd16(r3) == param_2 && (param_3 == 0u || (u32)rd8(r3 + 3u) == param_3)) {
            r30 = r30 + (u32)rd8(r3 + 2u);
        }
        r29 = r29 + 1u;
    }
    return (s32)r30;
}
