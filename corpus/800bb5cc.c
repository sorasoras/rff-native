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

void fn_800bb5cc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    f64 f0 = 0.0, f1 = 0.0, f4 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    r5 = (u32)rd16(0x80499088u) + rd32(0x8049e14cu);
    if ((s32)r5 <= 0) {
        r5 = 0u;
    }
    if ((s32)r5 >= 65535) {
        r5 = 0xffffu;
    }
    if ((s32)r5 <= 0) {
        r5 = 0x64u;
    }
    r5 = r5 & 0xffffu;
    f4 = rdf64(0x80572d88u);
    f30 = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)rd16(0x8049908au) | 0x4330000000000000ull) - f4), (f64)(f32)(px_b2f((u64)r5 | 0x4330000000000000ull) - f4));
    a.f[0] = (f64)(f32)((f64)rdf32(0x80572d90u) * (f64)(f32)(px_b2f((u64)rd32(0x805711d8u) | 0x4330000000000000ull) - f4));
    f1 = tc_callf(0x80262704u, &a);
    f31 = (f64)(f32)f1;
    f29 = (f64)rdf32(0x80572d94u);
    if (!((rdf64(0x80572d98u) * f30) < rdf64(0x80572da0u))) {
        wr32(0x805711d8u, 0u);
        wr8(0x817fdfaau, 0xffu);
        wr8(0x817fdfa9u, 0xffu);
    } else {
        f0 = rdf64(0x80572da8u);
        a.f[0] = -((f0 * f30) - f0);
        r3 = tc_call(0x802558e4u, &a);
        r3 = rd32(0x805711d8u) + r3;
        f0 = ppc_fmadds(f29, (f64)(f32)((f64)rdf32(0x80572ca0u) + f31), (f64)rdf32(0x80572cbcu));
        wr32(0x805711d8u, r3);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r0 = (u32)px_f2b(f0);
        wr8(0x817fdfaau, (u8)r0);
        wr8(0x817fdfa9u, (u8)r0);
    }
    r3 = (u32)rd8(0x817fdfa9u);
    r0 = (u32)rd8(0x817fdfaau);
    wr8((u32)param_1 + 0x64u, 0xffu);
    wr8((u32)param_1 + 0x65u, (u8)r3);
    wr8((u32)param_1 + 0x66u, (u8)r0);
    wr8((u32)param_1 + 0x67u, 0xffu);
    wr8((u32)param_1 + 0x68u, 0xffu);
    wr8((u32)param_1 + 0x69u, (u8)r3);
    wr8((u32)param_1 + 0x6au, (u8)r0);
    wr8((u32)param_1 + 0x6bu, 0xffu);
    wr8((u32)param_1 + 0x6cu, 0xffu);
    wr8((u32)param_1 + 0x6du, (u8)r3);
    wr8((u32)param_1 + 0x6eu, (u8)r0);
    wr8((u32)param_1 + 0x6fu, 0xffu);
    wr8((u32)param_1 + 0x70u, 0xffu);
    wr8((u32)param_1 + 0x71u, (u8)r3);
    wr8((u32)param_1 + 0x72u, (u8)r0);
    wr8((u32)param_1 + 0x73u, 0xffu);
    wr8((u32)param_1 + 0x214u, 0xffu);
    wr8((u32)param_1 + 0x215u, (u8)r3);
    wr8((u32)param_1 + 0x216u, (u8)r0);
    wr8((u32)param_1 + 0x217u, 0xffu);
    wr8((u32)param_1 + 0x218u, 0xffu);
    wr8((u32)param_1 + 0x219u, (u8)r3);
    wr8((u32)param_1 + 0x21au, (u8)r0);
    wr8((u32)param_1 + 0x21bu, 0xffu);
    wr8((u32)param_1 + 0x21cu, 0xffu);
    wr8((u32)param_1 + 0x21du, (u8)r3);
    wr8((u32)param_1 + 0x21eu, (u8)r0);
    wr8((u32)param_1 + 0x21fu, 0xffu);
    wr8((u32)param_1 + 0x220u, 0xffu);
    wr8((u32)param_1 + 0x221u, (u8)r3);
    wr8((u32)param_1 + 0x222u, (u8)r0);
    wr8((u32)param_1 + 0x223u, 0xffu);
    wr8((u32)param_1 + 0xf4u, 0xffu);
    wr8((u32)param_1 + 0xf5u, (u8)r3);
    wr8((u32)param_1 + 0xf6u, (u8)r0);
    wr8((u32)param_1 + 0xf7u, 0xffu);
    wr8((u32)param_1 + 0xf8u, 0xffu);
    wr8((u32)param_1 + 0xf9u, (u8)r3);
    wr8((u32)param_1 + 0xfau, (u8)r0);
    wr8((u32)param_1 + 0xfbu, 0xffu);
    wr8((u32)param_1 + 0xfcu, 0xffu);
    wr8((u32)param_1 + 0xfdu, (u8)r3);
    wr8((u32)param_1 + 0xfeu, (u8)r0);
    wr8((u32)param_1 + 0xffu, 0xffu);
    wr8((u32)param_1 + 0x100u, 0xffu);
    wr8((u32)param_1 + 0x101u, (u8)r3);
    wr8((u32)param_1 + 0x102u, (u8)r0);
    wr8((u32)param_1 + 0x103u, 0xffu);
    wr8((u32)param_1 + 0x184u, 0xffu);
    wr8((u32)param_1 + 0x185u, (u8)r3);
    wr8((u32)param_1 + 0x186u, (u8)r0);
    wr8((u32)param_1 + 0x187u, 0xffu);
    wr8((u32)param_1 + 0x188u, 0xffu);
    wr8((u32)param_1 + 0x189u, (u8)r3);
    wr8((u32)param_1 + 0x18au, (u8)r0);
    wr8((u32)param_1 + 0x18bu, 0xffu);
    wr8((u32)param_1 + 0x18cu, 0xffu);
    wr8((u32)param_1 + 0x18du, (u8)r3);
    wr8((u32)param_1 + 0x18eu, (u8)r0);
    wr8((u32)param_1 + 0x18fu, 0xffu);
    wr8((u32)param_1 + 0x190u, 0xffu);
    wr8((u32)param_1 + 0x191u, (u8)r3);
    wr8((u32)param_1 + 0x192u, (u8)r0);
    wr8((u32)param_1 + 0x193u, 0xffu);
    return;
}
