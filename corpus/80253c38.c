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

void fn_80253c38(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    if (rdf64(0x80576d38u) == (f64)rdf32(param_3 + 0x3cu)) {
        f1 = (f64)(f32)px_fdiv((f64)rdf32(param_3 + 0x2cu), (f64)(f32)((f64)rdf32(param_3 + 0x28u) - (f64)rdf32(0x80576d04u)));
        f26 = (f64)(f32)px_fdiv(f1, (f64)rdf32(param_3));
    } else {
        f26 = (f64)(f32)px_fdiv((f64)rdf32(0x80576d04u), (f64)rdf32(param_3));
        f1 = (f64)(f32)((f64)rdf32(0x80576d40u) * f26);
    }
    f28 = rdf64(0x80576d48u);
    f29 = (f64)(f32)(f1 * f1);
    r30 = param_1;
    r29 = 0u;
    f30 = (f64)rdf32(0x80576d04u);
    f31 = (f64)rdf32(0x80576d44u);
    f27 = (f64)(f32)px_fdiv((f64)rdf32(0x80576d18u), (f64)(f32)(px_b2f((u64)param_2 | 0x4330000000000000ull) - f28));
    do {
        f0 = (f64)(f32)((f64)(f32)((f64)(f32)(px_b2f((u64)(((r29 + 1u) << 5u) & 0xffffffe0u) | 0x4330000000000000ull) - f28) * f27) * f26);
        f0 = (f64)(f32)(f0 * f0);
        f0 = (f64)(f32)px_fdiv(f0, f29);
        a.f[0] = (f64)(f32)(f30 + f0);
        f1 = tc_callf(0x80262ec0u, &a);
        f1 = (f64)(f32)(f31 * (f64)(f32)f1);
        a.f[0] = f1;
        r3 = tc_call(0x802558e4u, &a);
        r29 = r29 + 1u;
        wr16(r30, (u16)(r3 & 0xfffu));
        r30 = r30 + 2u;
    } while (r29 < 0xau);
    return;
}
