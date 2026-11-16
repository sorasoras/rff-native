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

void fn_801cf344(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0, r5 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe0u, 0u);
    f31 = (f64)rdf32(param_1 + 0xd80u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.f[0] = 0.0;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x128u), &a);
    r3 = r3 ^ 0x80000000u;
    wr32(0x817fdfdcu, r3);
    f0 = (f64)rdf32(0x80575f20u);
    wr32(0x817fdfd8u, 0x43300000u);
    f0 = (f64)(f32)(f0 * f31);
    f31 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfd8u) - rdf64(0x80575ec0u)) * f0);
    a.f[0] = (f64)rdf32(0x80575ea8u);
    a.r[0] = 0xffffffffu;
    a.r[1] = 1u;
    r3 = tc_call(0x8017748cu, &a);
    r31 = r3;
    if (r3 != 0u) {
        f2 = (f64)rdf32(0x80575f24u);
        wr32(r3 + 0x124u, 0x208085u);
        f6 = (f64)rdf32(0x80570984u);
        f5 = (f64)rdf32(param_2);
        f1 = (f64)rdf32(0x80575f3cu);
        wrf32d(r3 + 0x100u, f5);
        f0 = (f64)rdf32(0x80575ea8u);
        f4 = (f64)rdf32(param_2 + 4u);
        wrf32d(r3 + 0x104u, f4);
        f3 = (f64)rdf32(param_2 + 8u);
        wrf32d(r3 + 0x108u, f3);
        wrf32d(r3 + 8u, f5);
        wrf32d(r3 + 0xcu, f4);
        wrf32d(r3 + 0x10u, f3);
        r5 = (u32)rd8(r3 + 0x1a4u);
        wr32(r3 + 0x160u, 0x6au);
        wr8(r3 + 0x1a4u, (u8)(r5 | 0xe0u));
        wrf32d(r3 + 0x128u, f2);
        wrf32d(r3 + 0x12cu, f6);
        wrf32d(r3 + 0x134u, f1);
        wrf32d(0x817fdfd0u, f0);
        wrf32d(0x817fdfccu, f0);
        wrf32d(0x817fdfc8u, f0);
        a.r[0] = param_3;
        a.r[1] = 0x817fdfc8u;
        (void)tc_call(0x802343e4u, &a);
        a.f[0] = (f64)rdf32(0x817fdfc8u);
        a.f[1] = (f64)rdf32(0x817fdfd0u);
        f1 = tc_callf(0x80262c68u, &a);
        f1 = (f64)(f32)f1;
        if ((f64)rdf32(0x80575eacu) < f1) {
            a.f[0] = (f64)rdf32(0x817fdfc8u);
            a.f[1] = (f64)rdf32(0x817fdfd0u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f1 = (f64)(f32)(f1 - (f64)rdf32(0x80575eb0u));
        } else {
            a.f[0] = (f64)rdf32(0x817fdfc8u);
            a.f[1] = (f64)rdf32(0x817fdfd0u);
            f1 = tc_callf(0x80262c68u, &a);
            f1 = (f64)(f32)f1;
            f0 = (f64)rdf32(0x80575eb4u);
            if ((f0 > f1) || (f0 == f1)) {
                a.f[0] = (f64)rdf32(0x817fdfc8u);
                a.f[1] = (f64)rdf32(0x817fdfd0u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
                f1 = (f64)(f32)((f64)rdf32(0x80575eb0u) + f1);
            } else {
                a.f[0] = (f64)rdf32(0x817fdfc8u);
                a.f[1] = (f64)rdf32(0x817fdfd0u);
                f1 = tc_callf(0x80262c68u, &a);
                f1 = (f64)(f32)f1;
            }
        }
        f0 = (f64)(f32)((f64)rdf32(0x80575f40u) * f1);
        f0 = px_ctiw(f0, ppc_fctiwz(f0));
        wrf64(0x817fdfd8u, f0);
        wr16(r31 + 0x142u, (u16)rd32(0x817fdfdcu));
        wr32(r31 + 0x148u, 0x64u);
        wr8(r31 + 0x1a4u, (u8)((u32)rd8(r31 + 0x1a4u) | 0x10u));
        a.r[0] = r31;
        a.r[1] = 0u;
        f1 = tc_callf(0x80177d54u, &a);
        wr32(r31 + 0x64u, rd32(r31 + 0x64u) | 0x20000000u);
        wrf32d(r31 + 0x130u, f31);
        wrf32d(r31 + 0x24u, f31);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x100u), &a);
        f1 = tc_lastf();
        wr8(r31 + 0x28u, (u8)r3);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x108u), &a);
        f1 = tc_lastf();
        wr8(r31 + 0x29u, (u8)r3);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x110u), &a);
        f1 = tc_lastf();
        wr8(r31 + 0x2au, (u8)r3);
        a.r[0] = param_1;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        r3 = tc_call(rd32(rd32(param_1) + 0x118u), &a);
        wr8(r31 + 0x2bu, (u8)r3);
        wrf32d(r31 + 0x174u, (f64)rdf32(0x80575f38u));
    }
    return;
}
