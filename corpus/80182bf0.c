#include "tc_rt.h"

void fn_80182bf0(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(param_1 + 0x188u);
    if (r0 != 0u) {
        a.r[0] = r0;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            f0 = (f64)rdf32(0x805750b8u);
            wrf32d(0x817fdff4u, f0);
            wrf32d(0x817fdff0u, f0);
            wrf32d(0x817fdfecu, f0);
            a.r[0] = param_1;
            a.r[1] = 0x817fdfecu;
            (void)tc_call(0x80182d38u, &a);
            r3 = rd32(0x817fdff0u);
            r0 = rd32(0x817fdff4u);
            wr32(0x817fdfd4u, rd32(0x817fdfecu));
            wr32(0x817fdfd8u, r3);
            wr32(0x817fdfdcu, r0);
            a.r[0] = rd32(param_1 + 0x188u);
            a.r[1] = 0x817fdfd4u;
            f1 = tc_callf(0x8015811cu, &a);
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            f0 = (f64)rdf32(0x805750b8u);
            wrf32d(0x817fdfe4u, f1);
            wrf32d(0x817fdfe0u, f0);
            r3 = rd32(0x817fdfe4u);
            wrf32d(0x817fdfe8u, f0);
            r0 = rd32(0x817fdfe8u);
            wr32(0x817fdfc8u, rd32(0x817fdfe0u));
            wr32(0x817fdfccu, r3);
            wr32(0x817fdfd0u, r0);
            a.r[0] = rd32(param_1 + 0x188u);
            a.r[1] = 0x817fdfc8u;
            (void)tc_call(0x801582b4u, &a);
        }
    }
    return;
}
