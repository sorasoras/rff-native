#include "tc_rt.h"

u32 fn_8017468c(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32(param_1 + 0x120u) == 4u) {
        r3 = 0u;
    } else {
        r4 = rd32(param_1 + 0x11cu);
        if (r4 == 0u) {
            r3 = 0u;
        } else {
            r4 = rd32(r4 + 0xf8u);
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = param_2;
            r3 = tc_call(0x801745d4u, &a);
            if (r3 == 0u) {
                r3 = 0u;
            } else {
                a.r[0] = param_1;
                (void)tc_call(0x80174750u, &a);
                f1 = (f64)rdf32(0x80574eb0u);
                f0 = (f64)rdf32(0x80574eb4u);
                wrf32d(0x817fdfe8u, f1);
                wrf32d(0x817fdfecu, f0);
                wrf32d(0x817fdff0u, f1);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                a.f[0] = (f64)rdf32(0x80574eb8u);
                a.r[0] = 0x76u;
                a.r[1] = r3;
                a.r[2] = 0x817fdfe8u;
                a.r[3] = 0x804b15c0u;
                (void)tc_call(0x800d782cu, &a);
                r3 = 1u;
                wr32(param_1 + 0x120u, 4u);
            }
        }
    }
    return r3;
}
