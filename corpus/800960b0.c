#include "tc_rt.h"

u32 fn_800960b0(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    f31 = (f64)rdf32(0x80572a38u);
    wr32(0x817fdfdcu, 0u);
    r31 = (u32)param_1;
    wr32(0x817fdfd8u, 0u);
    r30 = 0u;
    wr32(0x817fdfd4u, 0u);
    for (;;) {
        r0 = rd32(r31 + 0x10u);
        if (r0 != 0xffffffffu) {
            if (r0 != 0u) {
                if (r0 == 1u) {
                    a.r[0] = param_2;
                    a.r[1] = r4;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
                    r4 = tc_lastr4();
                    f2 = 0.0;
                    f1 = (f64)rdf32(r3);
                    f0 = (f64)rdf32(r31 + 0x14u);
                    if ((f0 < f1) || (f0 == f1)) {
                        a.r[0] = param_2;
                        a.r[1] = r4;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
                        r4 = tc_lastr4();
                        f1 = (f64)rdf32(r31 + 0x14u);
                        f2 = (f64)rdf32(r3);
                        f0 = (f64)(f32)(f1 + (f64)rdf32(r31 + 0x20u));
                        if ((f0 > f2) || (f0 == f2)) {
                            a.r[0] = param_2;
                            a.r[1] = r4;
                            a.f[0] = f1;
                            a.f[1] = f2;
                            r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
                            r4 = tc_lastr4();
                            f2 = 0.0;
                            f1 = (f64)rdf32(r3 + 8u);
                            f0 = (f64)rdf32(r31 + 0x18u);
                            if ((f0 < f1) || (f0 == f1)) {
                                a.r[0] = param_2;
                                a.r[1] = r4;
                                a.f[0] = f1;
                                a.f[1] = 0.0;
                                r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
                                r4 = tc_lastr4();
                                f1 = (f64)rdf32(r31 + 0x18u);
                                f2 = (f64)rdf32(r3 + 8u);
                                f0 = (f64)(f32)(f1 + (f64)rdf32(r31 + 0x1cu));
                                if ((f0 > f2) || (f0 == f2)) break;
                            }
                        }
                    }
                }
            } else {
                a.r[0] = param_2;
                a.r[1] = r4;
                a.f[0] = f1;
                a.f[1] = f2;
                r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
                f1 = (f64)rdf32(r3 + 8u);
                f30 = (f64)(f32)((f64)rdf32(r31 + 0x18u) - f1);
                a.r[0] = param_2;
                a.r[1] = tc_lastr4();
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_2) + 0x28u), &a);
                f0 = (f64)(f32)((f64)rdf32(r31 + 0x14u) - (f64)rdf32(r3));
                wrf32d(0x817fdfbcu, f31);
                wrf32d(0x817fdfc0u, f30);
                wrf32d(0x817fdfb8u, f0);
                a.r[0] = 0x817fdfb8u;
                f1 = tc_callf(0x80234428u, &a);
                r4 = tc_lastr4();
                f2 = 0.0;
                f0 = (f64)rdf32(r31 + 0x1cu);
                f0 = (f64)(f32)(f0 * f0);
                if ((f1 < f0) || (f1 == f0)) {
                    r3 = 1u;
                    return r3;
                }
            }
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x14u;
        if (r30 >= 3u) {
            r3 = 0u;
            return r3;
        }
    }
    r3 = 1u;
    return r3;
}
