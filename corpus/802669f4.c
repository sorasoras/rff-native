#include "tc_rt.h"

s32 fn_802669f4(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r4 = 0, r7 = 0, r8 = 0, r9 = 0;
    r4 = param_2;
    r9 = 0u;
    r0 = 0u;
    while (r0 == 0u && (s32)r9 < param_3) {
        r7 = rd32((u32)param_1 + 0xcu);
        r8 = (u32)rd8(r4);
        if (r7 >= 0x880u) {
            r7 = 0x301u;
        } else {
            r0 = r7 + 0x10u;
            wr32((u32)param_1 + 0xcu, r7 + 1u);
            r7 = 0u;
            wr8((u32)param_1 + r0, (u8)r8);
            wr32((u32)param_1 + 8u, rd32((u32)param_1 + 8u) + 1u);
        }
        r0 = r7;
        r9 = r9 + 1u;
        r4 = r4 + 1u;
    }
    return (s32)r0;
}
