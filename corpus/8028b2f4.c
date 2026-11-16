#include "tc_rt.h"

s32 fn_8028b2f4(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    r6 = rd32(param_1);
    r7 = 0u;
    while (r6 != 0u && (s32)rd32(r6 + 0xcu) <= 0) {
        r6 = rd32(r6);
        r7 = r7 + 1u;
    }
    r8 = (u32)param_2;
    while (r6 != 0u && (s32)r8 > 0) {
        r9 = rd32(r6 + 0xcu);
        r5 = r9 - r8;
        wr32(r6 + 0xcu, r5);
        if ((s32)r5 <= 0) {
            wr32(r6 + 0xcu, 0u);
            r7 = r7 + 1u;
        }
        r8 = r8 - r9;
        r6 = rd32(r6);
    }
    r0 = rd32(param_1 + 8u);
    if ((s32)r0 > 0) {
        r0 = r0 - (u32)param_2;
        wr32(param_1 + 8u, r0);
        if ((s32)r0 < 0) {
            wr32(param_1 + 8u, 0u);
        }
    }
    return (s32)r7;
}
