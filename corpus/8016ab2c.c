#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_8016ab2c(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdf90u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wr32(0x817fdfdcu, 0u);
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x19cu), &a);
    wr32(0x817fdf98u, r3);
    r0 = rd32(param_2 + 0xcf8u);
    wr32(0x817fdfccu, rd32(param_2 + 0xcf4u));
    wr32(0x817fdfd0u, r0);
    wr32(0x817fdfd4u, rd32(param_2 + 0xcfcu));
    a.r[0] = 0x817fdfccu;
    a.r[1] = param_2 + 0xd88u;
    a.r[2] = 0x817fdfccu;
    (void)tc_call(0x802343a4u, &a);
    a.r[0] = 0x817fdfccu;
    f1 = tc_callf(0x80234440u, &a);
    if (f1 > (f64)rdf32(0x80574c98u)) {
        f1 = (f64)rdf32(0x80574c80u);
        r0 = 0u;
        if ((f1 == (f64)rdf32(0x817fdfccu) && f1 == (f64)rdf32(0x817fdfd0u)) && f1 == (f64)rdf32(0x817fdfd4u)) {
            r0 = 1u;
        }
        if (r0 == 0u) {
            a.r[0] = 0x817fdfccu;
            a.r[1] = 0x817fdfccu;
            (void)tc_call(0x802343e4u, &a);
        }
    }
    a.r[0] = param_2;
    f1 = tc_callf(0x800b516cu, &a);
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x1c4u), &a);
    a.f[0] = (f64)rdf32(0x80574c70u);
    a.r[0] = param_2;
    a.r[1] = r3;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x800b5248u, &a);
    f31 = (f64)rdf32(0x80574ca4u);
    a.r[0] = 0x817fdf98u;
    f1 = tc_callf(0x80149b24u, &a);
    f30 = (f64)(f32)(f1 * (f64)rdf32(param_2 + 0x1674u));
    a.r[0] = param_2;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x138u), &a);
    if (r3 != 0u) {
        f31 = (f64)(f32)(f31 * (f64)rdf32(0x80574ca0u));
    }
    f31 = (f64)(f32)px_fdiv(f31, f30);
    r5 = rd32(0x817fdfd0u);
    r0 = rd32(0x817fdfd4u);
    wr32(0x817fdfb4u, rd32(0x817fdfccu));
    wr32(0x817fdfb8u, r5);
    wr32(0x817fdfbcu, r0);
    a.f[0] = f31;
    a.r[0] = 0x817fdfb4u;
    a.r[1] = 0x817fdfb4u;
    (void)tc_call(0x802343c8u, &a);
    r5 = rd32(0x817fdfb8u);
    r0 = rd32(0x817fdfbcu);
    wr32(0x817fdfc0u, rd32(0x817fdfb4u));
    wr32(0x817fdfc4u, r5);
    f3 = (f64)rdf32(0x817fdfc0u);
    wr32(0x817fdfc8u, r0);
    f2 = (f64)rdf32(0x817fdfc4u);
    f0 = (f64)rdf32(0x817fdfc8u);
    wrf32d(param_2 + 0xd18u, f3);
    wrf32d(param_2 + 0xd1cu, f2);
    wrf32d(param_2 + 0xd20u, f0);
    r5 = rd32(0x817fdfd0u);
    r0 = rd32(0x817fdfd4u);
    wr32(0x817fdf9cu, rd32(0x817fdfccu));
    wr32(0x817fdfa0u, r5);
    wr32(0x817fdfa4u, r0);
    a.f[0] = f31;
    a.r[0] = 0x817fdf9cu;
    a.r[1] = 0x817fdf9cu;
    (void)tc_call(0x802343c8u, &a);
    r4 = rd32(0x817fdfa0u);
    r7 = rd32(0x817fdfa4u);
    wr32(0x817fdfa8u, rd32(0x817fdf9cu));
    r3 = rd32(param_2 + 0xe88u);
    r6 = rd32(param_2 + 0xf78u);
    wr32(0x817fdfacu, r4);
    r4 = r3 | (r3 ^ 0x200u);
    r0 = rd32(param_2 + 0x148u);
    wr32(0x817fdfb0u, r7);
    f2 = (f64)rdf32(0x817fdfa8u);
    f1 = (f64)rdf32(0x817fdfacu);
    f0 = (f64)rdf32(0x817fdfb0u);
    r0 = r0 | 0x40000000u;
    wr32(param_2 + 0xf78u, r6 | (r6 ^ 0x100u));
    wrf32d(param_2 + 0xfa4u, f2);
    wrf32d(param_2 + 0xfa8u, f1);
    wrf32d(param_2 + 0xfacu, f0);
    wr32(param_2 + 0xe88u, r4 | (r4 ^ 0x800u));
    wrf32d(param_2 + 0xd50u, f31);
    wr32(param_2 + 0x148u, r0);
    return;
}
