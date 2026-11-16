#include "tc_rt.h"

void fn_801792bc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x16cu);
    if ((s32)r4 > 0) {
        wr32((u32)param_1 + 0x16cu, r4 - 1u);
    } else {
        r3 = (u32)param_1 + 0x100u;
        a.r[0] = r3;
        a.r[1] = (u32)param_1 + 0x10cu;
        a.r[2] = r3;
        (void)tc_call(0x80234380u, &a);
        r3 = (u32)param_1 + 0x10cu;
        a.f[0] = (f64)rdf32((u32)param_1 + 0x13cu);
        a.r[0] = r3;
        a.r[1] = r3;
        (void)tc_call(0x802343c8u, &a);
        r3 = (u32)param_1 + 0x10cu;
        a.r[0] = r3;
        a.r[1] = (u32)param_1 + 0x118u;
        a.r[2] = r3;
        (void)tc_call(0x80234380u, &a);
        a.r[0] = (u32)param_1 + 0x10cu;
        f1 = tc_callf(0x80234440u, &a);
        if (f1 > (f64)rdf32((u32)param_1 + 0x174u)) {
            f1 = (f64)rdf32(0x80574fa4u);
            r0 = 0u;
            if (f1 == (f64)rdf32((u32)param_1 + 0x10cu) && f1 == (f64)rdf32((u32)param_1 + 0x110u) && f1 == (f64)rdf32((u32)param_1 + 0x114u)) {
                r0 = 1u;
            }
            if (r0 == 0u) {
                r3 = (u32)param_1 + 0x10cu;
                a.r[0] = r3;
                a.r[1] = r3;
                (void)tc_call(0x802343e4u, &a);
            }
            r3 = (u32)param_1 + 0x10cu;
            a.f[0] = (f64)rdf32((u32)param_1 + 0x174u);
            a.r[0] = r3;
            a.r[1] = r3;
            (void)tc_call(0x802343c8u, &a);
        }
    }
    f1 = (f64)rdf32((u32)param_1 + 0x104u);
    f0 = (f64)rdf32((u32)param_1 + 0x108u);
    f3 = (f64)rdf32((u32)param_1 + 0x134u);
    wrf32d((u32)param_1 + 8u, (f64)rdf32((u32)param_1 + 0x100u));
    wrf32d((u32)param_1 + 0xcu, f1);
    wrf32d((u32)param_1 + 0x10u, f0);
    wrf32d((u32)param_1 + 0x20u, f3);
    a.r[0] = (u32)param_1;
    f1 = tc_callf(0x80179488u, &a);
    r3 = (u32)rd8((u32)param_1 + 0x1a4u);
    r4 = 0u;
    if (((r3 >> 3u) & 1u) == 0u) {
        if (((r3 >> 4u) & 1u) == 0u) {
            if ((f64)rdf32((u32)param_1 + 0x104u) < f1) {
                r4 = 1u;
            }
        } else {
            f2 = (f64)rdf32((u32)param_1 + 0x104u);
            if (f2 < f1) {
                if (!(f1 < (f64)rdf32(0x80574fe4u))) {
                    r4 = 1u;
                } else {
                    f2 = (f64)(f32)(f1 - f2);
                    f0 = (f64)rdf32(0x80574fe8u);
                    f2 = ppc_fabs(f2);
                    f2 = (f64)(f32)f2;
                    if (!((f2 < f0) || (f2 == f0))) {
                        r4 = 1u;
                    } else {
                        wrf32d((u32)param_1 + 0x104u, f1);
                    }
                }
            }
        }
    } else if ((f64)rdf32((u32)param_1 + 0x104u) < f1) {
        f2 = (f64)rdf32(0x80574fdcu);
        f3 = ppc_fabs((f64)rdf32((u32)param_1 + 0x110u));
        f0 = (f64)rdf32(0x80574fe0u);
        wrf32d((u32)param_1 + 0x104u, f1);
        f3 = (f64)(f32)f3;
        f2 = (f64)(f32)(f3 * f2);
        wrf32d((u32)param_1 + 0x110u, f2);
        if (f2 < f0) {
            r4 = 1u;
        }
    }
    f0 = (f64)rdf32(0x80574fe4u);
    if ((f1 > f0) || (f1 == f0)) {
        r4 = 1u;
    }
    if (r4 != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80177c88u, &a);
    }
    return;
}
