#include "tc_rt.h"

u32 fn_801b08a8(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    if ((rd32(0x8057118cu) & 8u) == 0u) {
        r3 = 0u;
    } else {
        if (rd32(0x805706e8u) != 7u) {
            r3 = 0u;
        } else {
            if (rd32(param_1 + 0x260u) == 0u) {
                r3 = 0u;
            } else {
                r4 = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92730u);
                while (r4 != 0u) {
                    r3 = r4;
                    r4 = rd32(r4);
                    r31 = rd32(r3 + 8u);
                    if (rd32(r31 + 0x84u) == 0x1f41u) {
                        if (rd32(r31 + 0xbcu) != 0u) {
                            r3 = 0u;
                            return r3;
                        }
                        f0 = (f64)rdf32(0x80575b78u);
                        wrf32d(0x817fdff0u, f0);
                        wrf32d(0x817fdfecu, f0);
                        wrf32d(0x817fdfe8u, f0);
                        a.r[0] = r31;
                        a.r[1] = 0x817fdfe8u;
                        a.r[2] = 0xd3u;
                        a.r[3] = 0x804890c8u;
                        a.f[0] = 0.0;
                        a.f[1] = 0.0;
                        r3 = tc_call(rd32(rd32(r31) + 0x34u), &a);
                        r4 = tc_lastr4();
                        if (r3 == 0u) {
                            r3 = 0u;
                            return r3;
                        }
                        f2 = (f64)rdf32(0x817fdfe8u);
                        wrf32d(param_1 + 0x84u, f2);
                        f1 = (f64)rdf32(0x817fdfecu);
                        wrf32d(param_1 + 0x88u, f1);
                        f0 = (f64)rdf32(0x817fdff0u);
                        wrf32d(param_1 + 0x8cu, f0);
                        wrf32d(param_1 + 4u, f2);
                        wrf32d(param_1 + 8u, f1);
                        wrf32d(param_1 + 0xcu, f0);
                        a.r[0] = r31;
                        a.r[1] = r4;
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        a.f[1] = f2;
                        f1 = tc_callf(rd32(rd32(r31) + 0x2cu), &a);
                        a.r[0] = param_1;
                        a.r[1] = tc_lastr4();
                        a.r[2] = 0u;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
                        wr32(r31 + 0xbcu, param_1);
                        r3 = 1u;
                        return r3;
                    }
                }
                r3 = 0u;
            }
        }
    }
    return r3;
}
