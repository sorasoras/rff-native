#include "tc_rt.h"

u32 fn_800c4da0(u32 param_1, u32 param_r4, u32 param_r5)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    r3 = tc_call(0x800c5518u, &a);
    if (r3 != 0u) {
        wr32(param_1 + 0x290u, 0x18u);
        a.r[0] = param_1;
        a.r[1] = 0x23u;
        a.r[2] = 0u;
        a.r[3] = 1u;
        a.f[0] = (f64)rdf32(0x80572ea8u);
        f1 = tc_callf(rd32(rd32(param_1) + 0x54u), &a);
        r4 = tc_lastr4();
        r31 = 0u;
        do {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(param_1) + 0x10u), &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(param_1) + 0x4cu), &a);
            r4 = tc_lastr4();
            r31 = r31 + 1u;
        } while (r31 < 3u);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
