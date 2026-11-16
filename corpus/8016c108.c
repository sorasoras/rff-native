#include "tc_rt.h"

void fn_8016c108(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x800b2ea8u, &a);
    if (r3 != 0u) {
        r3 = rd32((u32)param_2 + 0xe88u);
        wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
    } else {
        if ((rd32((u32)param_2 + 0xe88u) & 0x80u) != 0u) {
            r3 = rd32((u32)param_2 + 0xe88u);
            wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
        } else {
            if ((s32)rd32((u32)param_2 + 0xd60u) >= 30) {
                r3 = rd32((u32)param_2 + 0xe88u);
                wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
            }
        }
    }
    return;
}
