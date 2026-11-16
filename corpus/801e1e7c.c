#include "tc_rt.h"

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_801e1e7c(u32 param_1)
{
    u32 r3 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    f1 = (f64)rdf32(0x80576208u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    r3 = rd32(param_1);
    a.r[0] = r3;
    a.r[1] = 2u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    (void)tc_call(rd32(rd32(r3) + 0x54u), &a);
    wr32(rd32(param_1) + 0xd58u, 0u);
    a.r[0] = 0x2399u;
    a.r[1] = 0u;
    (void)tc_call(0x801dc4b4u, &a);
    a.r[0] = param_1;
    a.r[1] = 2u;
    f1 = tc_callf(0x801ddb00u, &a);
    f31 = (f64)(f32)((f64)rdf32(0x805762e0u) * f1);
    a.r[0] = param_1;
    r3 = tc_call(0x801ddae8u, &a);
    a.f[0] = (f64)rdf32(0x805762e4u);
    a.f[1] = f31;
    a.r[0] = param_1;
    a.r[1] = 0x5du;
    a.r[2] = r3;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x801dda74u, &a);
    a.f[0] = (f64)rdf32(0x805762e4u);
    a.f[1] = f31;
    a.r[0] = param_1;
    a.r[1] = 0x5du;
    a.r[2] = rd32(param_1) + 0xd3cu;
    a.r[3] = 0x804890c8u;
    (void)tc_call(0x801dda74u, &a);
    r3 = tc_call(0x8003c9c8u, &a);
    r3 = r3 ^ 0x80000000u;
    wr32(0x817fdfccu, r3);
    f1 = rdf64(0x80576210u);
    wr32(0x817fdfc8u, 0x43300000u);
    f1 = (f64)(f32)px_fdiv(f31, (f64)(f32)(rdf64(0x817fdfc8u) - f1));
    a.f[0] = f1;
    a.r[0] = param_1;
    (void)tc_call(0x801dd990u, &a);
    a.r[0] = param_1;
    r3 = tc_call(0x801ddaf4u, &a);
    a.r[0] = r3;
    (void)tc_call(0x801dc4f0u, &a);
    f0 = (f64)rdf32(0x805761f0u);
    wrf32d(0x817fdfc0u, f0);
    wrf32d(0x817fdfbcu, f0);
    wrf32d(0x817fdfb8u, f0);
    a.r[0] = param_1;
    r3 = tc_call(0x801ddaf4u, &a);
    f0 = (f64)rdf32(0x805762dcu);
    wrf32d(0x817fdfb8u, (f64)rdf32(r3));
    f1 = (f64)rdf32(0x80576280u);
    f3 = (f64)rdf32(r3 + 4u);
    f2 = (f64)rdf32(0x80576220u);
    wrf32d(0x817fdfbcu, f3);
    f0 = (f64)(f32)(f3 + f0);
    wrf32d(0x817fdfc0u, (f64)rdf32(r3 + 8u));
    wrf32d(0x817fdfbcu, f0);
    a.f[0] = f1;
    a.f[1] = f2;
    a.r[0] = param_1;
    a.r[1] = 0xc8u;
    a.r[2] = 0x817fdfb8u;
    (void)tc_call(0x801dda7cu, &a);
    a.r[0] = 4u;
    f1 = tc_callf(0x801dc57cu, &a);
    f30 = f1;
    a.r[0] = rd32(param_1);
    r3 = tc_call(0x801e00fcu, &a);
    r30 = r3;
    if (r3 != 0u) {
        wr32(param_1 + 0x28u, r3);
        r3 = rd32(r3 + 0xfcu);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(r30 + 0xfcu);
                (void)tc_call(0x80157f30u, &a);
            }
        }
        wr32(r30 + 0xfcu, 0u);
        f0 = (f64)rdf32(0x80576200u);
        wr32(r30 + 0x100u, 0xffffffffu);
        f1 = (f64)rdf32(0x8057621cu);
        wrf32d(r30 + 0x104u, f0);
        f0 = (f64)rdf32(0x80576204u);
        wr32(r30 + 0x100u, 0x72u);
        wrf32d(r30 + 0x104u, f0);
        wrf32d(r30 + 0x108u, f1);
        wr32(r30 + 0x110u, 0u);
        wrf32d(r30 + 0x10cu, f0);
        r3 = rd32(r30 + 0x114u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(r30 + 0x114u);
                (void)tc_call(0x80157f30u, &a);
            }
        }
        wr32(r30 + 0x114u, 0u);
        f2 = (f64)rdf32(0x80576200u);
        wr32(r30 + 0x118u, 0xffffffffu);
        f1 = (f64)rdf32(0x8057621cu);
        wrf32d(r30 + 0x11cu, f2);
        f0 = (f64)rdf32(0x80576204u);
        wr32(r30 + 0x118u, 0xd5u);
        wrf32d(r30 + 0x11cu, f2);
        wrf32d(r30 + 0x120u, f1);
        wr32(r30 + 0x128u, 0u);
        wrf32d(r30 + 0x124u, f0);
        r3 = rd32(r30 + 0x12cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x80320fe4u, &a);
            if (r3 != 0u) {
                a.r[0] = rd32(r30 + 0x12cu);
                (void)tc_call(0x80157f30u, &a);
            }
        }
        wr32(r30 + 0x12cu, 0u);
        f2 = (f64)rdf32(0x80576200u);
        wr32(r30 + 0x130u, 0xffffffffu);
        f1 = (f64)rdf32(0x8057621cu);
        wrf32d(r30 + 0x134u, f2);
        f0 = (f64)rdf32(0x80576204u);
        wr32(r30 + 0x130u, 0x1du);
        wrf32d(r30 + 0x134u, f2);
        wrf32d(r30 + 0x138u, f1);
        wr32(r30 + 0x140u, 0u);
        wrf32d(r30 + 0x13cu, f0);
        wrf32d(r30 + 8u, (f64)rdf32(0x817fdfb8u));
        wrf32d(r30 + 0xcu, (f64)rdf32(0x817fdfbcu));
        wrf32d(r30 + 0x10u, (f64)rdf32(0x817fdfc0u));
        r3 = tc_call(0x801ddb34u, &a);
        wr32(r30 + 0x180u, r3);
        f1 = (f64)rdf32(0x805762a4u);
        wrf32d(r30 + 0x184u, (f64)rdf32(0x805762a8u));
        f0 = (f64)rdf32(0x80576298u);
        wrf32d(r30 + 0x18cu, f31);
        wrf32d(r30 + 0x190u, f1);
        wrf32d(r30 + 0x20u, f0);
        wr32(r30 + 0x1bcu, 0x23a3u);
        wr32(r30 + 0x30u, 0x80c5u);
        wrf32d(r30 + 0x24u, f30);
        wr32(r30 + 0x1b0u, 0x801e2194u);
        wr32(r30 + 0x1b8u, rd32(param_1));
        a.r[0] = r30;
        a.r[1] = 0u;
        (void)tc_call(0x801dc5acu, &a);
    }
    return;
}
