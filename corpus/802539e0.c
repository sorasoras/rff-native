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

void fn_802539e0(f64 param_1, f64 param_2, f64 param_3, f64 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r8 = 0, r9 = 0, r10 = 0, r28 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r8 = 0u;
    r9 = 0u;
    r31 = param_5 & 7u;
    r30 = (param_5 >> 3u) & 1u;
    if (r30 == 0u) {
        if (param_4 == param_3 || param_2 == param_1) {
            f3 = (f64)rdf32(0x80576d00u);
            f4 = (f64)rdf32(0x80576d08u);
            f31 = f3;
        } else {
            f0 = (f64)(f32)(param_4 - param_3);
            f2 = (f64)(f32)(param_2 - param_1);
            f4 = (f64)(f32)px_fdiv(param_4, f0);
            f0 = (f64)(f32)(f0 * f2);
            f31 = (f64)(f32)px_fdiv(param_1, f2);
            f3 = (f64)(f32)px_fdiv((f64)(f32)(param_4 * param_3), f0);
        }
        f1 = (f64)rdf32(0x80576d08u);
        r28 = 0u;
        f0 = rdf64(0x80576d10u);
        while (f4 > f0) {
            f4 = (f64)(f32)(f4 * f1);
            r28 = r28 + 1u;
        }
        f0 = rdf64(0x80576d20u);
        f2 = (f64)rdf32(0x80576d18u);
        f1 = (f64)rdf32(0x80576d00u);
        while ((((((f4 < f1) << 0x1fu) | ((f4 > f1) << 0x1eu) | ((f4 == f1) << 0x1du) | (((f4 != f4) || (f1 != f1)) << 0x1cu)) >> 0x1eu) & 1u) != 0u && f4 < f0) {
            f4 = (f64)(f32)(f4 * f2);
            r28 = r28 - 1u;
        }
        r0 = r28 + 1u;
        f1 = (f64)(f32)((f64)rdf32(0x80576d28u) * f4);
        wrf32d(0x817fdfccu, (f64)(f32)px_fdiv(f3, (f64)(f32)(px_b2f((u64)((((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu))) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80576d30u))));
        a.f[0] = f1;
        r3 = tc_call(0x802558e4u, &a);
        wrf32d(0x817fdfc8u, f31);
        r8 = (r3 & 0xffffffu) | 0xef000000u;
        r9 = ((r28 + 1u) & 0x1fu) | 0xf0000000u;
    } else if (param_4 == param_3 || param_2 == param_1) {
        f0 = (f64)rdf32(0x80576d00u);
        wrf32d(0x817fdfccu, f0);
        wrf32d(0x817fdfc8u, f0);
    } else {
        f3 = (f64)(f32)px_fdiv((f64)rdf32(0x80576d04u), (f64)(f32)(param_2 - param_1));
        wrf32d(0x817fdfccu, (f64)(f32)(f3 * (f64)(f32)(param_4 - param_3)));
        wrf32d(0x817fdfc8u, (f64)(f32)(f3 * (f64)(f32)(param_1 - param_3)));
    }
    r3 = rd32(0x817fdfccu);
    wr8(0xcc008000u, 0x61u);
    r10 = rd32(0x817fdfc8u);
    wr32(0xcc008000u, ((((((r3 >> 0xcu) & 0x7ffu) | ((r3 >> 0xcu) & 0x7f800u)) & 0xfff7ffffu) | ((r3 >> 0xcu) & 0x80000u)) & 0xffffffu) | 0xee000000u);
    r0 = rd32(param_6);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, r8);
    wr8(0xcc008000u, 0x61u);
    r3 = rd32(0x80576c88u);
    wr32(0xcc008000u, r9);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, ((((((((((r10 >> 0xcu) & 0x7ffu) | ((r10 >> 0xcu) & 0x7f800u)) & 0xfff7ffffu) | ((r10 >> 0xcu) & 0x80000u)) & 0xffefffffu) | ((r30 << 0x14u) & 0x100000u)) & 0xff1fffffu) | ((r31 << 0x15u) & 0xe00000u)) & 0xffffffu) | 0xf1000000u);
    wr8(0xcc008000u, 0x61u);
    wr32(0xcc008000u, ((r0 >> 8u) & 0xffffffu) | 0xf2000000u);
    wr16(r3 + 2u, 0u);
    return;
}
