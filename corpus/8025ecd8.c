#include "tc_rt.h"

u32 fn_8025ecd8(u32 param_1, u32 param_2)
{
    u32 c0gt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r3 = param_1;
    r4 = param_2;
    r6 = rd32(0x8038ed00u);
    do {
        r5 = (u32)rd8(r3);
        r0 = 0u;
        r3 = r3 + 1u;
        r7 = (u32)(s8)r5;
        if ((s32)r7 < 0 || (s32)r7 >= 256) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            r7 = (u32)rd8(rd32(r6 + 0x10u) + r7);
        }
        r5 = (u32)rd8(r4);
        r8 = (u32)(s8)r7;
        r0 = 0u;
        r4 = r4 + 1u;
        r7 = (u32)(s8)r5;
        if ((s32)r7 < 0 || (s32)r7 >= 256) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            r7 = (u32)rd8(rd32(r6 + 0x10u) + r7);
        }
        r0 = (u32)(s8)r7;
        c0gt = (s32)r8 > (s32)r0;
        if ((s32)r8 < (s32)r0) {
            return 0xffffffffu;
        }
        if (c0gt) {
            return 1u;
        }
    } while (r8 != 0u);
    return 0u;
}
