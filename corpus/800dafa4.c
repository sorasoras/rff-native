#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_800dafa4(f64 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    r31 = 0u;
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    a.r[0] = 0x8046a200u;
    a.r[1] = param_5;
    a.r[2] = rd32(param_2);
    r3 = tc_call(0x800590b4u, &a);
    if (r3 == 0u) {
        r31 = 1u;
    } else {
        r4 = rd32(param_2 + 0x30u);
        wr32(0x817fdfd0u, 0x43300000u);
        f1 = rdf64(0x80573a28u);
        wr32(0x817fdfd4u, r4);
        f0 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfd0u) - f1) * (f64)rdf32(r3 + 0x18u));
        if (param_1 > f0) {
            r31 = 1u;
        }
        f0 = (f64)(f32)px_fdiv(param_1, f0);
        f31 = (f64)rdf32(0x80573a20u);
        if (!(f31 < f0)) {
            f31 = f0;
        }
        r0 = rd32(param_2 + 0x1cu);
        wr32(0x817fdfb8u, rd32(param_2 + 0x18u));
        wr32(0x817fdfbcu, r0);
        wr32(0x817fdfc0u, rd32(param_2 + 0x20u));
        a.r[0] = 0x817fdfb8u;
        a.r[1] = param_2 + 0xcu;
        a.r[2] = 0x817fdfb8u;
        (void)tc_call(0x802343a4u, &a);
        r5 = rd32(0x817fdfbcu);
        r0 = rd32(0x817fdfc0u);
        wr32(0x817fdfc4u, rd32(0x817fdfb8u));
        wr32(0x817fdfc8u, r5);
        wr32(0x817fdfccu, r0);
        a.f[0] = f31;
        a.r[0] = 0x817fdfc4u;
        a.r[1] = 0x817fdfc4u;
        (void)tc_call(0x802343c8u, &a);
        wrf32d(param_3, (f64)rdf32(0x817fdfc4u));
        wrf32d(param_3 + 4u, (f64)rdf32(0x817fdfc8u));
        wrf32d(param_3 + 8u, (f64)rdf32(0x817fdfccu));
        a.r[0] = param_3;
        a.r[1] = param_2 + 0xcu;
        a.r[2] = param_3;
        (void)tc_call(0x80234380u, &a);
        f2 = (f64)rdf32(param_2 + 0x28u);
        f1 = (f64)rdf32(param_2 + 0x24u);
        if (!((f64)rdf32(0x80573a14u) < f2)) {
            f0 = (f64)rdf32(0x80573a1cu);
            if ((f0 > f2) || (f0 == f2)) {
                f2 = (f64)(f32)((f64)rdf32(0x80573a18u) + f2);
            }
        } else {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x80573a18u));
        }
        f3 = (f64)(f32)(f2 - f1);
        if (!(f3 > (f64)rdf32(0x80573a14u))) {
            if (f3 < (f64)rdf32(0x80573a1cu)) {
                f3 = (f64)(f32)(f3 + (f64)rdf32(0x80573a18u));
            }
        } else {
            f3 = (f64)(f32)(f3 - (f64)rdf32(0x80573a18u));
        }
        f1 = (f64)rdf32(param_2 + 0x24u);
        f2 = (f64)rdf32(0x80573a14u);
        if (!(f2 < ppc_fmadds(f31, f3, f1))) {
            f3 = (f64)rdf32(param_2 + 0x28u);
            if (!(f2 < f3)) {
                f0 = (f64)rdf32(0x80573a1cu);
                if ((f0 > f3) || (f0 == f3)) {
                    f3 = (f64)(f32)((f64)rdf32(0x80573a18u) + f3);
                }
            } else {
                f3 = (f64)(f32)(f3 - (f64)rdf32(0x80573a18u));
            }
            f3 = (f64)(f32)(f3 - f1);
            if (!(f3 > (f64)rdf32(0x80573a14u))) {
                if (f3 < (f64)rdf32(0x80573a1cu)) {
                    f3 = (f64)(f32)(f3 + (f64)rdf32(0x80573a18u));
                }
            } else {
                f3 = (f64)(f32)(f3 - (f64)rdf32(0x80573a18u));
            }
            f1 = (f64)rdf32(param_2 + 0x24u);
            f2 = (f64)rdf32(0x80573a1cu);
            f0 = ppc_fmadds(f31, f3, f1);
            if (!((f2 > f0) || (f2 == f0))) {
                f3 = (f64)rdf32(param_2 + 0x28u);
                if (!((f64)rdf32(0x80573a14u) < f3)) {
                    if ((f2 > f3) || (f2 == f3)) {
                        f3 = (f64)(f32)((f64)rdf32(0x80573a18u) + f3);
                    }
                } else {
                    f3 = (f64)(f32)(f3 - (f64)rdf32(0x80573a18u));
                }
                f1 = (f64)(f32)(f3 - f1);
                if (!(f1 > (f64)rdf32(0x80573a14u))) {
                    if (f1 < (f64)rdf32(0x80573a1cu)) {
                        f1 = (f64)(f32)(f1 + (f64)rdf32(0x80573a18u));
                    }
                } else {
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573a18u));
                }
                f2 = ppc_fmadds(f31, f1, (f64)rdf32(param_2 + 0x24u));
            } else {
                f3 = (f64)rdf32(param_2 + 0x28u);
                if (!((f64)rdf32(0x80573a14u) < f3)) {
                    if ((f2 > f3) || (f2 == f3)) {
                        f3 = (f64)(f32)((f64)rdf32(0x80573a18u) + f3);
                    }
                } else {
                    f3 = (f64)(f32)(f3 - (f64)rdf32(0x80573a18u));
                }
                f2 = (f64)(f32)(f3 - f1);
                if (!(f2 > (f64)rdf32(0x80573a14u))) {
                    if (f2 < (f64)rdf32(0x80573a1cu)) {
                        f2 = (f64)(f32)(f2 + (f64)rdf32(0x80573a18u));
                    }
                } else {
                    f2 = (f64)(f32)(f2 - (f64)rdf32(0x80573a18u));
                }
                f2 = (f64)(f32)((f64)rdf32(0x80573a18u) + ppc_fmadds(f31, f2, (f64)rdf32(param_2 + 0x24u)));
            }
        } else {
            f3 = (f64)rdf32(param_2 + 0x28u);
            if (!(f2 < f3)) {
                f0 = (f64)rdf32(0x80573a1cu);
                if ((f0 > f3) || (f0 == f3)) {
                    f3 = (f64)(f32)((f64)rdf32(0x80573a18u) + f3);
                }
            } else {
                f3 = (f64)(f32)(f3 - (f64)rdf32(0x80573a18u));
            }
            f2 = (f64)(f32)(f3 - f1);
            if (!(f2 > (f64)rdf32(0x80573a14u))) {
                if (f2 < (f64)rdf32(0x80573a1cu)) {
                    f2 = (f64)(f32)(f2 + (f64)rdf32(0x80573a18u));
                }
            } else {
                f2 = (f64)(f32)(f2 - (f64)rdf32(0x80573a18u));
            }
            f2 = (f64)(f32)(ppc_fmadds(f31, f2, (f64)rdf32(param_2 + 0x24u)) - (f64)rdf32(0x80573a18u));
        }
        f1 = (f64)rdf32(param_4);
        if (!((f64)rdf32(0x80573a14u) < f2)) {
            f0 = (f64)rdf32(0x80573a1cu);
            if ((f0 > f2) || (f0 == f2)) {
                f2 = (f64)(f32)((f64)rdf32(0x80573a18u) + f2);
            }
        } else {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x80573a18u));
        }
        f2 = (f64)(f32)(f2 - f1);
        if (!(f2 > (f64)rdf32(0x80573a14u))) {
            if (f2 < (f64)rdf32(0x80573a1cu)) {
                f2 = (f64)(f32)(f2 + (f64)rdf32(0x80573a18u));
            }
        } else {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x80573a18u));
        }
        f2 = (f64)(f32)((f64)rdf32(param_4) + f2);
        if (!((f64)rdf32(0x80573a14u) < f2)) {
            f0 = (f64)rdf32(0x80573a1cu);
            if ((f0 > f2) || (f0 == f2)) {
                f2 = (f64)(f32)((f64)rdf32(0x80573a18u) + f2);
            }
        } else {
            f2 = (f64)(f32)(f2 - (f64)rdf32(0x80573a18u));
        }
        wrf32d(param_4, f2);
    }
    return r31;
}
