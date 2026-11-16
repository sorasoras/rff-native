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

void fn_800a8018(u32 param_1, u32 param_2)
{
    u32 c0lt = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    f1 = (f64)rdf32(param_1);
    c0lt = f1 < (f64)rdf32(0x80572b50u);
    wr32(param_2 + 0x38u, rd32(param_2 + 0x38u) + 1u);
    if (c0lt || f1 > (f64)rdf32(0x80572b54u)) {
        f1 = (f64)(f32)((f64)rdf32(param_2 + 0x18u) * (f64)rdf32(0x80572b58u));
        f0 = (f64)(f32)(f1 + (f64)rdf32(param_2 + 0x24u));
        wrf32d(param_2 + 0x18u, f1);
        wrf32d(param_1, f0);
    } else {
        wrf32d(param_2 + 0x18u, (f64)(f32)(f1 - (f64)rdf32(param_2 + 0x24u)));
    }
    f1 = (f64)rdf32(param_1 + 4u);
    if (f1 < (f64)rdf32(0x80572b50u) || f1 > (f64)rdf32(0x80572b54u)) {
        f1 = (f64)(f32)((f64)rdf32(param_2 + 0x1cu) * (f64)rdf32(0x80572b58u));
        f0 = (f64)(f32)(f1 + (f64)rdf32(param_2 + 0x28u));
        wrf32d(param_2 + 0x1cu, f1);
        wrf32d(param_1 + 4u, f0);
    } else {
        wrf32d(param_2 + 0x1cu, (f64)(f32)(f1 - (f64)rdf32(param_2 + 0x28u)));
    }
    f1 = (f64)rdf32(param_1 + 8u);
    if (f1 < (f64)rdf32(0x80572b50u) || f1 > (f64)rdf32(0x80572b54u)) {
        f1 = (f64)(f32)((f64)rdf32(param_2 + 0x20u) * (f64)rdf32(0x80572b58u));
        f0 = (f64)(f32)(f1 + (f64)rdf32(param_2 + 0x2cu));
        wrf32d(param_2 + 0x20u, f1);
        wrf32d(param_1 + 8u, f0);
    } else {
        wrf32d(param_2 + 0x20u, (f64)(f32)(f1 - (f64)rdf32(param_2 + 0x2cu)));
    }
    f4 = (f64)rdf32(0x80572b5cu);
    f3 = (f64)(f32)((f64)rdf32(param_2 + 0xcu) * f4);
    f2 = (f64)(f32)((f64)rdf32(param_2 + 0x10u) * f4);
    f5 = (f64)rdf32(param_1 + 4u);
    f1 = (f64)(f32)((f64)rdf32(param_2 + 0x14u) * f4);
    f4 = (f64)rdf32(param_1 + 8u);
    f7 = (f64)rdf32(param_2 + 0x20u);
    f0 = (f64)rdf32(0x80572b60u);
    wrf32d(param_2 + 0x24u, (f64)rdf32(param_1));
    wrf32d(param_2 + 0x28u, f5);
    wrf32d(param_2 + 0x2cu, f4);
    wrf32d(param_2 + 0xcu, f3);
    wrf32d(param_2 + 0x10u, f2);
    wrf32d(param_2 + 0x14u, f1);
    if (f7 < f0) {
        f7 = -f7;
    }
    f4 = ppc_fnmsubs(f7, f7, (f64)rdf32(0x80572b64u));
    if (f4 > (f64)rdf32(0x80572b60u)) {
        f0 = ppc_fmadds(f4, (f64)rdf32(param_2 + 0x1cu), (f64)rdf32(param_2 + 0x10u));
        wrf32d(param_2 + 0xcu, ppc_fmadds(f4, (f64)rdf32(param_2 + 0x18u), (f64)rdf32(param_2 + 0xcu)));
        wrf32d(param_2 + 0x10u, f0);
    }
    f0 = (f64)rdf32(param_2 + 0x10u);
    f4 = (f64)rdf32(0x80572b60u);
    f1 = (f64)(f32)(f0 * f0);
    f0 = (f64)rdf32(param_2 + 0xcu);
    f3 = (f64)rdf32(param_2 + 0x30u);
    f2 = (f64)rdf32(0x80572b68u);
    f0 = ppc_fmadds(f0, f0, f1);
    wrf32d(param_2 + 0x14u, f4);
    f2 = (f64)(f32)(f3 * f2);
    wrf32d(param_2 + 0x30u, f2);
    a.f[0] = ppc_fmadds(f4, f4, f0);
    f1 = tc_callf(0x80262ec0u, &a);
    f3 = (f64)(f32)f1;
    f0 = (f64)rdf32(0x80570718u);
    if (((f3 > f0) || (f3 == f0)) && f3 > (f64)rdf32(param_2 + 0x30u)) {
        f2 = (f64)rdf32(param_2 + 0xcu);
        f4 = (f64)(f32)px_fdiv((f64)rdf32(0x80572b64u), f3);
        f1 = (f64)rdf32(param_2 + 0x10u);
        f0 = (f64)rdf32(param_2 + 0x14u);
        wrf32d(param_2 + 0x30u, f3);
        wr32(param_2 + 0x38u, 0u);
        f2 = (f64)(f32)(f4 * f2);
        f1 = (f64)(f32)(f4 * f1);
        f0 = (f64)(f32)(f4 * f0);
        wrf32d(param_2, f2);
        wrf32d(param_2 + 4u, f1);
        wrf32d(param_2 + 8u, f0);
        a.f[0] = f1;
        a.f[1] = f2;
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        f0 = (f64)(f32)((f64)rdf32(0x80572b6cu) * f1);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r31 = (u32)px_f2b(f0);
        wr32(param_2 + 0x3cu, r31);
        a.r[0] = r31;
        r3 = tc_call(0x80258674u, &a);
        r4 = 3u;
        if ((s32)r3 <= 20478) {
            r4 = 2u;
            if ((s32)r3 <= 12287) {
                r4 = 1u;
                if ((s32)r3 <= 4096) {
                    r4 = 0u;
                    if ((s32)r3 <= -4095) {
                        r4 = 0xffffffffu;
                    }
                }
            }
        }
        if ((s32)r31 < 0) {
            r4 = r4 + 4u;
        }
        wr32(param_2 + 0x3cu, r4);
    }
    return;
}
