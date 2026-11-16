#include "tc_rt.h"

u32 fn_801a619c(s32 param_1)
{
    u32 r3 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097e5cu, &a);
    r6 = r3;
    if ((u32)param_1 == 0u) {
        r3 = 0u;
    } else {
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = (u32)param_1;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040db8u, &a);
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = 0x20u;
                a.r[2] = (u32)param_1;
                r3 = tc_call(0x80094e80u, &a);
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = (u32)param_1;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040cd8u, &a);
            }
        }
    }
    return r3;
}
