#include "tc_rt.h"

void fn_802df4d4(u32 param_1, s32 param_2, s32 param_3)
{
    u32 c0lt = 0, r6 = 0, r7 = 0;
    c0lt = param_3 < 1;
    if ((u32)param_3 != 1u) {
        if (!c0lt) {
            if (param_3 < 3) {
                wr32(param_1 + 4u, rd32(param_1));
            }
        } else if (param_3 >= 0) {
            wr32(param_1 + 4u, 0u);
        }
    }
    if ((u32)param_2 == 0u) {
        return;
    }
    r6 = rd32(param_1);
    r7 = rd32(param_1 + 4u) + (u32)param_2;
    if ((0u - (u32)((u64)(u32)(((u64)(r7 <= r6) + 0xffffffffull) >> 0x20ull) + 0xffffffffull)) == 0u) {
        r6 = 0u;
        if ((0u - (u32)((u64)(u32)(((u64)(r7 >= 0u) + 0xffffffffull) >> 0x20ull) + 0xffffffffull)) == 0u) {
            r6 = r7;
        }
    }
    wr32(param_1 + 4u, r6);
    return;
}
