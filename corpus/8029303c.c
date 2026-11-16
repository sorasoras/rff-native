#include "tc_rt.h"

u32 fn_8029303c(s32 param_1, u32 param_2)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    r7 = rd32(0x80570e00u);
    r9 = (param_2 >> 2u) & 0x3fu;
    r8 = 0u;
    r5 = (u32)rd8(r7);
    while ((r8 & 0xffu) < r5) {
        r4 = rd32(r7 + 4u);
        r6 = (r8 << 1u) & 0x1feu;
        if (r9 == (u32)rd8(r4 + r6)) {
            r4 = r4 + r6;
            wr8((u32)param_1 + 0x15u, rd8(r4 + 1u));
            return 1u;
        }
        r8 = r8 + 1u;
    }
    return 0u;
}
