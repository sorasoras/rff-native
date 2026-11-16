#include "tc_rt.h"

void fn_801518b8(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r31 = 0u;
    if (rd32((u32)param_2 + 0x1468u) == 2u) {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    if (r31 != 0u) {
        r3 = rd32((u32)param_2 + 0xf78u);
        wr32((u32)param_2 + 0xf78u, r3 ^ (r3 & 0x10000u));
    }
    r31 = 0u;
    if (rd32((u32)param_2 + 0x1468u) == 3u) {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x800b2fe8u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    if (r31 != 0u) {
        r3 = rd32((u32)param_2 + 0xe88u);
        wr32((u32)param_2 + 0x9cu, rd32((u32)param_2 + 0x9cu) & 0xfbffffffu);
        wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
    }
    return;
}
