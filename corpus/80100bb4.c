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

void fn_80100bb4(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0;
    f64 f0 = 0.0, f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    a.r[0] = 0x817fdfdcu;
    a.r[1] = param_1;
    (void)tc_call(0x80100dc4u, &a);
    wrf32d(0x817fdfc8u, (f64)rdf32(0x817fdfdcu));
    a.r[0] = 0x817fdfd0u;
    a.r[1] = param_1;
    f1 = tc_callf(0x80100dc4u, &a);
    wrf32d(0x817fdfccu, (f64)rdf32(0x817fdfd4u));
    r3 = rd32(param_1);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.r[2] = 0u;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(r3) + 0x68u), &a);
    r0 = (u32)rd16(r3 + 0x1au);
    wr16(0x817fdfc0u, rd16(r3 + 0x18u));
    wr16(0x817fdfc2u, (u16)r0);
    r0 = (u32)rd16(r3 + 0x1eu);
    wr16(0x817fdfc4u, rd16(r3 + 0x1cu));
    wr16(0x817fdfc6u, (u16)r0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfc0u;
    r3 = tc_call(0x80100674u, &a);
    wr8(0x817fdfbbu, (u8)r3);
    wr8(0x817fdfb8u, (u8)((r3 >> 0x18u) & 0xffu));
    wr8(0x817fdfb9u, (u8)((r3 >> 0x10u) & 0xffu));
    wr8(0x817fdfbau, (u8)((r3 >> 8u) & 0xffu));
    wr32(0x817fdfbcu, rd32(0x817fdfb8u));
    a.r[0] = param_1;
    r3 = tc_call(0x801010c4u, &a);
    wr8(0x817fdfbfu, (u8)r3);
    a.r[0] = param_1;
    (void)tc_call(0x80100f50u, &a);
    wrf32d(0x804d90e8u, (f64)rdf32(param_1 + 0x18u));
    wrf32d(0x804d90ecu, (f64)rdf32(param_1 + 0x1cu));
    a.r[0] = 0x804d90f0u;
    a.r[1] = 0x817fdfbcu;
    a.r[2] = 4u;
    (void)tc_call(0x80004338u, &a);
    a.r[0] = 0x804d9048u;
    a.r[1] = param_2;
    (void)tc_call(0x80194634u, &a);
    f0 = (f64)rdf32(rd32(param_1) + 0x4cu);
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdfe8u, f0);
    a.r[0] = 0x804d9048u;
    a.r[1] = rd32(0x817fdfecu);
    (void)tc_call(0x801946d0u, &a);
    a.r[0] = 0x804d9048u;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = 0x817fdfc8u;
    (void)tc_call(0x80194990u, &a);
    return;
}
