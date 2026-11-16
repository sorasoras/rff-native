#include "tc_rt.h"

s32 fn_80159da4(s32 param_1, u32 param_r10, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r7;
    a.r[4] = param_r8;
    a.r[5] = param_r6;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    r3 = tc_call(0x80158ec8u, &a);
    r30 = r3;
    if ((s32)r3 >= 0) {
        r31 = 0u;
        do {
            a.r[0] = (u32)param_1 + 0x6a0u;
            a.r[1] = r31;
            r3 = tc_call(0x802de9f0u, &a);
            r31 = r3;
            if (r3 == 0u) {
                r31 = 0u;
                break;
            }
            r3 = r3;
            a.r[0] = r3;
            a.r[1] = r30;
            r3 = tc_call(0x80159d20u, &a);
        } while (r3 == 0u);
        if (r31 == 0u) {
            a.r[0] = (u32)param_1 + 0xcu;
            a.r[1] = 0x24u;
            a.r[2] = 4u;
            a.r[3] = 0x80159d34u;
            r3 = tc_call(0x800a7710u, &a);
            r31 = r3;
            if (r3 == 0u) {
                do {
                    a.r[0] = (u32)param_1 + 0x6a0u;
                    a.r[1] = r31;
                    r3 = tc_call(0x802de9f0u, &a);
                    r31 = r3;
                    if (r3 == 0u) break;
                    a.r[0] = (u32)param_1;
                    a.r[1] = r3;
                    r3 = tc_call(0x80159d38u, &a);
                } while (r3 != 0u);
                if (r31 == 0u) {
                    r3 = 0u;
                    return (s32)r3;
                }
                a.r[0] = r31;
                r3 = tc_call(0x8015a9dcu, &a);
                if (r3 != 0u) {
                    r3 = 0u;
                    return (s32)r3;
                }
                a.r[0] = (u32)param_1 + 0x6a0u;
                a.r[1] = r31;
                (void)tc_call(0x802de984u, &a);
                a.r[0] = r31;
                (void)tc_call(0x8015a7ccu, &a);
            }
            a.r[0] = r31;
            a.r[1] = r30;
            (void)tc_call(0x8015a774u, &a);
            a.r[0] = (u32)param_1 + 0x6a0u;
            a.r[1] = r31;
            (void)tc_call(0x802de7f4u, &a);
            r3 = r31;
        } else {
            r3 = r31;
        }
    } else {
        r3 = 0u;
    }
    return (s32)r3;
}
