#include "tc_rt.h"

s32 fn_800f8ebc(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r6 = 0, r7 = 0, r8 = 0;
    r3 = param_1;
    r8 = param_2;
    for (;;) {
        r7 = (u32)rd16(r3);
        if (r7 == 0u) break;
        if (param_3 > 0) {
            r6 = r8 - param_2;
            if (((s32)(((r6 >> 0x1fu) & 1u) + r6) >> 1) > param_3) break;
        }
        wr16(r8, (u16)r7);
        r8 = r8 + 2u;
        r3 = r3 + 2u;
    }
    r3 = r8 - param_2;
    r3 = (u32)((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1);
    return (s32)r3;
}
