#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800db874(u32 param_1, u32 param_2, u32 param_3, u32 param_4, f64 param_f1)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r0 = rd32(param_1 + 0x1cu);
    wr32(0x817fdfc0u, rd32(param_1 + 0x18u));
    wr32(0x817fdfc4u, r0);
    wr32(0x817fdfc8u, rd32(param_1 + 0x20u));
    a.r[0] = 0x817fdfc0u;
    a.r[1] = param_4;
    a.r[2] = 0x817fdfc0u;
    (void)tc_call(0x802343a4u, &a);
    wrf32d(0x817fdfc4u, (f64)rdf32(0x80573a10u));
    a.r[0] = 0x817fdfc0u;
    f1 = tc_callf(0x80234440u, &a);
    if ((f64)rdf32(0x80573a30u) > f1) {
        f1 = (f64)rdf32(param_4 + 4u);
        f0 = (f64)rdf32(param_4 + 8u);
        wrf32d(param_2, (f64)rdf32(param_4));
        wrf32d(param_2 + 4u, f1);
        wrf32d(param_2 + 8u, f0);
    } else {
        if ((f64)rdf32(0x80573a10u) != f1) {
            f1 = (f64)(f32)px_fdiv((f64)rdf32(0x80573a20u), f1);
            a.f[0] = f1;
            a.r[0] = 0x817fdfc0u;
            a.r[1] = 0x817fdfc0u;
            (void)tc_call(0x802343c8u, &a);
        }
        f1 = (f64)rdf32(param_1 + 0x2cu);
        r5 = rd32(0x817fdfc4u);
        r0 = rd32(0x817fdfc8u);
        wr32(0x817fdfa8u, rd32(0x817fdfc0u));
        wr32(0x817fdfacu, r5);
        wr32(0x817fdfb0u, r0);
        a.f[0] = f1;
        a.r[0] = 0x817fdfa8u;
        a.r[1] = 0x817fdfa8u;
        (void)tc_call(0x802343c8u, &a);
        r6 = rd32(param_4 + 4u);
        r0 = rd32(param_4 + 8u);
        wr32(0x817fdfb4u, rd32(param_4));
        wr32(0x817fdfb8u, r6);
        wr32(0x817fdfbcu, r0);
        a.r[0] = 0x817fdfb4u;
        a.r[1] = 0x817fdfa8u;
        a.r[2] = 0x817fdfb4u;
        (void)tc_call(0x80234380u, &a);
        wrf32d(param_2, (f64)rdf32(0x817fdfb4u));
        wrf32d(param_2 + 4u, (f64)rdf32(0x817fdfb8u));
        wrf32d(param_2 + 8u, (f64)rdf32(0x817fdfbcu));
    }
    f2 = (f64)(f32)((f64)rdf32(param_1 + 0x28u) - param_f1);
    if ((f64)rdf32(0x80573a14u) < f2) {
        f2 = (f64)(f32)(f2 - (f64)rdf32(0x80573a18u));
    } else {
        f0 = (f64)rdf32(0x80573a1cu);
        if ((f0 > f2) || (f0 == f2)) {
            f2 = (f64)(f32)((f64)rdf32(0x80573a18u) + f2);
        }
    }
    f0 = (f64)rdf32(0x80573a34u);
    f1 = (f64)(f32)ppc_fabs(f2);
    if ((f1 < f0) || (f1 == f0)) {
        wrf32d(param_3, (f64)(f32)(f2 + param_f1));
    } else {
        if (f2 > f0) {
            f0 = (f64)(f32)(f0 + param_f1);
            wrf32d(param_3, f0);
        } else {
            f0 = (f64)rdf32(0x80573a38u);
            if (f2 < f0) {
                f0 = (f64)(f32)(f0 + param_f1);
                wrf32d(param_3, f0);
            }
        }
        f1 = (f64)rdf32(param_3);
        if ((f64)rdf32(0x80573a14u) < f1) {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80573a18u));
        } else {
            f0 = (f64)rdf32(0x80573a1cu);
            if ((f0 > f1) || (f0 == f1)) {
                f1 = (f64)(f32)((f64)rdf32(0x80573a18u) + f1);
            }
        }
        wrf32d(param_3, f1);
    }
    return;
}
