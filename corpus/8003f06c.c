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

void fn_8003f06c(u32 param_r3)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x8003db90u, &a);
    r30 = r3;
    r3 = tc_call(0x8004ca64u, &a);
    r29 = r3;
    r3 = tc_call(0x8004d9acu, &a);
    r31 = r3;
    r3 = tc_call(0x8004d99cu, &a);
    r28 = r3;
    f0 = (f64)rdf32(0x80571fb8u);
    f1 = ppc_fmadds((f64)rdf32(r30 + 8u), (f64)rdf32(r31 + 8u), ppc_fmadds((f64)rdf32(r30), (f64)rdf32(r31), (f64)(f32)((f64)rdf32(r30 + 4u) * (f64)rdf32(r31 + 4u))));
    wr32(0x817fdfd4u, (u32)rd8(param_r3 + 3u));
    f3 = rdf64(0x80571fc8u);
    wr32(0x817fdfd0u, 0x43300000u);
    f1 = (f64)(f32)(f0 + f1);
    f0 = (f64)(f32)((f64)(f32)(rdf64(0x817fdfd0u) - f3) * (f64)(f32)((f64)rdf32(0x80571fc4u) * f1));
    f0 = px_ctiw(f0, ppc_fctiwz(f0));
    wrf64(0x817fdfd8u, f0);
    wr8(param_r3 + 3u, (u8)rd32(0x817fdfdcu));
    wrf32d(0x817fdf88u, (f64)(f32)((f64)rdf32(r31) + (f64)rdf32(r30)));
    wrf32d(0x817fdf8cu, (f64)(f32)((f64)rdf32(r31 + 4u) + (f64)rdf32(r30 + 4u)));
    wrf32d(0x817fdf90u, (f64)(f32)((f64)rdf32(r31 + 8u) + (f64)rdf32(r30 + 8u)));
    a.r[0] = 0x817fdf88u;
    a.r[1] = 0x817fdf88u;
    (void)tc_call(0x802343e4u, &a);
    a.r[0] = r28;
    a.r[1] = 0x817fdf88u;
    a.r[2] = 0x817fdf94u;
    (void)tc_call(0x80234484u, &a);
    a.r[0] = 0x817fdf94u;
    a.r[1] = 0x817fdf94u;
    (void)tc_call(0x802343e4u, &a);
    f1 = (f64)rdf32(0x817fdf88u);
    wrf32d(0x817fdfa0u, (f64)rdf32(0x817fdf94u));
    f0 = (f64)rdf32(0x817fdf98u);
    f3 = (f64)rdf32(0x817fdf8cu);
    wrf32d(0x817fdfb0u, (f64)rdf32(r28));
    f2 = (f64)rdf32(0x817fdf9cu);
    wrf32d(0x817fdfc0u, f1);
    f1 = (f64)rdf32(0x817fdf90u);
    wrf32d(0x817fdfa4u, f0);
    f0 = (f64)rdf32(0x80571fbcu);
    wrf32d(0x817fdfb4u, (f64)rdf32(r28 + 4u));
    wrf32d(0x817fdfc4u, f3);
    wrf32d(0x817fdfa8u, f2);
    wrf32d(0x817fdfb8u, (f64)rdf32(r28 + 8u));
    wrf32d(0x817fdfc8u, f1);
    wrf32d(0x817fdfacu, f0);
    wrf32d(0x817fdfbcu, f0);
    wrf32d(0x817fdfccu, f0);
    a.r[0] = 0x817fdfa0u;
    a.r[1] = r29;
    a.r[2] = 0x817fdfa0u;
    (void)tc_call(0x802337a0u, &a);
    a.r[0] = 0x817fdfa0u;
    a.r[1] = 0x817fdfa0u;
    (void)tc_call(0x80233964u, &a);
    a.r[0] = 0x803be640u;
    a.r[1] = 0x817fdfa0u;
    a.r[2] = 0x803be6d0u;
    (void)tc_call(0x802337a0u, &a);
    return;
}
