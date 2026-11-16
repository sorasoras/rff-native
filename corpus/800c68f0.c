#include "tc_rt.h"

u32 fn_800c68f0(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    f0 = (f64)rdf32(0x80572f38u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    wrf32d(0x817fdfe0u, f0);
    wrf32d(0x817fdfdcu, f0);
    wrf32d(0x817fdfd8u, f0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfd8u;
    r3 = tc_call(0x800c677cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    if (rd32(0x805711ecu) != 0u && r3 == 0u) {
        r3 = 0u;
    } else {
        r0 = rd32(param_1 + 0x298u);
        r3 = 0u;
        if (r0 == 1u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            wrf32d(param_3, f1);
            a.r[0] = param_1;
            a.r[1] = 0x817fdfd8u;
            a.r[2] = param_2;
            a.r[3] = param_4;
            r3 = tc_call(0x80068ae0u, &a);
        } else {
            if (r0 != 2u) {
                a.f[0] = (f64)rdf32(0x80572f44u);
                a.r[0] = param_1;
                a.r[1] = 0x817fdfd8u;
                a.r[2] = param_2;
                a.r[3] = param_3;
                a.r[4] = param_4;
                r3 = tc_call(0x80068044u, &a);
            }
        }
    }
    return r3;
}
