#include "tc_rt.h"

void fn_80093790(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    if (rd32(param_1 + 0x254u) != 3u) {
        if (rd32(param_1 + 0x25cu) == 0x18u && rd32(param_1 + 0xe0u) == 0u) {
            a.r[0] = 0xbu;
            r3 = tc_call(0x80074e90u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                a.r[0] = param_1;
                a.r[1] = rd32(0x80486404u);
                a.r[2] = 0x7cu;
                a.r[3] = 0x804890c8u;
                f1 = tc_callf(0x800651d4u, &a);
                r4 = tc_lastr4();
            }
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        r3 = tc_call(rd32(rd32(param_1) + 0x94u), &a);
        if (r3 != 0u) {
            wr32(param_1 + 0x254u, 2u);
            a.r[0] = param_1 + 0x210u;
            a.r[1] = param_1;
            r3 = tc_call(0x800dbd88u, &a);
            if (r3 == 0u) {
                wr32(param_1 + 0x254u, 0u);
            }
        }
        a.r[0] = param_1;
        f1 = tc_callf(0x800f2c58u, &a);
        r4 = tc_lastr4();
        if (rd32(param_1 + 0x268u) != 0u) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
            f1 = tc_lastf();
            r4 = rd32(param_1 + 0x268u);
            wrf32d(r4 + 0x2cu, (f64)rdf32(r3));
            wrf32d(r4 + 0x30u, (f64)rdf32(r3 + 4u));
            wrf32d(r4 + 0x34u, (f64)rdf32(r3 + 8u));
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(param_1) + 0x2cu), &a);
            r3 = rd32(param_1 + 0x268u);
            if ((f64)rdf32(0x80572a00u) < f1) {
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80572a04u));
            } else {
                f0 = (f64)rdf32(0x80572a08u);
                if ((f0 > f1) || (f0 == f1)) {
                    f1 = (f64)(f32)((f64)rdf32(0x80572a04u) + f1);
                }
            }
            wrf32d(r3 + 0x40u, f1);
        }
    }
    return;
}
