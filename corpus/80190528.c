#include "tc_rt.h"

s32 fn_80190528(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        a.r[0] = (u32)param_1 + 0x24cu;
        a.r[1] = 0x8018db78u;
        a.r[2] = 0x94u;
        a.r[3] = 4u;
        (void)tc_call(0x8025571cu, &a);
        a.r[0] = (u32)param_1 + 0xc8u;
        a.r[1] = 0x80157e18u;
        a.r[2] = 0x54u;
        a.r[3] = 4u;
        (void)tc_call(0x8025571cu, &a);
        if (param_2 > 0 && (u32)param_1 != 0u) {
            r3 = tc_call(0x800545e4u, &a);
            r6 = r3;
            if (rd32(r3 + 0x10u) != 0u) {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = (u32)param_1;
                a.r[2] = r5;
                a.r[3] = r6;
                (void)tc_call(0x80040e98u, &a);
            } else {
                if (rd32(r3 + 0x20u) != 0u) {
                    r3 = r3 + 0x24u;
                    a.r[0] = r3;
                    a.r[1] = (u32)param_1;
                    (void)tc_call(0x80094ec0u, &a);
                } else {
                    r5 = rd32(r3 + 0xcu);
                    r3 = rd32(r3);
                    r6 = r6 + 0x18u;
                    a.r[0] = r3;
                    a.r[1] = (u32)param_1;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    (void)tc_call(0x80040e98u, &a);
                }
            }
        }
    }
    return param_1;
}
