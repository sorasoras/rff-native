#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
}

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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

u32 fn_8004dd70(f64 param_1, s32 param_2, s32 param_3)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    r5 = rd32((u32)param_3 + 0x5cu);
    wr32(0x817fdfc8u, 0x43300000u);
    if (r5 != 0u) {
        a.f[0] = param_1;
        a.r[0] = (u32)param_2 + 4u;
        a.r[1] = r5;
        (void)tc_call(0x8004dbb8u, &a);
    } else {
        f1 = (f64)rdf32((u32)param_3 + 0x38u);
        f0 = (f64)rdf32((u32)param_3 + 0x3cu);
        wrf32d((u32)param_2 + 4u, (f64)rdf32((u32)param_3 + 0x34u));
        wrf32d((u32)param_2 + 8u, f1);
        wrf32d((u32)param_2 + 0xcu, f0);
    }
    if (rd32((u32)param_3 + 0x60u) != 0u) {
        a.f[0] = param_1;
        a.r[0] = (u32)param_2;
        a.r[1] = (u32)param_3;
        (void)tc_call(0x8004dc34u, &a);
        a.r[0] = (u32)param_2;
        a.r[1] = 1u;
        (void)tc_call(0x8004ce78u, &a);
    } else {
        f0 = (f64)(f32)((f64)rdf32(0x80572210u) * (f64)rdf32((u32)param_3 + 0x2cu));
        f4 = (f64)(f32)((f64)rdf32((u32)param_3 + 0x40u) + (f64)rdf32((u32)param_2 + 4u));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        f3 = (f64)(f32)((f64)rdf32((u32)param_3 + 0x44u) + (f64)rdf32((u32)param_2 + 8u));
        f2 = (f64)rdf32((u32)param_3 + 0x48u);
        f1 = (f64)rdf32((u32)param_2 + 0xcu);
        wrf64(0x817fdfd8u, f0);
        r0 = rd32(0x817fdfdcu);
        wrf32d((u32)param_2 + 0x10u, f4);
        wrf32d((u32)param_2 + 0x14u, f3);
        wrf32d((u32)param_2 + 0x18u, (f64)(f32)(f2 + f1));
        wr16((u32)param_2 + 0xdau, (u16)r0);
    }
    r3 = rd32((u32)param_3 + 0x58u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x8004db70u, &a);
    } else {
        f0 = (f64)(f32)((f64)rdf32(0x80572210u) * (f64)rdf32((u32)param_3 + 0x28u));
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfd8u, f0);
        r3 = (u32)px_f2b(f0);
    }
    f1 = (f64)rdf32(0x805721e8u);
    f0 = (f64)rdf32((u32)param_2 + 0xdcu);
    wr32(0x817fdfccu, (u32)(s16)r3 ^ 0x80000000u);
    c0eq = (rd32((u32)param_3 + 0x14u) & 2u) == 0u;
    f0 = (f64)(f32)((f64)(f32)px_fdiv(f1, f0) * (f64)(f32)(rdf64(0x817fdfc8u) - rdf64(0x80572200u)));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wr16((u32)param_2 + 0xd8u, (u16)px_f2b(f0));
    if (!c0eq) {
        f0 = (f64)rdf32((u32)param_3 + 0x24u);
        wrf32d((u32)param_2 + 0xe0u, (f64)rdf32((u32)param_3 + 0x20u));
        wrf32d((u32)param_2 + 0xe4u, f0);
    }
    if ((rd32((u32)param_3 + 0x14u) & 4u) != 0u) {
        r5 = (u32)rd16((u32)param_2 + 0xf4u);
        r3 = (u32)(s16)r3;
        r4 = (u32)rd16((u32)param_2 + 0xf6u);
        f2 = rdf64(0x80572208u);
        wr32(0x817fdfccu, r4);
        f0 = (f64)rdf32(0x80572218u);
        f1 = (f64)(f32)(px_b2f((u64)((u32)((s32)(((r3 >> 0x1fu) & 1u) + r3) >> 1) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80572200u));
        wrf32d((u32)param_2 + 0xdcu, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f2), (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f2)));
        f1 = (f64)(f32)(f0 * f1);
        a.f[0] = f1;
        f1 = tc_callf(0x80262be8u, &a);
        r3 = 2u;
        wrf32d((u32)param_2 + 0xfcu, (f64)(f32)px_fdiv((f64)(f32)((f64)rdf32((u32)param_3 + 0x30u) * (f64)(f32)f1), (f64)rdf32((u32)param_2 + 0xdcu)));
    } else {
        r3 = 0u;
    }
    return r3;
}
