#include "tc_rt.h"

u32 fn_8021288c(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32(0x80576964u);
    r31 = (u32)param_1 + 4u;
    r30 = 1u;
    for (;;) {
        if (r30 != (u32)param_2) {
            r3 = rd32(r31 + 0x60u);
            if (r3 != 0u) {
                a.r[0] = r3;
                r3 = tc_call(0x802185b4u, &a);
                if (r3 != 0u) {
                    a.r[0] = r30;
                    r3 = tc_call(0x80074e90u, &a);
                    if (r3 == 0u) {
                        r4 = rd32(r31 + 0x60u);
                        f0 = (f64)rdf32(param_3);
                        wr32(0x817fdfc8u, rd32(r4 + 0x24u));
                        f0 = (f64)(f32)((f64)rdf32(0x817fdfc8u) - f0);
                        f1 = (f64)rdf32(param_3 + 4u);
                        wr32(0x817fdfd0u, rd32(r4 + 0x2cu));
                        f0 = ppc_fabs(f0);
                        f0 = (f64)(f32)f0;
                        r0 = ((((f0 < f31) << 0x1fu) | ((f0 > f31) << 0x1eu) | ((f0 == f31) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1fu) & 1u;
                        if (r0 != 0u) {
                            f0 = (f64)(f32)ppc_fabs((f64)(f32)(f1 - f1));
                            r0 = ((((f0 < f31) << 0x1fu) | ((f0 > f31) << 0x1eu) | ((f0 == f31) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                        if (r0 != 0u) {
                            f0 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(0x817fdfd0u) - (f64)rdf32(param_3 + 8u)));
                            r0 = ((((f0 < f31) << 0x1fu) | ((f0 > f31) << 0x1eu) | ((f0 == f31) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                        if (r0 != 0u) break;
                    } else {
                        a.r[0] = r30;
                        r3 = tc_call(0x800a4500u, &a);
                        f1 = tc_lastf();
                        a.r[0] = r3;
                        a.r[1] = tc_lastr4();
                        a.r[2] = 0u;
                        a.f[0] = f1;
                        r3 = tc_call(rd32(rd32(r3) + 0x28u), &a);
                        wr32(0x817fdfd4u, rd32(r3));
                        f0 = (f64)(f32)((f64)rdf32(0x817fdfd4u) - (f64)rdf32(param_3));
                        f1 = (f64)rdf32(param_3 + 4u);
                        wr32(0x817fdfdcu, rd32(r3 + 8u));
                        f0 = ppc_fabs(f0);
                        f0 = (f64)(f32)f0;
                        r0 = ((((f0 < f31) << 0x1fu) | ((f0 > f31) << 0x1eu) | ((f0 == f31) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1fu) & 1u;
                        if (r0 != 0u) {
                            f0 = (f64)(f32)ppc_fabs((f64)(f32)(f1 - f1));
                            r0 = ((((f0 < f31) << 0x1fu) | ((f0 > f31) << 0x1eu) | ((f0 == f31) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                        if (r0 != 0u) {
                            f0 = (f64)(f32)ppc_fabs((f64)(f32)((f64)rdf32(0x817fdfdcu) - (f64)rdf32(param_3 + 8u)));
                            r0 = ((((f0 < f31) << 0x1fu) | ((f0 > f31) << 0x1eu) | ((f0 == f31) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1fu) & 1u;
                        }
                        if (r0 != 0u) {
                            r3 = 1u;
                            return r3;
                        }
                    }
                }
            }
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
        if ((s32)r30 >= 33) {
            r3 = 0u;
            return r3;
        }
    }
    r3 = 1u;
    return r3;
}
