#include "tc_rt.h"

u32 fn_801c2418(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    r7 = rd32(param_3);
    wr32(0x817fdfecu, 0u);
    r6 = rd32(param_3 + 4u);
    wr32(0x817fdfe8u, 0u);
    r0 = rd32(param_3 + 8u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfc8u, r7);
    wr32(0x817fdfccu, r6);
    wr32(0x817fdfd0u, r0);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = (u32)param_1 + 8u;
    a.r[2] = 0x817fdfc8u;
    (void)tc_call(0x802343a4u, &a);
    f0 = (f64)rdf32((u32)param_1 + 0x20u);
    a.r[0] = 0x817fdfc8u;
    f1 = tc_callf(0x80234428u, &a);
    if (f1 > (f64)(f32)(f0 * f0)) {
        r3 = 0u;
    } else {
        f1 = (f64)rdf32(0x80575cfcu);
        r0 = 0u;
        f0 = (f64)rdf32(0x817fdfc8u);
        wrf32d(0x817fdfccu, f1);
        if ((f1 == f0 && f1 == f1) && f1 == (f64)rdf32(0x817fdfd0u)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfc8u;
            a.r[1] = 0x817fdfc8u;
            (void)tc_call(0x802343e4u, &a);
        }
        f1 = (f64)rdf32(param_3 + 4u);
        f0 = (f64)rdf32(param_3 + 8u);
        wrf32d(param_2, (f64)rdf32(param_3));
        wrf32d(param_2 + 4u, f1);
        wrf32d(param_2 + 8u, f0);
        a.f[0] = (f64)rdf32(0x817fdfc8u);
        a.f[1] = (f64)rdf32(0x817fdfd0u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)((f64)(f32)f1 - (f64)rdf32((u32)param_1 + 0xe4u));
        if ((f64)rdf32(0x80575d0cu) < f1) {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80575d10u));
        } else {
            f0 = (f64)rdf32(0x80575d14u);
            if ((f0 > f1) || (f0 == f1)) {
                f1 = (f64)(f32)((f64)rdf32(0x80575d10u) + f1);
            }
        }
        if ((f64)(f32)ppc_fabs(f1) < (f64)(f32)((f64)rdf32(0x80575d18u) * (f64)rdf32((u32)param_1 + 0xe8u))) {
            r3 = 1u;
        } else {
            r3 = 0u;
        }
    }
    return r3;
}
