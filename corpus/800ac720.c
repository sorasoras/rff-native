#include "tc_rt.h"

u32 fn_800ac720(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    wr32(param_1, 0x80354220u);
    a.r[0] = param_1 + 0x10u;
    (void)tc_call(0x800ae1d8u, &a);
    a.r[0] = param_1 + 0x18u;
    (void)tc_call(0x800ae3f8u, &a);
    f1 = (f64)rdf32(0x80572bc8u);
    f0 = (f64)rdf32(0x80572bc0u);
    wr32(param_1 + 0x6cu, 0u);
    wr32(param_1 + 0x70u, 0u);
    wr32(param_1 + 0x74u, 0u);
    wr32(param_1 + 0x78u, 0u);
    wr32(param_1 + 0x7cu, 0u);
    wrf32d(param_1 + 0x80u, f1);
    wrf32d(param_1 + 0x84u, f0);
    r3 = tc_call(0x80097e5cu, &a);
    r4 = r3;
    if (rd32(r3 + 0x10u) != 0u) {
        r3 = rd32(r3);
        a.r[0] = r3;
        a.r[1] = 0x44u;
        a.r[2] = rd32(r4 + 0xcu);
        a.r[3] = r4 + 0x18u;
        r3 = tc_call(0x80040db8u, &a);
    } else {
        if (rd32(r3 + 0x20u) != 0u) {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = 0x20u;
            a.r[2] = 0x44u;
            r3 = tc_call(0x80094e80u, &a);
        } else {
            r3 = rd32(r3);
            a.r[0] = r3;
            a.r[1] = 0x44u;
            a.r[2] = rd32(r4 + 0xcu);
            a.r[3] = r4 + 0x18u;
            r3 = tc_call(0x80040cd8u, &a);
        }
    }
    wr32(param_1 + 0xcu, r3);
    return param_1;
}
