#include "tc_rt.h"

void fn_801ed080(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r5 = rd32(param_1);
    wr32(param_1 + 4u, 0u);
    r31 = rd32(r5 + 8u);
    for (;;) {
        a.r[0] = param_1;
        r3 = tc_call(0x801ed124u, &a);
        if ((s32)r30 >= (s32)r3) break;
        a.r[0] = r31;
        a.r[1] = param_2;
        r3 = tc_call(0x8025beb0u, &a);
        if (r3 == 0u) {
            wr32(param_1 + 4u, r30);
            return;
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x20u;
    }
    return;
}
