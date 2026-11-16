#include "tc_rt.h"

s32 fn_801d1ee4(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8007f964u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r31 = r3;
    if (r3 == 0u) {
        return (s32)r3;
    }
    if (rd32(param_1 + 0x380u) != 0u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0xccu), &a);
        if ((s32)(r3 - rd32(param_2)) <= 0) {
            a.r[0] = param_1;
            a.r[1] = 6u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            f1 = tc_callf(0x801d204cu, &a);
            a.r[0] = param_1;
            a.r[1] = 1u;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(rd32(rd32(param_1) + 0xd4u), &a);
        } else {
            a.r[0] = param_1;
            a.r[1] = 3u;
            a.r[2] = 1u;
            a.r[3] = 0u;
            (void)tc_call(0x801d204cu, &a);
        }
        f0 = (f64)rdf32(0x80575ea8u);
        wr32(param_1 + 0x338u, 1u);
        r3 = r31;
        wrf32d(param_1 + 0x33cu, f0);
    }
    return (s32)r3;
}
