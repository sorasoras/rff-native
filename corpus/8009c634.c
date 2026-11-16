#include "tc_rt.h"

u32 fn_8009c634(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    (void)param_2;
    r31 = 0u;
    if ((u32)param_1 != 0u) {
        r4 = rd32((u32)param_1 + 0x50u);
        r31 = 1u;
        if ((r4 & 2u) == 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8009b240u, &a);
            if ((u32)(s8)r3 == 0u) {
                return r31;
            }
            r4 = rd32((u32)param_1 + 0x50u);
            if ((r4 & 2u) == 0u) {
                return r31;
            }
        }
        if ((r4 & 0x80000000u) != 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8009b2f8u, &a);
            if ((u32)(s8)r3 == 0u) {
                return r31;
            }
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8009b450u, &a);
            if ((u32)(s8)r3 == 0u) {
                return r31;
            }
        }
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x8009b5a8u, &a);
        if ((u32)(s8)r3 != 0u) {
            a.r[0] = rd32((u32)param_1 + 0xc0u);
            r3 = tc_call(0x8009f2ccu, &a);
            if ((u32)(s8)r3 == 0u) {
                a.r[0] = rd32((u32)param_1 + 0xc0u);
                r3 = tc_call(0x8009f2dcu, &a);
                if (r3 != 0u) {
                    a.r[0] = rd32((u32)param_1 + 0xc0u);
                    a.r[1] = 0u;
                    r3 = tc_call(0x8009f238u, &a);
                    if ((u32)(s8)r3 == 0u) {
                        return r31;
                    }
                }
                a.r[0] = rd32((u32)param_1 + 0xc0u);
                (void)tc_call(0x8009f2e4u, &a);
                a.r[0] = rd32((u32)param_1 + 0xc0u);
                r3 = tc_call(0x8009f2ccu, &a);
                if ((u32)(s8)r3 == 0u) {
                    return r31;
                }
            } else {
                a.r[0] = rd32((u32)param_1 + 0xc0u);
                (void)tc_call(0x8009f2e4u, &a);
            }
            a.r[0] = rd32((u32)param_1 + 0xc4u);
            (void)tc_call(0x8009f2e4u, &a);
            a.r[0] = rd32((u32)param_1 + 0xc8u);
            (void)tc_call(0x8009f2e4u, &a);
        }
    }
    return r31;
}
