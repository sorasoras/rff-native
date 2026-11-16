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

f64 fn_802511fc(u32 param_1, u32 param_2)
{
    u32 r3 = 0, r4 = 0, r30 = 0, r31 = 0;
    f64 f3 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f3 = rdf64(0x80576cb8u);
    f28 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)param_2 | 0x4330000000000000ull) - f3), (f64)(f32)(px_b2f((u64)param_1 | 0x4330000000000000ull) - f3));
    r30 = param_2;
    a.f[0] = (f64)(f32)px_fdiv((f64)rdf32(0x80576cb0u), f28);
    r3 = tc_call(0x802558e4u, &a);
    r4 = r3 & 0x1ffu;
    r31 = ((param_1 - 1u) << 8u) & 0xffffff00u;
    r3 = ppc_divwu(r31, r4) + 1u;
    if (r4 > 0x80u && r4 < 0x100u) {
        while ((r4 & 1u) == 0u) {
            r4 = (r4 >> 1u) & 0x7fffffffu;
        }
        if ((param_1 - (ppc_divwu(param_1, r4) * r4)) == 0u) {
            r3 = r3 + 1u;
        }
    }
    if (r3 > 0x400u) {
        r3 = 0x400u;
    }
    f31 = rdf64(0x80576cb8u);
    f30 = (f64)rdf32(0x80576cb0u);
    while (r3 > param_2) {
        r30 = r30 - 1u;
        f28 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r30 | 0x4330000000000000ull) - f31), (f64)(f32)(px_b2f((u64)param_1 | 0x4330000000000000ull) - f31));
        a.f[0] = (f64)(f32)px_fdiv(f30, f28);
        r3 = tc_call(0x802558e4u, &a);
        r4 = r3 & 0x1ffu;
        r3 = ppc_divwu(r31, r4) + 1u;
        if (r4 > 0x80u && r4 < 0x100u) {
            while ((r4 & 1u) == 0u) {
                r4 = (r4 >> 1u) & 0x7fffffffu;
            }
            if ((param_1 - (ppc_divwu(param_1, r4) * r4)) == 0u) {
                r3 = r3 + 1u;
            }
        }
        if (r3 > 0x400u) {
            r3 = 0x400u;
        }
    }
    f29 = f28;
    f30 = rdf64(0x80576cb8u);
    f31 = (f64)rdf32(0x80576cb0u);
    while (r3 < param_2) {
        r30 = r30 + 1u;
        f29 = f28;
        f28 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r30 | 0x4330000000000000ull) - f30), (f64)(f32)(px_b2f((u64)param_1 | 0x4330000000000000ull) - f30));
        a.f[0] = (f64)(f32)px_fdiv(f31, f28);
        r3 = tc_call(0x802558e4u, &a);
        r4 = r3 & 0x1ffu;
        r3 = ppc_divwu(r31, r4) + 1u;
        if (r4 > 0x80u && r4 < 0x100u) {
            while ((r4 & 1u) == 0u) {
                r4 = (r4 >> 1u) & 0x7fffffffu;
            }
            if ((param_1 - (ppc_divwu(param_1, r4) * r4)) == 0u) {
                r3 = r3 + 1u;
            }
        }
        if (r3 > 0x400u) {
            r3 = 0x400u;
        }
    }
    return f29;
}
