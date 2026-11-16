#include "tc_rt.h"

u32 fn_802df470(u32 param_1, s32 param_2)
{
    u32 r6 = 0, r7 = 0;
    if ((u32)param_2 != 0u) {
        r6 = rd32(param_1);
        r7 = rd32(param_1 + 4u) + (u32)param_2;
        if ((0u - (u32)((u64)(u32)(((u64)(r7 <= r6) + 0xffffffffull) >> 0x20ull) + 0xffffffffull)) == 0u) {
            r6 = 0u;
            if ((0u - (u32)((u64)(u32)(((u64)(r7 >= 0u) + 0xffffffffull) >> 0x20ull) + 0xffffffffull)) == 0u) {
                r6 = r7;
            }
        }
        wr32(param_1 + 4u, r6);
    }
    return rd32(param_1 + 4u);
}
