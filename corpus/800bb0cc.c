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

void fn_800bb0cc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r3 = rd32(0x80571140u);
    r12 = rd32(r3);
    wr32(0x817fdfd0u, 0x43300000u);
    r12 = rd32(r12 + 0xccu);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    r3 = tc_call(r12, &a);
    r4 = tc_lastr4();
    f2 = rdf64(0x80572d88u);
    f0 = (f64)rdf32(0x80572ca0u);
    f1 = (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f2);
    if ((f1 > f0) || (f1 == f0)) {
        r3 = rd32(0x80571140u);
        a.r[0] = r3;
        a.r[1] = r4;
        a.f[0] = f1;
        a.f[1] = f2;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0xccu), &a);
        wr32(0x817fdfd4u, r3);
        r3 = rd32(0x80571140u);
        f1 = rdf64(0x80572d88u);
        f31 = (f64)(f32)(rdf64(0x817fdfd0u) - f1);
        a.r[0] = r3;
        a.r[1] = tc_lastr4();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0xd0u), &a);
        f6 = (f64)rdf32((u32)param_1 + 0x364u);
        f5 = (f64)rdf32((u32)param_1 + 0x36cu);
        f1 = (f64)rdf32((u32)param_1 + 0x360u);
        f3 = (f64)rdf32((u32)param_1 + 8u);
        f2 = (f64)(f32)px_fdiv(f31, (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80572d88u)));
        wrf32d((u32)param_1 + 0x2f8u, (f64)rdf32((u32)param_1 + 0x370u));
        f0 = (f64)rdf32((u32)param_1 + 0x134u);
        wrf32d((u32)param_1 + 0x2f0u, f6);
        wr32((u32)param_1 + 0x310u, 1u);
        f1 = (f64)(f32)(f1 + f5);
        f4 = (f64)(f32)(f5 * f2);
        f2 = (f64)(f32)(f3 * f2);
        f0 = (f64)(f32)(f1 - f0);
        f0 = ppc_fnmsubs(f5, f2, f0);
        wrf32d((u32)param_1 + 0x2fcu, (f64)(f32)(f3 * f4));
        wrf32d((u32)param_1 + 0x2ecu, f0);
    } else {
        wr32((u32)param_1 + 0x310u, 0u);
    }
    f2 = rdf64(0x80572d88u);
    f0 = (f64)rdf32(0x80572ca0u);
    r0 = (u32)rd16(0x8049908cu);
    wr32(0x817fdfd4u, r0);
    f1 = (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2);
    if ((f1 > f0) || (f1 == f0)) {
        f0 = (f64)rdf32(0x80572d84u);
        f4 = (f64)(f32)px_fdiv(f0, f0);
        f6 = (f64)rdf32((u32)param_1 + 0x3f4u);
        f3 = (f64)rdf32((u32)param_1 + 0x3fcu);
        f0 = (f64)rdf32((u32)param_1 + 0x1c4u);
        f2 = (f64)rdf32((u32)param_1 + 8u);
        f1 = (f64)(f32)((f64)rdf32((u32)param_1 + 0x3f0u) + f3);
        wrf32d((u32)param_1 + 0x388u, (f64)rdf32((u32)param_1 + 0x400u));
        f3 = (f64)(f32)(f3 * f4);
        wrf32d((u32)param_1 + 0x380u, f6);
        f0 = (f64)(f32)(f1 - f0);
        wr32((u32)param_1 + 0x3a0u, 1u);
        f0 = ppc_fnmsubs(f2, f3, f0);
        wrf32d((u32)param_1 + 0x38cu, (f64)(f32)(f2 * f3));
        wrf32d((u32)param_1 + 0x37cu, f0);
    } else {
        wr32((u32)param_1 + 0x3a0u, 0u);
    }
    r31 = 0u;
    wr32((u32)param_1 + 0x280u, 1u);
    r30 = 0u;
    wr32((u32)param_1 + 0x430u, 1u);
    wr32((u32)param_1 + 0x3a0u, 0u);
    do {
        a.r[0] = (u32)param_1 + r31 + 0x258u;
        (void)tc_call(0x8005250cu, &a);
        r30 = r30 + 1u;
        r31 = r31 + 0x90u;
    } while ((s32)r30 < 4);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800bb4c4u, &a);
    return;
}
