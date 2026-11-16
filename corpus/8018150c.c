#include "tc_rt.h"

s32 fn_8018150c(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    f2 = (f64)rdf32(rd32(0x805711ccu) + 0x58u);
    if (!((f64)(f32)ppc_fabs(f2) > (f64)rdf32(0x805750e8u))) {
        f2 = (f64)rdf32(0x805750b8u);
    }
    wrf32d(param_2, f2);
    f2 = (f64)rdf32(rd32(0x805711ccu) + 0x5cu);
    if (!((f64)(f32)ppc_fabs(f2) > (f64)rdf32(0x805750e8u))) {
        f2 = (f64)rdf32(0x805750b8u);
    }
    f1 = (f64)rdf32(0x805750b8u);
    r31 = 0u;
    f0 = (f64)rdf32(param_2);
    wrf32d(param_2 + 8u, f2);
    wrf32d(param_2 + 4u, f1);
    if (f1 != f0) {
        r31 = 0xffffffffu;
    }
    if ((f64)rdf32(0x805750b8u) != (f64)rdf32(param_2 + 8u)) {
        r31 = 0xffffffffu;
    }
    f1 = (f64)rdf32(0x805750b8u);
    if (f1 == (f64)rdf32(param_2)) {
        f0 = (f64)rdf32(param_2 + 8u);
        if ((f0 < f1) || (f0 == f1)) {
            r31 = 0u;
        }
    }
    if (r31 != 0xffffffffu) {
        wr32((u32)param_1 + 0x180u, 0u);
    } else {
        wr32((u32)param_1 + 0x180u, 1u);
    }
    if ((u32)param_3 != 0u) {
        r5 = rd32(0x803541bcu);
        if (r5 != 0u) {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 != 1u) {
                if (r0 != 2u) {
                    r4 = 0u;
                } else {
                    r4 = rd32(0x80354178u);
                }
            } else {
                r4 = rd32(0x80354144u);
            }
        } else {
            r4 = 0u;
        }
        if (r5 != 0u) {
            r0 = rd32(rd32(0x805711ccu) + 0xfcu);
            if (r0 != 1u) {
                if (r0 != 2u) {
                    r0 = 0u;
                } else {
                    r0 = r4 & rd32(rd32(0x803541a8u));
                }
            } else {
                r0 = r4 & rd32(rd32(0x80354198u));
            }
        } else {
            r0 = 0u;
        }
        if (r0 != 0u) {
            r31 = 1u;
        }
        a.r[0] = 0xffffffffu;
        r3 = tc_call(0x800a8624u, &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    return (s32)r31;
}
