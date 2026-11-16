#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_801dc180(u32 param_r3)
{
    u32 r27 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f4 = 0.0, f23 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f28 = rdf64(0x805761d0u);
    f29 = (f64)rdf32(0x805761b4u);
    r29 = param_r3;
    f30 = (f64)rdf32(0x805761b0u);
    r27 = 0u;
    f31 = (f64)rdf32(0x805761b8u);
    r28 = 0u;
    f23 = (f64)rdf32(0x805761c0u);
    f24 = (f64)rdf32(0x805761dcu);
    f25 = (f64)rdf32(0x805761a8u);
    f26 = (f64)rdf32(0x805761e4u);
    f27 = (f64)rdf32(0x805761c4u);
    do {
        wr32(r29 + 0x100u, 0u);
        wrf32d(r29 + 0xecu, ppc_fmadds(f29, (f64)(f32)(px_b2f((u64)(r27 ^ 0x80000000u) | 0x4330000000000000ull) - f28), f30));
        wrf32d(r29 + 0xf0u, f31);
        a.f[0] = (f64)(f32)(f24 * ppc_fmadds((f64)rdf32(param_r3 + 0x414u), f23, (f64)(f32)(px_b2f((u64)(r28 ^ 0x80000000u) | 0x4330000000000000ull) - f28)));
        f1 = tc_callf(0x80262704u, &a);
        f0 = (f64)(f32)f1;
        if (f0 < f25) {
            f0 = f25;
        }
        f4 = ppc_fmadds(f26, f0, f27);
        r27 = r27 + 1u;
        r28 = r28 - 0x5au;
        f1 = ppc_fmadds((f64)(f32)((f64)rdf32(r29 + 0xfcu) - f4), f23, (f64)rdf32(r29 + 0xf0u));
        wrf32d(r29 + 8u, ppc_fmadds((f64)(f32)((f64)rdf32(r29 + 0xf8u) - f4), f23, (f64)rdf32(r29 + 0xecu)));
        wrf32d(r29 + 0xcu, f1);
        wrf32d(r29 + 0x18u, f4);
        wrf32d(r29 + 0x14u, f4);
        f1 = (f64)rdf32(r29 + 0xf0u);
        wrf32d(r29 + 0x7cu, (f64)rdf32(r29 + 0xecu));
        wrf32d(r29 + 0x80u, f1);
        r29 = r29 + 0x104u;
    } while ((s32)r27 < 4);
    return;
}
