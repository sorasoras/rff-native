#include "tc_rt.h"

s32 fn_80118e24(u32 param_1, u32 param_2, s32 param_3, s32 param_4, s32 param_5)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r28 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_1;
    r28 = param_2;
    if (param_4 < 0) {
        a.r[0] = 0x10u;
        a.r[1] = 0xffffffffu;
        r3 = tc_call(0x800a51f8u, &a);
        r31 = r3;
    } else {
        r31 = (u32)param_4;
    }
    if (param_5 < 0) {
        a.r[0] = 0x12u;
        a.r[1] = 0xffffffffu;
        r3 = tc_call(0x800a51f8u, &a);
    } else {
        r3 = (u32)param_5;
    }
    r4 = 0u;
    ctr = (u32)param_3;
    if ((u32)param_3 > 0u) {
        do {
            if ((u32)(s8)rd8(r28 + 1u) == r3 && (u32)(s8)rd8(r28) == r31) {
                r3 = r4;
                return (s32)r3;
            }
            r4 = r4 + 1u;
            r28 = r28 + 2u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    r3 = 0xffffffffu;
    return (s32)r3;
}
