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

u32 fn_803120b4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0;
    TcArgs a = {0};
    f4 = rdf64(0x80577880u);
    r31 = (u32)param_2 + 8u;
    f3 = (f64)rdf32(0x80577878u);
    f2 = rdf64(0x80577888u);
    f0 = (f64)rdf32(0x8057787cu);
    wr32((u32)param_1 + 0xe4u, 0u);
    wr32((u32)param_1 + 0xcu, 1u);
    wr32((u32)param_1 + 0xb8u, (u32)param_2);
    wr32((u32)param_1 + 0xb4u, 0u);
    wr16((u32)param_1 + 0xe8u, rd16((u32)param_2 + 0x1eu));
    wr32((u32)param_1 + 0x20u, rd32(r31));
    wr32((u32)param_1 + 0x24u, rd32(r31 + 4u));
    wr16((u32)param_1 + 0x3cu, rd16(r31 + 8u));
    wr16((u32)param_1 + 0xdeu, rd16(r31 + 0x14u));
    wr16((u32)param_1 + 0xe0u, 0u);
    wrf32d((u32)param_1 + 0x44u, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)rd8(r31 + 0x85u) | 0x4330000000000000ull) - f4), f3));
    wrf32d((u32)param_1 + 0x40u, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)rd8(r31 + 0x84u) | 0x4330000000000000ull) - f4), f3));
    wrf32d((u32)param_1 + 0x48u, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)rd8(r31 + 0x86u) | 0x4330000000000000ull) - f4), f3));
    wrf32d((u32)param_1 + 0x28u, (f64)rdf32(r31 + 0x10u));
    wrf32d((u32)param_1 + 0x2cu, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)((u32)(s8)rd8(r31 + 0xfu) ^ 0x80000000u) | 0x4330000000000000ull) - f2), f3));
    wr16((u32)param_1 + 0x30u, rd16(r31 + 0x18u));
    wr16((u32)param_1 + 0x32u, rd16(r31 + 0x34u));
    r4 = (u32)(s8)rd8(r31 + 0xeu);
    wrf32d((u32)param_1 + 0x38u, f0);
    r4 = r4 ^ 0x80000000u;
    wr8((u32)param_1 + 0xdcu, 1u);
    wrf32d((u32)param_1 + 0x34u, (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f2), f3));
    wrf32d((u32)param_1 + 0x90u, (f64)rdf32(r31 + 0x78u));
    wrf32d((u32)param_1 + 0x94u, (f64)rdf32(r31 + 0x7cu));
    wrf32d((u32)param_1 + 0x98u, (f64)rdf32(r31 + 0x80u));
    wrf32d((u32)param_1 + 0x9cu, (f64)rdf32(r31 + 0x60u));
    wrf32d((u32)param_1 + 0xa0u, (f64)rdf32(r31 + 0x64u));
    wrf32d((u32)param_1 + 0xa4u, (f64)rdf32(r31 + 0x68u));
    wrf32d((u32)param_1 + 0xa8u, (f64)rdf32(r31 + 0x6cu));
    wrf32d((u32)param_1 + 0xacu, (f64)rdf32(r31 + 0x70u));
    wrf32d((u32)param_1 + 0xb0u, (f64)rdf32(r31 + 0x74u));
    wr8((u32)param_1 + 0x64u, 3u);
    wr8((u32)param_1 + 0x65u, 0x64u);
    wr8((u32)param_1 + 0x66u, rd8(r31 + 0x36u));
    wr8((u32)param_1 + 0x67u, rd8(r31 + 0x37u));
    wrf32d((u32)param_1 + 0x68u, (f64)rdf32(r31 + 0x38u));
    wrf32d((u32)param_1 + 0x6cu, (f64)rdf32(r31 + 0x3cu));
    wrf32d((u32)param_1 + 0x70u, (f64)rdf32(r31 + 0x40u));
    wrf32d((u32)param_1 + 0x74u, (f64)rdf32(r31 + 0x44u));
    wrf32d((u32)param_1 + 0x78u, (f64)rdf32(r31 + 0x48u));
    wrf32d((u32)param_1 + 0x7cu, (f64)rdf32(r31 + 0x4cu));
    wrf32d((u32)param_1 + 0x80u, (f64)rdf32(r31 + 0x50u));
    wrf32d((u32)param_1 + 0x84u, (f64)rdf32(r31 + 0x54u));
    wrf32d((u32)param_1 + 0x88u, (f64)rdf32(r31 + 0x58u));
    wrf32d((u32)param_1 + 0x8cu, (f64)rdf32(r31 + 0x5cu));
    f1 = tc_callf(0x8031f650u, &a);
    r3 = rd32(r31 + 0x88u);
    wr16((u32)param_1 + 0xeau, (u16)r3);
    if ((r3 & 0xffffu) == 0u) {
        r4 = rd32((u32)param_3 + 0x20u) + 0x10000u;
        r0 = (rd32(r4 - 0x3fe4u) * 0x343fdu) + 0x269ec3u;
        wr32(r4 - 0x3fe4u, r0);
        r0 = (r0 >> 0x10u) & 0xffffu;
        wr16((u32)param_1 + 0xeau, (u16)r0);
    }
    wr32((u32)param_1 + 0xecu, (u32)rd16((u32)param_1 + 0xeau));
    wrf32d((u32)param_1 + 0x4cu, (f64)rdf32(r31 + 0x1cu));
    wrf32d((u32)param_1 + 0x50u, (f64)rdf32(r31 + 0x20u));
    wrf32d((u32)param_1 + 0x54u, (f64)rdf32(r31 + 0x24u));
    wrf32d((u32)param_1 + 0x58u, (f64)rdf32(r31 + 0x28u));
    wrf32d((u32)param_1 + 0x5cu, (f64)rdf32(r31 + 0x2cu));
    wrf32d((u32)param_1 + 0x60u, (f64)rdf32(r31 + 0x30u));
    wr8((u32)param_1 + 0x120u, 1u);
    wr32((u32)param_1 + 0xf8u, 0u);
    r3 = rd32(rd32((u32)param_3 + 0x20u) + 0xcu);
    a.r[0] = r3;
    a.r[1] = rd32(r31 + 4u) & 0xffu;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 8u), &a);
    wr32((u32)param_1 + 0xf0u, r3);
    wr32((u32)param_1 + 0xf4u, 0u);
    wr32((u32)param_1 + 0xbcu, 0u);
    return 1u;
}
