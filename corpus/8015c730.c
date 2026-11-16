#include "tc_rt.h"

u32 fn_8015c730(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80097e5cu, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x1d00u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x1d00u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x1d00u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
    }
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0x800d3470u;
        a.r[2] = 0x800d34bcu;
        a.r[3] = 0x73cu;
        a.r[4] = 4u;
        r3 = tc_call(0x80255464u, &a);
    }
    wr32(param_1, r3);
    return param_1;
}
