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

void fn_801cfb00(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r5 = (u32)param_1;
    r6 = 0u;
    f2 = (f64)(f32)((f64)rdf32(0x80575f44u) * (f64)rdf32((u32)param_1 + 0xdd0u));
    f1 = rdf64(0x80575ec0u);
    wr32(0x817fdfa0u, 0x43300000u);
    wr32((u32)param_1 + 0xe94u, 0u);
    while ((f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - f1) < f2 && (s32)r6 < 10) {
        wr32(r5 + 0xe98u, 1u);
        r5 = r5 + 4u;
        r6 = r6 + 1u;
    }
    r4 = r6 ^ 0x80000000u;
    wr32(0x817fdfa4u, r4);
    r5 = (u32)param_1 + ((r6 << 2u) & 0xfffffffcu);
    f1 = rdf64(0x80575ec0u);
    f2 = (f64)(f32)((f64)(f32)((f64)rdf32(0x80575f44u) * (f64)rdf32((u32)param_1 + 0xdd4u)) + (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f1));
    while ((f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - f1) < f2 && (s32)r6 < 10) {
        wr32(r5 + 0xe98u, 2u);
        r5 = r5 + 4u;
        r6 = r6 + 1u;
    }
    r4 = r6 ^ 0x80000000u;
    wr32(0x817fdfa4u, r4);
    r5 = (u32)param_1 + ((r6 << 2u) & 0xfffffffcu);
    f1 = rdf64(0x80575ec0u);
    f2 = (f64)(f32)((f64)(f32)((f64)rdf32(0x80575f44u) * (f64)rdf32((u32)param_1 + 0xdd8u)) + (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f1));
    while ((f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - f1) < f2 && (s32)r6 < 10) {
        wr32(r5 + 0xe98u, 7u);
        r5 = r5 + 4u;
        r6 = r6 + 1u;
    }
    f3 = (f64)rdf32((u32)param_1 + 0xddcu);
    wr32(0x817fdfa4u, r6 ^ 0x80000000u);
    r4 = (u32)param_1 + ((r6 << 2u) & 0xfffffffcu);
    f1 = rdf64(0x80575ec0u);
    f3 = (f64)(f32)((f64)rdf32(0x80575f44u) * f3);
    f3 = (f64)(f32)(f3 + (f64)(f32)(rdf64(0x817fdfa0u) - f1));
    while ((f64)(f32)(px_b2f((u64)(r6 ^ 0x80000000u) | 0x4330000000000000ull) - f1) < f3 && (s32)r6 < 10) {
        wr32(r4 + 0xe98u, 6u);
        r4 = r4 + 4u;
        r6 = r6 + 1u;
    }
    f0 = (f64)rdf32(0x80575ef0u);
    if (f3 < f0) {
        f0 = (f64)(f32)(f0 - f3);
        f2 = rdf64(0x80575ec0u);
        r4 = (u32)param_1;
        r5 = 0u;
        for (;;) {
            r0 = r5 ^ 0x80000000u;
            wr32(0x817fdfa4u, r0);
            if (!((f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f2) < f0)) break;
            wr32(r4 + 0xe98u, 0u);
            r4 = r4 + 4u;
            r5 = r5 + 1u;
        }
    }
    f28 = rdf64(0x80575ec8u);
    r30 = (u32)param_1;
    f29 = rdf64(0x80575ec0u);
    r29 = 0u;
    f30 = (f64)rdf32(0x80575e98u);
    f31 = (f64)rdf32(0x80575f48u);
    do {
        r3 = tc_call(0x80040b64u, &a);
        r0 = (9u - r29) ^ 0x80000000u;
        r4 = rd32(r30 + 0xe98u);
        wr32(0x817fdfa4u, r0);
        f0 = (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(f30 + (f64)(f32)(px_b2f((u64)r0 | 0x4330000000000000ull) - f29)) * (f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - f28)), f31);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r0 = r29 + (u32)px_f2b(f0);
        r29 = r29 + 1u;
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = (u32)param_1 + r0;
        wr32(r30 + 0xe98u, rd32(r3 + 0xe98u));
        r30 = r30 + 4u;
        wr32(r3 + 0xe98u, r4);
    } while ((s32)r29 < 8);
    return;
}
