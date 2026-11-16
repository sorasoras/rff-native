#include "tc_rt.h"

void fn_8017aaac(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r28 = param_3;
    a.r[0] = param_1;
    r3 = tc_call(0x8017ad14u, &a);
    r31 = r3;
    r30 = 0u;
    while ((s32)r30 < (s32)r31) {
        a.r[0] = param_1;
        a.r[1] = r30;
        r3 = tc_call(0x8017aef8u, &a);
        if ((u32)rd16(r3) == param_2 && (param_4 == 0u || (u32)rd8(r3 + 3u) == param_4)) {
            a.r[0] = r3;
            a.r[1] = r28;
            r3 = tc_call(0x8017ad98u, &a);
            r28 = r3 & 0xffu;
            if (r28 == 0u) {
                return;
            }
        }
        r30 = r30 + 1u;
    }
    return;
}
