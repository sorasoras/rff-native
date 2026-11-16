#include "tc_rt.h"

void fn_8016bd28(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x800b32f4u, &a);
    if (r3 == 0u) {
        r3 = rd32((u32)param_2 + 0xe88u);
        wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
    }
    a.r[0] = (u32)param_2;
    a.r[1] = 0x71cu;
    r3 = tc_call(0x800b3318u, &a);
    if (r3 != 0u) {
        r3 = rd32((u32)param_2 + 0xe88u);
        wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
    } else {
        if ((s32)rd32((u32)param_2 + 0xf00u) >= 30) {
            r3 = rd32((u32)param_2 + 0xe88u);
            wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
        }
    }
    return;
}
