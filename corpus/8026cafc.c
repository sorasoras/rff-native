#include "tc_rt.h"

u32 fn_8026cafc(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = (u32)param_1 + 0x3cu;
    r0 = (u32)param_3 - 1u;
    r7 = ~(r0 | r0);
    r11 = 0u;
    r12 = 0xffffffffu;
    r10 = rd32(r3 + 4u);
    r5 = 0u;
    r9 = (ppc_cntlzw((u32)rd16(r3 + 0x12u) & 1u) >> 5u) & 0x7ffffffu;
    while (r10 != 0u) {
        r8 = rd32(r10 + 4u);
        r31 = r10 + 0x10u;
        r30 = r7 & (r8 + r31 - param_2);
        if ((s32)(r30 - r31) >= 0 && r12 > r8) {
            r11 = r10;
            r12 = r8;
            r5 = r30;
            if (r9 != 0u || r8 == param_2) break;
        }
        r10 = rd32(r10 + 8u);
    }
    if (r11 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        a.r[1] = r11;
        a.r[2] = r5;
        a.r[3] = param_2;
        a.r[4] = 1u;
        r3 = tc_call(0x8026c81cu, &a);
    }
    return r3;
}
