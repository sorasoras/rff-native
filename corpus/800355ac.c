#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

u32 fn_800355ac(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f6 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x48u) != 0u) {
        if ((param_2 & 1u) == 0u) {
            if (((u32)rd16((u32)param_1 + 0x30u) & 2u) == 0u) {
                r30 = 0u;
                while (r30 < rd32((u32)param_1 + 0x34u)) {
                    r3 = rd32((u32)param_1 + 0x38u) + (rd32((u32)param_1 + 0x3cu) * r30);
                    if (rd32(r3 + 0xc0u) != 0u) {
                        a.f[0] = (f64)rdf32((u32)param_1 + 0x54u);
                        a.r[0] = r3;
                        (void)tc_call(0x80035258u, &a);
                    }
                    r30 = r30 + 1u;
                }
            } else {
                f2 = (f64)rdf32((u32)param_1 + 0x5cu);
                f30 = (f64)rdf32(0x80571e50u);
                f4 = (f64)rdf32((u32)param_1 + 0x60u);
                f6 = (f64)rdf32((u32)param_1 + 0x58u);
                if (f2 > f30) {
                    if ((f64)(f32)ppc_fabs(f6) < (f64)rdf32(0x80571ea0u)) {
                        f6 = f30;
                    }
                    f3 = (f64)rdf32(0x80571e4cu);
                    f1 = (f64)rdf32(0x80571e50u);
                    f0 = (f64)(f32)px_fdiv(f3, f4);
                    f31 = (f64)(f32)(f6 * f0);
                    a.f[0] = f1;
                    a.f[1] = f1;
                    a.f[2] = f3;
                    a.f[3] = (f64)rdf32(0x80571e48u);
                    a.f[4] = (f64)(f32)(f2 * f0);
                    f1 = tc_callf(0x8004571cu, &a);
                    f30 = (f64)rdf32(0x80571e4cu);
                    f0 = (f64)(f32)(f30 - f1);
                    if (f0 > f31) {
                        f30 = (f64)(f32)px_fdiv(f31, f0);
                    }
                }
                if (f30 > (f64)rdf32(0x80571e50u)) {
                    r30 = 0u;
                    while (r30 < rd32((u32)param_1 + 0x34u)) {
                        r3 = rd32((u32)param_1 + 0x38u) + (rd32((u32)param_1 + 0x3cu) * r30);
                        if (rd32(r3 + 0xc0u) != 0u) {
                            a.f[0] = (f64)rdf32((u32)param_1 + 0x54u);
                            a.f[1] = f30;
                            a.r[0] = r3;
                            (void)tc_call(0x80035368u, &a);
                        }
                        r30 = r30 + 1u;
                    }
                    f0 = (f64)rdf32(0x80571e4cu);
                    if ((f30 > f0) || (f30 == f0)) {
                        wr16((u32)param_1 + 0x30u, (u16)((u32)rd16((u32)param_1 + 0x30u) & 0xfffffffdu));
                    }
                }
            }
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80035500u, &a);
        } else {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x80035500u, &a);
        }
    } else {
        r3 = 1u;
    }
    return r3;
}
