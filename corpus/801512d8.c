#include "tc_rt.h"

void fn_801512d8(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfd0u, 0x817fe000u);
    f1 = (f64)rdf32(0x80574808u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.f[0] = f1;
    a.r[0] = param_2;
    r3 = tc_call(0x800b3304u, &a);
    if (r3 != 0u) {
        r0 = rd32(param_2 + 0x1698u) + 1u;
        wr32(param_2 + 0x1698u, r0);
        if ((s32)r0 > 60) {
            a.r[0] = param_2;
            r3 = tc_call(0x800b3344u, &a);
            r0 = rd32(r3 + 4u);
            wr32(0x817fdfd8u, rd32(r3));
            wr32(0x817fdfdcu, r0);
            wr32(0x817fdfe0u, rd32(r3 + 8u));
            a.r[0] = 0x817fdfd8u;
            a.r[1] = param_2 + 0xcf4u;
            a.r[2] = 0x817fdfd8u;
            (void)tc_call(0x802343a4u, &a);
            f0 = (f64)rdf32(0x8057480cu);
            wrf32d(0x817fdfecu, f0);
            wrf32d(0x817fdfe8u, f0);
            wrf32d(0x817fdfe4u, f0);
            a.r[0] = 0x817fdfd8u;
            a.r[1] = 0x817fdfe4u;
            (void)tc_call(0x802343e4u, &a);
            a.f[0] = (f64)rdf32(0x817fdfe4u);
            a.f[1] = (f64)rdf32(0x817fdfecu);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            if ((f64)rdf32(0x80574810u) < f1) {
                a.f[0] = (f64)rdf32(0x817fdfe4u);
                a.f[1] = (f64)rdf32(0x817fdfecu);
                f1 = tc_callf(0x80262c68u, &a);
                r4 = tc_lastr4();
                f1 = (f64)(f32)f1;
                f1 = (f64)(f32)(f1 - (f64)rdf32(0x80574814u));
            } else {
                a.f[0] = (f64)rdf32(0x817fdfe4u);
                a.f[1] = (f64)rdf32(0x817fdfecu);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f0 = (f64)rdf32(0x80574818u);
                if ((f0 > f1) || (f0 == f1)) {
                    a.f[0] = (f64)rdf32(0x817fdfe4u);
                    a.f[1] = (f64)rdf32(0x817fdfecu);
                    f1 = tc_callf(0x80262c68u, &a);
                    r4 = tc_lastr4();
                    f1 = (f64)(f32)f1;
                    f1 = (f64)(f32)((f64)rdf32(0x80574814u) + f1);
                } else {
                    a.f[0] = (f64)rdf32(0x817fdfe4u);
                    a.f[1] = (f64)rdf32(0x817fdfecu);
                    f1 = tc_callf(0x80262c68u, &a);
                    r4 = tc_lastr4();
                    f1 = (f64)(f32)f1;
                }
            }
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(param_2) + 0x24u), &a);
            r3 = rd32(param_2 + 0xe88u);
            wr32(param_2 + 0xe88u, r3 | (r3 ^ 0x80000000u));
        }
    }
    return;
}
