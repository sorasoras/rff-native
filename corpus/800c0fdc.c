#include "tc_rt.h"

u32 fn_800c0fdc(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r7 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = 0x17u;
    wr32(0x817fdff8u, 0u);
    r30 = 0u;
    wr32(0x817fdff4u, 0u);
    r0 = rd32(param_1 + 0x15e4u);
    wr32(param_1 + 0xa60u, 1u);
    if (r0 == 0u) {
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = 0.0;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r7 = rd32(r3);
        f2 = (f64)rdf32(0x80572ebcu);
        wr32(0x817fdfdcu, rd32(r3 + 4u));
        f1 = (f64)rdf32(0x80572eb4u);
        wr32(0x817fdfd8u, r7);
        f0 = (f64)rdf32(0x817fdfdcu);
        wr32(0x817fdfe0u, rd32(r3 + 8u));
        f0 = ppc_fmadds(f2, (f64)rdf32(param_1 + 0xb4u), f0);
        wrf32d(0x817fdfdcu, f0);
        a.f[0] = f1;
        a.r[0] = 0x6fu;
        a.r[1] = 0x817fdfd8u;
        a.r[2] = 0x804b15c0u;
        a.r[3] = 0x804890c8u;
        r3 = tc_call(0x800d783cu, &a);
        wr32(param_1 + 0x15e4u, r3);
        if (r3 == 0u) {
            wr32(param_1 + 0xccu, 0u);
            r30 = 1u;
            wrf32d(param_1 + 0x1cu, (f64)rdf32(0x804890e0u));
            wrf32d(param_1 + 0x20u, (f64)rdf32(0x804890e4u));
            wrf32d(param_1 + 0x24u, (f64)rdf32(0x804890e8u));
        }
    } else {
        r4 = rd32(param_1 + 0x20u);
        wr32(0x817fdfe4u, rd32(param_1 + 0x1cu));
        r0 = rd32(param_1 + 0x24u);
        f4 = (f64)rdf32(0x80572eb0u);
        f1 = (f64)rdf32(0x80572eb4u);
        f0 = (f64)(f32)((f64)rdf32(0x817fdfe4u) + f4);
        wr32(0x817fdfe8u, r4);
        wr32(0x817fdfecu, r0);
        if (!(f1 < f0)) {
            f1 = f0;
        }
        f3 = (f64)rdf32(0x80572eb4u);
        f0 = (f64)(f32)((f64)rdf32(0x817fdfecu) + f4);
        wrf32d(0x817fdfe4u, f1);
        if (!(f3 < f0)) {
            f3 = f0;
        }
        r0 = rd32(param_1 + 0xccu);
        f2 = (f64)rdf32(0x817fdfe4u);
        f1 = (f64)rdf32(0x817fdfe8u);
        wrf32d(0x817fdfecu, f3);
        wrf32d(param_1 + 0x1cu, f2);
        wrf32d(param_1 + 0x20u, f1);
        wrf32d(param_1 + 0x24u, (f64)(f32)f3);
        if (r0 == 0u) {
            f1 = (f64)rdf32(0x80572eb4u);
        } else {
            f1 = (f64)rdf32(param_1 + 0xd0u);
        }
        f2 = (f64)rdf32(0x80572eb4u);
        if (!(f2 < ppc_fmadds((f64)rdf32(0x80572eb8u), f4, f1))) {
            if (r0 != 0u) {
                f2 = (f64)rdf32(param_1 + 0xd0u);
            }
            f2 = ppc_fmadds((f64)rdf32(0x80572eb8u), f4, f2);
        }
        f1 = (f64)rdf32(0x817fdfe4u);
        f0 = (f64)rdf32(0x80572eb4u);
        wrf32d(param_1 + 0xd0u, f2);
        wr32(param_1 + 0xccu, 1u);
        if ((f1 > f0) || (f1 == f0)) {
            r30 = 1u;
            wr32(param_1 + 0x15e4u, 0u);
            wr32(param_1 + 0xccu, 0u);
        }
    }
    if (r30 != 0u) {
        r31 = 0u;
        a.f[0] = (f64)rdf32(0x80572ea8u);
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.r[2] = 0u;
        (void)tc_call(0x800bf1d4u, &a);
    }
    return r31;
}
