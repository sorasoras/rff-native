#include "tc_rt.h"

u32 fn_80157ba4(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_3;
    r3 = tc_call(0x80037178u, &a);
    r4 = r3;
    if (r3 == 0u) {
        r31 = 0u;
    } else {
        if (rd32(param_2 + 0x10u) != 0u) {
            a.r[0] = rd32(param_2);
            a.r[1] = r4;
            a.r[2] = rd32(param_2 + 0xcu);
            a.r[3] = param_2 + 0x18u;
            r3 = tc_call(0x80040db8u, &a);
        } else {
            if (rd32(param_2 + 0x20u) != 0u) {
                a.r[0] = param_2 + 0x24u;
                a.r[1] = 0x20u;
                a.r[2] = r3;
                r3 = tc_call(0x80094e80u, &a);
            } else {
                a.r[0] = rd32(param_2);
                a.r[1] = r4;
                a.r[2] = rd32(param_2 + 0xcu);
                a.r[3] = param_2 + 0x18u;
                r3 = tc_call(0x80040cd8u, &a);
            }
        }
        r31 = r3;
    }
    a.r[0] = param_1;
    a.r[1] = r31;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.r[4] = 0u;
    (void)tc_call(0x80157c7cu, &a);
    return r31;
}
