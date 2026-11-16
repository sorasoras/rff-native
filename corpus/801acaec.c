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

s32 fn_801acaec(u32 param_1, u32 param_r4, u32 param_r5)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    r3 = tc_call(0x801c2c50u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r29 = r3;
    if ((s32)rd32(param_1 + 0xf68u) > 0) {
        a.r[0] = param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x130u), &a);
        f1 = rdf64(0x80575ae8u);
        f31 = (f64)(f32)(px_b2f((u64)(r3 ^ 0x80000000u) | 0x4330000000000000ull) - f1);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x12cu), &a);
        r4 = tc_lastr4();
        f2 = rdf64(0x80575ae8u);
        f1 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(r3 ^ 0x80000000u) | 0x4330000000000000ull) - f2), f31);
        if (f1 < (f64)rdf32(0x80575ae0u)) {
            a.r[0] = param_1;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            r3 = tc_call(rd32(rd32(param_1) + 0x130u), &a);
            f1 = tc_lastf();
            r30 = r3;
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            r3 = tc_call(rd32(rd32(param_1) + 0x12cu), &a);
            r3 = r30 - r3;
            r3 = r3 ^ 0x80000000u;
            f2 = rdf64(0x80575ae8u);
            f1 = (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f2);
            f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)(rd32(param_1 + 0xf68u) ^ 0x80000000u) | 0x4330000000000000ull) - f2) - f1);
            f0 = px_ctiw(f0, ppc_fctiwz(f0));
            wr32(param_1 + 0xf68u, (u32)px_f2b(f0));
            a.r[0] = param_1;
            a.r[1] = tc_lastr4();
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = f2;
            r3 = tc_call(rd32(rd32(param_1) + 0x130u), &a);
            f1 = tc_lastf();
            a.r[0] = param_1;
            a.r[1] = r3;
            a.r[2] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            (void)tc_call(rd32(rd32(param_1) + 0xd4u), &a);
            if ((s32)rd32(param_1 + 0xf68u) <= 0) {
                wr32(param_1 + 0xf64u, 0x801ad194u);
                a.r[0] = param_1 + 0xf20u;
                (void)tc_call(0x801c2004u, &a);
                if ((u32)(s8)rd8(0x80571369u) == 0u) {
                    wr32(0x804dbfd0u, 0x80372210u);
                    a.r[0] = 0x804dbfd0u;
                    r3 = tc_call(0x801c38acu, &a);
                    wr32(0x804dbfd4u, r3);
                    wr32(0x804dbfd0u, 0x803721f0u);
                    wr8(0x80571369u, 1u);
                }
                a.r[0] = param_1 + 0xcfcu;
                a.r[1] = rd32(0x804dbfd4u);
                f1 = tc_callf(0x801c3608u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x1bu;
                a.r[1] = rd32(param_1 + 0x1bcu);
                a.r[2] = rd32(param_1 + 0x154u) + 1u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x80109b34u, &a);
            }
        }
        r3 = 0u;
    } else {
        if (r3 == 1u) {
            if ((u32)(s8)rd8(0x80571355u) == 0u) {
                wr32(0x804db87cu, 0x80371e10u);
                a.r[0] = 0x804db87cu;
                r3 = tc_call(0x801c38acu, &a);
                wr32(0x804db880u, r3);
                wr32(0x804db87cu, 0x803730b0u);
                wr8(0x80571355u, 1u);
            }
            a.r[0] = param_1 + 0xcfcu;
            a.r[1] = rd32(0x804db880u);
            (void)tc_call(0x801c362cu, &a);
        }
        r3 = r29;
    }
    return (s32)r3;
}
