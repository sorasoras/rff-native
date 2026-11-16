#include "tc_rt.h"

void fn_80183374(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80040b64u, &a);
    r30 = 0u;
    r29 = 0u;
    r31 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
    for (;;) {
        a.r[0] = (u32)param_1;
        a.r[1] = rd32((u32)param_1 + 8u);
        a.r[2] = param_2;
        r3 = tc_call(0x801832c8u, &a);
        if ((s32)r29 >= (s32)(s8)r3) break;
        a.r[1] = rd32((u32)param_1 + 8u);
        a.r[2] = param_2;
        a.r[3] = (u32)(s8)r29;
        r3 = tc_call(0x80183480u, &a);
        r30 = r30 + (u32)(s8)r3;
        if ((s32)r31 < (s32)r30) {
            wr32((u32)param_1 + 0x18u, r29);
            return;
        }
        r29 = r29 + 1u;
    }
    return;
}
