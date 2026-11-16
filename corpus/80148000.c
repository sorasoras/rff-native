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

u32 fn_80148000(f64 param_1, f64 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r6 = 0, r7 = 0, r8 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f6 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, 0.0);
    wrf32d(0x817fdffcu, 0.0);
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, 0.0);
    wrf32d(0x817fdfecu, 0.0);
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, 0.0);
    wrf32d(0x817fdfdcu, 0.0);
    r0 = rd32(param_4 + 4u);
    wr32(0x817fdfccu, 0u);
    f3 = (f64)rdf32(param_3);
    wr32(0x817fdfc8u, 0u);
    f2 = (f64)rdf32(0x80574634u);
    f0 = (f64)rdf32(0x805745f0u);
    wr32(0x817fdfb4u, r0);
    f31 = (f64)(f32)(f2 * f3);
    r8 = rd32(param_4 + 8u);
    r7 = rd32(param_5);
    r6 = rd32(param_5 + 4u);
    r0 = rd32(param_5 + 8u);
    f1 = (f64)rdf32(param_3 + 4u);
    f30 = (f64)rdf32(param_4 + 4u);
    wr32(0x817fdfb0u, rd32(param_4));
    wr32(0x817fdfb8u, r8);
    wrf32d(0x817fdfb4u, f0);
    wrf32d(0x817fdfacu, f0);
    wrf32d(0x817fdfa8u, f0);
    wrf32d(0x817fdfa4u, f0);
    wr32(0x817fdf80u, r7);
    wr32(0x817fdf84u, r6);
    wr32(0x817fdf88u, r0);
    a.f[0] = f1;
    a.r[0] = 0x817fdf80u;
    a.r[1] = 0x817fdf80u;
    (void)tc_call(0x802343c8u, &a);
    f1 = (f64)rdf32(0x817fdf84u);
    f0 = (f64)rdf32(0x817fdf88u);
    r7 = rd32(0x817fdfb0u);
    r6 = rd32(0x817fdfb4u);
    r0 = rd32(0x817fdfb8u);
    wrf32d(0x817fdfa4u, (f64)rdf32(0x817fdf80u));
    wrf32d(0x817fdfa8u, f1);
    wrf32d(0x817fdfacu, f0);
    wr32(0x817fdf74u, r7);
    wr32(0x817fdf78u, r6);
    wr32(0x817fdf7cu, r0);
    a.r[0] = 0x817fdf74u;
    a.r[1] = 0x817fdfa4u;
    a.r[2] = 0x817fdf74u;
    (void)tc_call(0x80234380u, &a);
    f1 = (f64)rdf32(0x817fdf74u);
    f2 = (f64)rdf32(0x817fdf7cu);
    f0 = (f64)rdf32(0x817fdf78u);
    r0 = rd32(0x80471a18u) * 0x4150u;
    wrf32d(0x817fdfa4u, f1);
    wrf32d(0x817fdfa8u, f0);
    wrf32d(0x817fdfacu, f2);
    a.f[0] = f1;
    a.f[1] = f2;
    a.r[0] = r0 - 0x7fb92738u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    f1 = tc_callf(0x80089fc8u, &a);
    f0 = (f64)rdf32(0x80574620u);
    if ((f1 > f0) || (f1 == f0)) {
        f1 = (f64)rdf32(0x805745f0u);
    }
    f1 = (f64)(f32)(f1 + param_2);
    f0 = (f64)rdf32(0x805745f0u);
    r7 = rd32(0x817fdfa4u);
    r6 = rd32(0x817fdfa8u);
    r0 = rd32(0x817fdfacu);
    f30 = (f64)(f32)(f1 - f30);
    wrf32d(0x817fdfa0u, f0);
    wrf32d(0x817fdf9cu, f0);
    wrf32d(0x817fdf98u, f0);
    wr32(0x817fdf68u, r7);
    wr32(0x817fdf6cu, r6);
    wr32(0x817fdf70u, r0);
    a.r[0] = 0x817fdf68u;
    a.r[1] = 0x817fdfb0u;
    a.r[2] = 0x817fdf68u;
    (void)tc_call(0x802343a4u, &a);
    f0 = (f64)rdf32(0x805745f0u);
    f4 = (f64)rdf32(0x817fdf6cu);
    f1 = -(f64)rdf32(param_3 + 8u);
    f3 = (f64)rdf32(0x817fdf70u);
    f2 = rdf64(0x80574618u) * f31 * f31;
    f6 = (f64)rdf32(param_3 + 0xcu);
    wrf32d(0x817fdf98u, (f64)rdf32(0x817fdf68u));
    wrf32d(0x817fdf9cu, f4);
    wrf32d(0x817fdfa0u, f3);
    f30 = px_fdiv(-((f2 * f1 * f6) - f30), f31);
    f30 = (f64)(f32)f30;
    if (f0 != f31) {
        a.f[0] = (f64)(f32)px_fdiv((f64)rdf32(0x805745f4u), f31);
        a.r[0] = 0x817fdf98u;
        a.r[1] = 0x817fdf98u;
        (void)tc_call(0x802343c8u, &a);
    }
    f1 = (f64)rdf32(0x805745f0u);
    f2 = -(f64)rdf32(param_3 + 8u);
    wrf32d(0x817fdf9cu, f30);
    f3 = (f64)rdf32(param_3 + 0xcu);
    wrf64(0x817fdfc0u, px_ctiw(f31, ppc_fctiwz(f31)));
    wrf32d(param_6 + 0xcu, f1);
    r0 = rd32(0x817fdfc4u);
    wrf32d(param_6 + 0x10u, (f64)(f32)f2);
    wrf32d(param_6 + 0x14u, f1);
    f0 = (f64)rdf32(0x817fdf98u);
    wrf32d(0x817fdf8cu, f1);
    wrf32d(param_6, f0);
    f0 = (f64)rdf32(0x817fdf9cu);
    wrf32d(0x817fdf90u, f2);
    wrf32d(param_6 + 4u, f0);
    f0 = (f64)rdf32(0x817fdfa0u);
    wrf32d(0x817fdf94u, f1);
    wrf32d(param_6 + 8u, f0);
    wr32(param_6 + 0x1cu, r0);
    wrf32d(param_6 + 0x18u, f3);
    return 1u;
}
