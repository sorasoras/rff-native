#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8017ef7c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    r4 = tc_lastr4();
    f2 = (f64)rdf32(r3 + 4u);
    f1 = (f64)(f32)((f64)rdf32(param_1 + 0xa0u) - f2);
    f1 = (f64)(f32)(f1 * f1);
    if (f1 < (f64)rdf32(0x80575088u)) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(param_1 + 0xa0u);
        wr32(0x817fdfdcu, rd32(param_1 + 0x9cu));
        wr32(0x817fdfe0u, r0);
        wr32(0x817fdfe4u, rd32(param_1 + 0xa4u));
        a.r[0] = 0x817fdfdcu;
        a.r[1] = r3;
        a.r[2] = 0x817fdfdcu;
        (void)tc_call(0x802343a4u, &a);
        a.r[0] = 0x817fdfdcu;
        f1 = tc_callf(0x80234428u, &a);
        r4 = tc_lastr4();
        if (f1 < (f64)rdf32(0x8057506cu)) {
            a.r[0] = param_1;
            a.r[1] = param_1 + 0x9cu;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
            a.r[0] = param_1;
            (void)tc_call(0x8017fafcu, &a);
            return;
        }
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(param_1 + 0xa0u);
        wr32(0x817fdfd0u, rd32(param_1 + 0x9cu));
        wr32(0x817fdfd4u, r0);
        wr32(0x817fdfd8u, rd32(param_1 + 0xa4u));
        a.r[0] = 0x817fdfd0u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfd0u;
        (void)tc_call(0x802343a4u, &a);
        f1 = (f64)rdf32(0x80575048u);
        r0 = 0u;
        if ((f1 == (f64)rdf32(0x817fdfd0u) && f1 == (f64)rdf32(0x817fdfd4u)) && f1 == (f64)rdf32(0x817fdfd8u)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfd0u;
            a.r[1] = 0x817fdfd0u;
            (void)tc_call(0x802343e4u, &a);
        }
        a.f[0] = (f64)rdf32(param_1 + 0xa8u);
        a.r[0] = 0x817fdfd0u;
        a.r[1] = 0x817fdfd0u;
        f1 = tc_callf(0x802343c8u, &a);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(r3 + 4u);
        wr32(0x817fdfb8u, rd32(r3));
        wr32(0x817fdfbcu, r0);
        wr32(0x817fdfc0u, rd32(r3 + 8u));
        a.r[0] = 0x817fdfb8u;
        a.r[1] = 0x817fdfd0u;
        a.r[2] = 0x817fdfb8u;
        f1 = tc_callf(0x80234380u, &a);
        a.r[0] = param_1;
        a.r[1] = 0x817fdfb8u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
    } else {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        r0 = rd32(param_1 + 0xa0u);
        wr32(0x817fdfc4u, rd32(param_1 + 0x9cu));
        wr32(0x817fdfc8u, r0);
        wr32(0x817fdfccu, rd32(param_1 + 0xa4u));
        a.r[0] = 0x817fdfc4u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfc4u;
        (void)tc_call(0x802343a4u, &a);
        f1 = (f64)rdf32(0x80575048u);
        r0 = 0u;
        if ((f1 == (f64)rdf32(0x817fdfc4u) && f1 == (f64)rdf32(0x817fdfc8u)) && f1 == (f64)rdf32(0x817fdfccu)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfc4u;
            a.r[1] = 0x817fdfc4u;
            (void)tc_call(0x802343e4u, &a);
        }
        a.f[0] = (f64)rdf32(param_1 + 0xa8u);
        a.r[0] = 0x817fdfc4u;
        a.r[1] = 0x817fdfc4u;
        (void)tc_call(0x802343c8u, &a);
        f2 = (f64)rdf32(0x8057504cu);
        f1 = (f64)(f32)px_fdiv((f64)(f32)(f2 * (f64)rdf32(param_1 + 0x88u)), (f64)rdf32(0x8057508cu));
        if (f2 < f1) {
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80575050u));
        } else {
            f0 = (f64)rdf32(0x80575054u);
            if ((f0 > f1) || (f0 == f1)) {
                f1 = (f64)(f32)((f64)rdf32(0x80575050u) + f1);
            }
        }
        a.f[0] = f1;
        f1 = tc_callf(0x80262b10u, &a);
        f1 = (f64)(f32)f1;
        f31 = (f64)(f32)((f64)rdf32(0x80575090u) * f1);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
        a.r[0] = 0x817fdfc4u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfc4u;
        f1 = tc_callf(0x80234380u, &a);
        wrf32d(0x817fdfc4u, (f64)(f32)((f64)rdf32(param_1 + 0x9cu) + f31));
        a.r[0] = param_1;
        a.r[1] = 0x817fdfc4u;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        (void)tc_call(rd32(rd32(param_1) + 0x1cu), &a);
        wrf32d(param_1 + 0x88u, (f64)(f32)((f64)rdf32(param_1 + 0x88u) + (f64)rdf32(0x80575058u)));
    }
    return;
}
