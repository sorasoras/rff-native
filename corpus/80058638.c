#include "tc_rt.h"

void fn_80058638(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    (void)param_1;
    r6 = param_3;
    if (param_3 == 0u) {
        r3 = tc_call(0x80057a90u, &a);
        r6 = r3;
    }
    if (rd32(r6 + 0x10u) != 0u) {
        r3 = rd32(r6);
        r5 = rd32(r6 + 0xcu);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80040e98u, &a);
    } else {
        if (rd32(r6 + 0x20u) != 0u) {
            a.r[0] = r6 + 0x24u;
            a.r[1] = param_2;
            (void)tc_call(0x80094ec0u, &a);
        } else {
            r3 = rd32(r6);
            r5 = rd32(r6 + 0xcu);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = param_2;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        }
    }
    return;
}
