#include "tc_rt.h"

u32 fn_8026ca20(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = (u32)param_1 + 0x3cu;
    r0 = (u32)param_3 - 1u;
    r8 = ~(r0 | r0);
    r12 = 0u;
    r31 = 0xffffffffu;
    r30 = 0u;
    r11 = rd32(r3);
    r10 = (ppc_cntlzw((u32)rd16(r3 + 0x12u) & 1u) >> 5u) & 0x7ffffffu;
    while (r11 != 0u) {
        r29 = r11 + 0x10u;
        r9 = rd32(r11 + 4u);
        r7 = r8 & ((u32)param_3 + r29 - 1u);
        if (r9 >= (param_2 + (r7 - r29)) && r31 > r9) {
            r12 = r11;
            r31 = r9;
            r30 = r7;
            if (r10 != 0u || r9 == param_2) break;
        }
        r11 = rd32(r11 + 0xcu);
    }
    if (r12 == 0u) {
        r3 = 0u;
    } else {
        a.r[0] = r3;
        a.r[1] = r12;
        a.r[2] = r30;
        a.r[3] = param_2;
        a.r[4] = 0u;
        r3 = tc_call(0x8026c81cu, &a);
    }
    return r3;
}
