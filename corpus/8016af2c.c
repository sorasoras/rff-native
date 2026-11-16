#include "tc_rt.h"

void fn_8016af2c(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0;
    (void)param_1;
    if ((s32)rd32((u32)param_2 + 0xea8u) <= 0) {
        return;
    }
    r0 = rd32((u32)param_2 + 0xea8u);
    if ((s32)r0 > 0) {
        r0 = r0 - 1u;
        wr32((u32)param_2 + 0xea8u, r0);
        if (r0 == 0u) {
            r0 = 1u;
            if (r0 == 0u) {
                return;
            }
            r3 = rd32((u32)param_2 + 0xe88u);
            wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
            return;
        }
    }
    r0 = 0u;
    if (r0 == 0u) {
        return;
    }
    r3 = rd32((u32)param_2 + 0xe88u);
    wr32((u32)param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
    return;
}
