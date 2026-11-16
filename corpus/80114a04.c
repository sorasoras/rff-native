#include "tc_rt.h"

u32 fn_80114a04(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(param_1 + 4u, 0u);
    r3 = tc_call(0x80097e5cu, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x1e00u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
        r31 = r3;
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x1e00u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x1e00u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
        r31 = r3;
    }
    if (r3 != 0u) {
        r3 = r3;
        a.r[0] = r3;
        a.r[1] = 0x80114b58u;
        a.r[2] = 0x80114bd4u;
        a.r[3] = 0x50u;
        a.r[4] = 0x60u;
        (void)tc_call(0x80255624u, &a);
    }
    wr32(param_1, r31);
    return param_1;
}
