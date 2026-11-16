#include "tc_rt.h"

u32 fn_801b0b54(u32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    if ((rd32(0x8057118cu) & 8u) == 0u) {
        r3 = 0u;
    } else {
        if (rd32(0x805706e8u) != 7u) {
            r3 = 0u;
        } else {
            r5 = rd32((rd32(0x80471a18u) * 0x4150u) - 0x7fb92730u);
            while (r5 != 0u) {
                r4 = r5;
                r5 = rd32(r5);
                r30 = rd32(r4 + 8u);
                if (rd32(r30 + 0x84u) == 0x1f41u) {
                    r31 = rd32(r30 + 0xbcu);
                    if (r31 != 0u) {
                        f3 = (f64)rdf32(param_1);
                        f2 = (f64)rdf32(param_1 + 4u);
                        wrf32d(r31 + 0x84u, f3);
                        f0 = (f64)rdf32(param_1 + 8u);
                        wrf32d(r31 + 0x88u, f2);
                        f1 = (f64)rdf32(0x80575b78u);
                        wrf32d(r31 + 0x8cu, f0);
                        wrf32d(r31 + 4u, f3);
                        wrf32d(r31 + 8u, f2);
                        wrf32d(r31 + 0xcu, f0);
                        a.r[0] = r31;
                        a.r[1] = r4;
                        a.r[2] = r5;
                        a.r[3] = 0u;
                        a.f[0] = f1;
                        a.f[1] = f2;
                        a.f[2] = f3;
                        (void)tc_call(rd32(rd32(r31) + 0x24u), &a);
                        wr32(r30 + 0xbcu, 0u);
                        wr32(r31 + 0xa7cu, 0u);
                        r30 = rd32(r31 + 0x25cu);
                        r3 = tc_call(0x80097da4u, &a);
                        r3 = rd32(r3 + 0xcu);
                        a.r[0] = r3;
                        a.r[1] = r30;
                        a.r[2] = 0xd7u;
                        r3 = tc_call(0x800ed39cu, &a);
                        a.r[0] = r31;
                        a.r[1] = (u32)(s8)r3;
                        a.r[2] = 1u;
                        a.r[3] = 0u;
                        a.f[0] = (f64)rdf32(0x80575b7cu);
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        (void)tc_call(rd32(rd32(r31) + 0x54u), &a);
                    }
                    r3 = 1u;
                    return r3;
                }
            }
            r3 = 0u;
        }
    }
    return r3;
}
