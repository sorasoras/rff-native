#include "tc_rt.h"

s32 fn_801424dc(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = (u32)(s8)param_3;
    r3 = tc_call(0x80142414u, &a);
    r30 = (u32)(s8)r3;
    r3 = tc_call(0x80040b64u, &a);
    r28 = 0x64u;
    r27 = 0u;
    r29 = r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u);
    while ((s32)r27 < (s32)r30) {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = (u32)(s8)param_3;
        a.r[3] = r27;
        r3 = tc_call(0x80142464u, &a);
        r28 = r28 - (u32)(s8)r3;
        if ((s32)r28 < (s32)r29) {
            r31 = r27;
            return (s32)r31;
        }
        r27 = r27 + 1u;
    }
    return (s32)r31;
}
