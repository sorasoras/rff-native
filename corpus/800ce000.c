#include "tc_rt.h"

s32 fn_800ce000(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_1;
    r29 = 0u;
    for (;;) {
        r30 = rd32(r31);
        if (r30 == 0u) break;
        a.r[0] = r30;
        r3 = tc_call(0x8025e7a4u, &a);
        if (r3 == (u32)param_3) {
            a.r[0] = param_2;
            a.r[1] = r30;
            a.r[2] = (u32)param_3;
            r3 = tc_call(0x8025e880u, &a);
            if (r3 == 0u) {
                r3 = r29;
                return (s32)r3;
            }
        }
        r31 = r31 + 4u;
        r29 = r29 + 1u;
    }
    r3 = 0xffffffffu;
    return (s32)r3;
}
