#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

static f64 px_fdiv(f64 a, f64 b)
{
    return a / b;
}

void fn_800bccb4(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc8u, 0x43300000u);
    wr32(0x817fdfd0u, 0x43300000u);
    a.r[0] = (u32)param_1 + 0x1524u;
    (void)tc_call(0x8005250cu, &a);
    wr32((u32)param_1 + 0x154cu, 1u);
    a.r[0] = (u32)param_1 + 0x15b4u;
    (void)tc_call(0x8005250cu, &a);
    wr32((u32)param_1 + 0x15dcu, 1u);
    a.r[0] = (u32)param_1 + 0x1648u;
    f1 = tc_callf(0x8005250cu, &a);
    wr32((u32)param_1 + 0x1670u, 1u);
    r3 = rd32((u32)param_1 + 0x1520u);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0xccu), &a);
    wr32(0x817fdfccu, r3);
    r3 = rd32((u32)param_1 + 0x1520u);
    f1 = rdf64(0x80572d88u);
    f31 = (f64)(f32)(rdf64(0x817fdfc8u) - f1);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0xd0u), &a);
    wr32(0x817fdfd4u, r3);
    r3 = rd32((u32)param_1 + 0x1520u);
    f1 = rdf64(0x80572d88u);
    f30 = (f64)(f32)(rdf64(0x817fdfd0u) - f1);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0xccu), &a);
    wr32(0x817fdfccu, r3);
    f0 = (f64)rdf32(0x80572ca0u);
    f1 = (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80572d88u));
    if (!((f1 > f0) || (f1 == f0))) {
        wr32((u32)param_1 + 0x15dcu, 0u);
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800bce90u, &a);
    } else {
        if ((f64)rdf32(0x80572c98u) == f30) {
            a.r[0] = (u32)param_1;
            (void)tc_call(0x800bce90u, &a);
        }
        f2 = (f64)rdf32((u32)param_1 + 0x1644u);
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x1638u) * (f64)(f32)px_fdiv(f31, f30));
        c0lt = f2 < f1;
        if (!(f2 > f1)) {
            if (c0lt) {
                f0 = (f64)(f32)(f2 + (f64)rdf32(0x80572ca0u));
                wrf32d((u32)param_1 + 0x1644u, f0);
                if ((f0 > f1) || (f0 == f1)) {
                    wrf32d((u32)param_1 + 0x1644u, f1);
                }
            }
        } else {
            f0 = (f64)(f32)(f2 - (f64)rdf32(0x80572ca0u));
            wrf32d((u32)param_1 + 0x1644u, f0);
            if ((f0 < f1) || (f0 == f1)) {
                wrf32d((u32)param_1 + 0x1644u, f1);
            }
        }
        f1 = (f64)rdf32((u32)param_1 + 8u);
        f2 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x1644u) * f1);
        f0 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x15a8u) * f1);
        f1 = (f64)rdf32((u32)param_1 + 0x15acu);
        wrf32d((u32)param_1 + 0x15c4u, (f64)rdf32((u32)param_1 + 0x163cu));
        wrf32d((u32)param_1 + 0x15c8u, f2);
        wrf32d((u32)param_1 + 0x1538u, f0);
        wrf32d((u32)param_1 + 0x1534u, f1);
    }
    f2 = rdf64(0x80572d88u);
    f0 = (f64)rdf32(0x80572ca0u);
    r0 = (u32)rd16(0x8049908au);
    wr32(0x817fdfd4u, r0);
    if ((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2) < f0) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800bce90u, &a);
    }
    return;
}
