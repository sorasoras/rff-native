#include "tc_rt.h"

u32 fn_80166648(u32 param_1, s32 param_2, u32 param_r5)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r0 = rd32(param_1 + 0x100u);
    if (r0 == 7u) {
        r30 = rd32((u32)param_2 + 0x2cu);
        if (r30 != 0u) {
            a.r[0] = param_1;
            a.r[1] = 0x27u;
            r3 = tc_call(0x800b1aa4u, &a);
            if (r3 == 0u) {
                a.r[0] = param_1;
                f1 = tc_callf(0x800b52b4u, &a);
                a.r[0] = param_1;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
                f1 = tc_lastf();
                r31 = r3;
                a.r[0] = r30;
                a.r[1] = tc_lastr4();
                a.r[2] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                r3 = tc_call(rd32(rd32(r30) + 0x28u), &a);
                r0 = rd32(r3 + 4u);
                wr32(0x817fdfd8u, rd32(r3));
                wr32(0x817fdfdcu, r0);
                wr32(0x817fdfe0u, rd32(r3 + 8u));
                a.r[0] = 0x817fdfd8u;
                a.r[1] = r31;
                a.r[2] = 0x817fdfd8u;
                (void)tc_call(0x802343a4u, &a);
                f0 = (f64)rdf32(0x80574ba8u);
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
                if ((f64)rdf32(0x80574bacu) < f1) {
                    a.f[0] = (f64)rdf32(0x817fdfe4u);
                    a.f[1] = (f64)rdf32(0x817fdfecu);
                    f1 = tc_callf(0x80262c68u, &a);
                    r4 = tc_lastr4();
                    f1 = (f64)(f32)f1;
                    f1 = (f64)(f32)(f1 - (f64)rdf32(0x80574bb0u));
                } else {
                    a.f[0] = (f64)rdf32(0x817fdfe4u);
                    a.f[1] = (f64)rdf32(0x817fdfecu);
                    f1 = tc_callf(0x80262c68u, &a);
                    f1 = (f64)(f32)f1;
                    f0 = (f64)rdf32(0x80574bb4u);
                    if ((f0 > f1) || (f0 == f1)) {
                        a.f[0] = (f64)rdf32(0x817fdfe4u);
                        a.f[1] = (f64)rdf32(0x817fdfecu);
                        f1 = tc_callf(0x80262c68u, &a);
                        r4 = tc_lastr4();
                        f1 = (f64)(f32)f1;
                        f1 = (f64)(f32)((f64)rdf32(0x80574bb0u) + f1);
                    } else {
                        a.f[0] = (f64)rdf32(0x817fdfe4u);
                        a.f[1] = (f64)rdf32(0x817fdfecu);
                        f1 = tc_callf(0x80262c68u, &a);
                        r4 = tc_lastr4();
                        f1 = (f64)(f32)f1;
                    }
                }
                a.r[0] = param_1;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                (void)tc_call(rd32(rd32(param_1) + 0x24u), &a);
                a.r[0] = param_1;
                a.r[1] = 0x27u;
                (void)tc_call(0x800b31a0u, &a);
            }
        }
        r3 = 2u;
    } else {
        if (r0 == 8u) {
            r3 = 2u;
        } else {
            a.r[0] = param_1;
            a.r[1] = (u32)param_2;
            a.r[2] = param_r5;
            r3 = tc_call(0x800b4010u, &a);
        }
    }
    return r3;
}
