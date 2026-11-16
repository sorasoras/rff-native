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

void fn_8031c584(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f24 = 0.0, f25 = 0.0, f26 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = rdf64(0x80577938u);
    wr8(param_1, rd8(param_2));
    f24 = (f64)rdf32(0x80577918u);
    r30 = param_2;
    r29 = 0u;
    f25 = (f64)rdf32(0x8057791cu);
    wr8(param_1 + 1u, rd8(param_2 + 1u));
    f26 = (f64)rdf32(0x80577920u);
    f27 = (f64)rdf32(0x80577924u);
    wr8(param_1 + 2u, rd8(param_2 + 2u));
    f28 = (f64)rdf32(0x8057792cu);
    f29 = (f64)rdf32(0x80577928u);
    wr8(param_1 + 3u, rd8(param_2 + 3u));
    f30 = (f64)rdf32(0x80577930u);
    wr8(param_1 + 4u, rd8(param_2 + 4u));
    wr8(param_1 + 5u, rd8(param_2 + 5u));
    wr8(param_1 + 6u, rd8(param_2 + 6u));
    wr8(param_1 + 7u, rd8(param_2 + 7u));
    wr8(param_1 + 8u, rd8(param_2 + 8u));
    wr8(param_1 + 9u, rd8(param_2 + 9u));
    wr8(param_1 + 0xau, rd8(param_2 + 0xau));
    wr8(param_1 + 0xbu, rd8(param_2 + 0xbu));
    wr8(param_1 + 0xcu, rd8(param_2 + 0xcu));
    wr8(param_1 + 0xdu, rd8(param_2 + 0xdu));
    wr8(param_1 + 0xeu, rd8(param_2 + 0xeu));
    wr8(param_1 + 0xfu, rd8(param_2 + 0xfu));
    wrf32d(param_1 + 0x10u, (f64)rdf32(param_2 + 0x10u));
    wrf32d(param_1 + 0x14u, (f64)rdf32(param_2 + 0x14u));
    wrf32d(param_1 + 0x18u, (f64)rdf32(param_2 + 0x18u));
    wrf32d(param_1 + 0x1cu, (f64)rdf32(param_2 + 0x1cu));
    wrf32d(param_1 + 0x20u, (f64)rdf32(param_2 + 0x20u));
    wrf32d(param_1 + 0x24u, (f64)rdf32(param_2 + 0x24u));
    wrf32d(param_1 + 0x28u, (f64)rdf32(param_2 + 0x28u));
    do {
        r5 = param_2 + r29;
        f2 = (f64)rdf32(r30 + 0x7cu);
        if ((u32)rd8(r5 + 0x79u) != 0u) {
            r4 = rd32((u32)param_3 + 0x20u);
            wr32(0x817fdf48u, 0x43300000u);
            r3 = (rd32(r4 + 0xecu) * 0x343fdu) + 0x269ec3u;
            wr32(r4 + 0xecu, r3);
            wr32(0x817fdf4cu, (r3 >> 0x10u) & 0xffffu);
            f0 = (f64)(f32)px_fdiv((f64)(f32)((f64)(f32)(px_b2f((u64)rd8(r5 + 0x79u) | 0x4330000000000000ull) - f31) * (f64)(f32)(f2 * (f64)(f32)((f64)(f32)(f25 * (f64)(f32)px_fdiv((f64)(f32)(rdf64(0x817fdf48u) - f31), f24)) - f26))), f27);
            f2 = (f64)(f32)(f2 + f0);
        }
        a.f[0] = (f64)(f32)((f64)(f32)(f29 * (f64)(f32)px_fdiv(f2, f28)) - f30);
        f1 = tc_callf(0x80262598u, &a);
        f0 = (f64)(f32)f1;
        r3 = param_1 + r29;
        r29 = r29 + 1u;
        r30 = r30 + 4u;
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        r4 = (u32)px_f2b(f0);
        r0 = (r4 << 0x18u) & 0xff000000u;
        r4 = (r4 >> 0x1fu) & 1u;
        r0 = r0 - r4;
        r0 = (r0 << 8u) | (r0 >> 0x18u);
        r0 = r0 + r4;
        wr8(r3 + 0x7au, (u8)r0);
    } while ((s32)r29 < 3);
    wr32(param_1 + 0x68u, rd32(param_2 + 0x68u));
    wrf32d(param_1 + 0x2cu, (f64)rdf32(param_2 + 0x2cu));
    wrf32d(param_1 + 0x30u, (f64)rdf32(param_2 + 0x30u));
    wrf32d(param_1 + 0x44u, (f64)rdf32(param_2 + 0x44u));
    wrf32d(param_1 + 0x50u, (f64)rdf32(param_2 + 0x50u));
    wrf32d(param_1 + 0x54u, (f64)rdf32(param_2 + 0x54u));
    wr32(param_1 + 0x6cu, rd32(param_2 + 0x6cu));
    wrf32d(param_1 + 0x34u, (f64)rdf32(param_2 + 0x34u));
    wrf32d(param_1 + 0x38u, (f64)rdf32(param_2 + 0x38u));
    wrf32d(param_1 + 0x48u, (f64)rdf32(param_2 + 0x48u));
    wrf32d(param_1 + 0x58u, (f64)rdf32(param_2 + 0x58u));
    wrf32d(param_1 + 0x5cu, (f64)rdf32(param_2 + 0x5cu));
    wr32(param_1 + 0x70u, rd32(param_2 + 0x70u));
    wrf32d(param_1 + 0x3cu, (f64)rdf32(param_2 + 0x3cu));
    wrf32d(param_1 + 0x40u, (f64)rdf32(param_2 + 0x40u));
    wrf32d(param_1 + 0x4cu, (f64)rdf32(param_2 + 0x4cu));
    wrf32d(param_1 + 0x60u, (f64)rdf32(param_2 + 0x60u));
    wrf32d(param_1 + 0x64u, (f64)rdf32(param_2 + 0x64u));
    wr16(param_1 + 0x74u, rd16(param_2 + 0x74u));
    wr8(param_1 + 0x76u, rd8(param_2 + 0x76u));
    wr8(param_1 + 0x77u, rd8(param_2 + 0x77u));
    wr8(param_1 + 0x78u, rd8(param_2 + 0x78u));
    wr8(param_1 + 0x7du, 0u);
    return;
}
