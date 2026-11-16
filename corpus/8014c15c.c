#include "tc_rt.h"

void fn_8014c15c(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    c0lt = param_2 < 1;
    if ((u32)param_2 != 1u) {
        if (!c0lt) {
            return;
        }
        if (param_2 < 0) {
            return;
        }
        r7 = 0u;
        r5 = 0u;
        while ((s32)r7 < (s32)rd32((u32)param_1 + 0xcu)) {
            r7 = r7 + 1u;
            r6 = rd32((u32)param_1 + 8u) + r5;
            r5 = r5 + 0xf0u;
            r4 = rd32(r6 + 0x30u);
            r4 = r4 ^ (r4 & 5u);
            wr32(r6 + 0x30u, r4 | (r4 ^ 0xau));
        }
        return;
    }
    return;
}
