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

void fn_802f5fd8(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x24u), &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r31 = r3;
    if (param_2 != 0u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x18u), &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        if (r3 != 0u) {
            a.r[0] = r31;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            r3 = tc_call(rd32(rd32(r31) + 0x1cu), &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            if (r3 != 0u) {
                a.r[0] = r31;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                r3 = tc_call(rd32(rd32(r31) + 0x20u), &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                f2 = 0.0;
                f3 = 0.0;
                if (r3 == 0u) {
                    r5 = rd32(param_1 + 0x60u);
                    r4 = rd32(param_1 + 0x64u);
                    if ((s32)r4 < (s32)r5) {
                        f4 = rdf64(0x805775b0u);
                        f2 = (f64)rdf32(param_1 + 0x58u);
                        f3 = (f64)(f32)(px_b2f((u64)(r4 ^ 0x80000000u) | 0x4330000000000000ull) - f4);
                        f1 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)(f3 * (f64)(f32)((f64)rdf32(param_1 + 0x5cu) - f2)), (f64)(f32)(px_b2f((u64)(r5 ^ 0x80000000u) | 0x4330000000000000ull) - f4)));
                    } else {
                        f1 = (f64)rdf32(param_1 + 0x5cu);
                    }
                    f4 = rdf64(0x805775b0u);
                    f0 = (f64)(f32)((f64)(f32)(px_b2f((u64)(param_2 ^ 0x80000000u) | 0x4330000000000000ull) - f4) * f1);
                    f0 = px_ctiw(f0, ppc_fctiwz(f0));
                    r6 = (u32)px_f2b(f0);
                    if ((s32)r4 < (s32)r5) {
                        f2 = (f64)rdf32(param_1 + 0x58u);
                        f3 = (f64)(f32)(px_b2f((u64)(r4 ^ 0x80000000u) | 0x4330000000000000ull) - f4);
                        f1 = (f64)(f32)(f2 + (f64)(f32)px_fdiv((f64)(f32)(f3 * (f64)(f32)((f64)rdf32(param_1 + 0x5cu) - f2)), (f64)(f32)(px_b2f((u64)(r5 ^ 0x80000000u) | 0x4330000000000000ull) - f4)));
                    } else {
                        f1 = (f64)rdf32(param_1 + 0x5cu);
                    }
                    r3 = rd32(param_1 + 0x10u);
                    f0 = (f64)rdf32(0x805775acu);
                    wrf32d(param_1 + 0x58u, f1);
                    wrf32d(param_1 + 0x5cu, f0);
                    wr32(param_1 + 0x60u, r6);
                    wr32(param_1 + 0x64u, 0u);
                    wr8(param_1 + 0x8cu, 0u);
                    if (r3 != 0u) {
                        a.r[0] = r3;
                        a.r[1] = param_1;
                        f1 = tc_callf(0x80305c60u, &a);
                        r4 = tc_lastr4();
                        r5 = 0u;
                        r6 = 0u;
                        f2 = 0.0;
                        f3 = 0.0;
                        f4 = 0.0;
                    }
                    a.r[0] = param_1;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.f[0] = f1;
                    a.f[1] = f2;
                    a.f[2] = f3;
                    a.f[3] = f4;
                    (void)tc_call(rd32(rd32(param_1) + 0x2cu), &a);
                    wr8(param_1 + 0x7au, 0u);
                    wr32(param_1 + 0x7cu, 0u);
                    wr8(param_1 + 0x80u, 0u);
                    wr8(param_1 + 0x7bu, 1u);
                    return;
                }
            }
        }
    }
    a.r[0] = param_1;
    a.r[1] = r4;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0x10u), &a);
    return;
}
