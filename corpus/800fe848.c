#include "tc_rt.h"

s32 fn_800fe848(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = rd32((u32)param_1 + 0xb4u);
    for (;;) {
        if ((s32)r30 >= (s32)rd32((u32)param_1 + 0xb8u)) {
            r3 = 0u;
            return (s32)r3;
        }
        a.r[0] = param_2;
        a.r[1] = r31 + 0x2cu;
        r3 = tc_call(0x800f86b8u, &a);
        if (r3 != 0u) {
            if ((u32)param_3 == 0u) break;
            a.r[0] = (u32)param_3;
            a.r[1] = r31 + 0x2cu;
            r3 = tc_call(0x800f86b8u, &a);
            if (r3 != 0u) break;
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x4cu;
    }
    r3 = r31;
    return (s32)r3;
}
