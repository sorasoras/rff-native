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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_801cf5a4(f64 param_1, u32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0, r5 = 0, r7 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f31 = (f64)rdf32(param_2 + 0xd84u);
    a.r[0] = param_2;
    a.r[1] = param_3;
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.f[0] = param_1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x128u), &a);
    r3 = r3 ^ 0x80000000u;
    f30 = (f64)(f32)((f64)(f32)(px_b2f((u64)r3 | 0x4330000000000000ull) - rdf64(0x80575ec0u)) * (f64)(f32)((f64)rdf32(0x80575f20u) * f31));
    a.f[0] = (f64)rdf32(0x80575ea8u);
    a.r[0] = 0xffffffffu;
    a.r[1] = 1u;
    r3 = tc_call(0x8017748cu, &a);
    r31 = r3;
    if (r3 != 0u) {
        f31 = (f64)rdf32(param_2 + 0xe1cu);
        f1 = tc_callf(0x80040a00u, &a);
        f0 = (f64)(f32)((f64)rdf32(0x80575f38u) * f1);
        c0lt = f0 < f31;
        if (((((c0lt << 0x1fu) | ((f0 > f31) << 0x1eu) | ((c0lt || (f0 == f31)) << 0x1du) | (((f0 != f0) || (f31 != f31)) << 0x1cu)) >> 0x1du) & 1u) != 0u) {
            wr32(r31 + 0x124u, 0x2208085u);
        } else {
            wr32(r31 + 0x124u, 0x208085u);
        }
        f3 = (f64)rdf32(param_3);
        wrf32d(r31 + 0x100u, f3);
        f1 = (f64)rdf32(0x80575ea8u);
        f2 = (f64)rdf32(param_3 + 4u);
        wrf32d(r31 + 0x104u, f2);
        f0 = (f64)rdf32(param_3 + 8u);
        wrf32d(r31 + 0x108u, f0);
        wrf32d(r31 + 8u, f3);
        wrf32d(r31 + 0xcu, f2);
        wrf32d(r31 + 0x10u, f0);
        wr32(r31 + 0x14cu, 0xffffffffu);
        r7 = (u32)rd8(r31 + 0x1a4u);
        wr32(r31 + 0x160u, 0x6au);
        r7 = r7 | 0x80u;
        wr32(r31 + 0x150u, 0xfc0u);
        r5 = (r7 & 0xffffffbfu) | 0x20u;
        wr8(r31 + 0x1a4u, (u8)r5);
        r5 = r5 | 0x10u;
        wrf32d(r31 + 0x128u, f1);
        wrf32d(r31 + 0x12cu, f1);
        wrf32d(r31 + 0x134u, (f64)rdf32(param_2 + 0xdb4u));
        wr32(r31 + 0x148u, (u32)px_f2b(px_ctiw(param_1, ppc_fctiwz(param_1))));
        wr8(r31 + 0x1a4u, (u8)r5);
        a.r[0] = r31;
        a.r[1] = 0u;
        f1 = tc_callf(0x80177d54u, &a);
        wr32(r31 + 0x64u, rd32(r31 + 0x64u) | 0x20000000u);
        wrf32d(r31 + 0x130u, f30);
        wrf32d(r31 + 0x24u, f30);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x100u), &a);
        f1 = tc_lastf();
        wr8(r31 + 0x28u, (u8)r3);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x108u), &a);
        f1 = tc_lastf();
        wr8(r31 + 0x29u, (u8)r3);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x110u), &a);
        f1 = tc_lastf();
        wr8(r31 + 0x2au, (u8)r3);
        a.r[0] = param_2;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        r3 = tc_call(rd32(rd32(param_2) + 0x118u), &a);
        wr8(r31 + 0x2bu, (u8)r3);
        wrf32d(r31 + 0x174u, (f64)rdf32(0x80575ea8u));
    }
    return;
}
