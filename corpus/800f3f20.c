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

static f32 px_w2f(u32 x)
{
    union { f32 f; u32 w; } v;
    v.w = x;
    return v.f;
}

static f64 px_hi(f64 x)
{
    return (f64)px_w2f((u32)(px_f2b(x) >> 32));
}

static f64 px_lo(f64 x)
{
    return (f64)px_w2f((u32)px_f2b(x));
}

static f64 px_pack(f64 a, f64 b)
{
    return px_b2f(((u64)ppc_single_bits(a) << 32) | (u64)ppc_single_bits(b));
}

void fn_800f3f20(u32 param_r3)
{
    u32 fl_ = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r31 = 0, t10 = 0;
    f64 f1 = 0.0, f2 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf50u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    r27 = rd32(param_r3 + 0x70u);
    r31 = 0u;
    r25 = 0u;
    r26 = rd32(r27 + 0x34u);
    for (;;) {
        if (r25 >= r26) {
            fl_ = 1u;
            break;
        }
        r28 = rd32(r27 + 0x38u) + (rd32(r27 + 0x3cu) * r25);
        a.r[0] = rd32(r28 + 0x3cu);
        a.r[1] = 0x80338fb0u;
        r3 = tc_call(0x8025beb0u, &a);
        r4 = tc_lastr4();
        if (r3 == 0u) {
            fl_ = 2u;
            break;
        }
        r25 = r25 + 1u;
    }
    do {
        if (fl_ == 2u) {
            fl_ = 0u;
        } else if (fl_ == 1u) {
            fl_ = 0u;
            break;
        }
        r3 = rd32(r28 + 0x54u);
        r31 = 1u;
        f1 = px_pack((f64)rdf32(r3), (f64)rdf32(r3));
        f2 = px_pack((f64)rdf32(r3 + 8u), 1.0);
        wrf32d(0x817fdf7cu, px_hi(f1));
        wrf32d(0x817fdf7cu, px_lo(f1));
        wrf32d(0x817fdf84u, px_hi(f2));
        a.r[0] = param_r3;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
        r6 = rd32(0x817fdf80u);
        r0 = rd32(0x817fdf84u);
        wr32(0x817fdfacu, rd32(0x817fdf7cu));
        wr32(0x817fdfb0u, r6);
        wr32(0x817fdfb4u, r0);
        a.r[0] = 0x817fdfacu;
        a.r[1] = r3;
        a.r[2] = 0x817fdfacu;
        (void)tc_call(0x80234380u, &a);
        r3 = rd32(r28 + 0x54u);
        t10 = r3 + 0xcu;
        f1 = px_pack((f64)rdf32(t10), (f64)rdf32(t10));
        f2 = px_pack((f64)rdf32(r3 + 0x14u), 1.0);
        wrf32d(0x817fdf70u, px_hi(f1));
        wrf32d(0x817fdf70u, px_lo(f1));
        wrf32d(0x817fdf78u, px_hi(f2));
        a.r[0] = param_r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
        r6 = rd32(0x817fdf74u);
        r0 = rd32(0x817fdf78u);
        wr32(0x817fdfa0u, rd32(0x817fdf70u));
        wr32(0x817fdfa4u, r6);
        wr32(0x817fdfa8u, r0);
        a.r[0] = 0x817fdfa0u;
        a.r[1] = r3;
        a.r[2] = 0x817fdfa0u;
        f1 = tc_callf(0x80234380u, &a);
        a.r[0] = param_r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(param_r3) + 0x2cu), &a);
        a.r[0] = param_r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(param_r3) + 0x2cu), &a);
        a.r[0] = param_r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
        a.f[0] = f1;
        a.r[0] = param_r3 + 0xacu;
        a.r[1] = r3;
        a.r[2] = 0x817fdfacu;
        a.r[3] = 0x817fdfa0u;
        (void)tc_call(0x800ca4dcu, &a);
        wr32(param_r3 + 0xc4u, 0u);
    } while (0);
    if (r31 == 0u) {
        a.r[0] = rd32(param_r3 + 0x70u);
        a.r[1] = 0x817fdfb8u;
        (void)tc_call(0x80031998u, &a);
        f1 = px_pack((f64)rdf32(0x817fdfb8u), (f64)rdf32(0x817fdfb8u));
        f2 = px_pack((f64)rdf32(0x817fdfc0u), 1.0);
        wrf32d(0x817fdf64u, px_hi(f1));
        wrf32d(0x817fdf64u, px_lo(f1));
        wrf32d(0x817fdf6cu, px_hi(f2));
        a.r[0] = param_r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
        r6 = rd32(0x817fdf68u);
        r0 = rd32(0x817fdf6cu);
        wr32(0x817fdf94u, rd32(0x817fdf64u));
        wr32(0x817fdf98u, r6);
        wr32(0x817fdf9cu, r0);
        a.r[0] = 0x817fdf94u;
        a.r[1] = r3;
        a.r[2] = 0x817fdf94u;
        (void)tc_call(0x80234380u, &a);
        f1 = px_pack((f64)rdf32(0x817fdfc4u), (f64)rdf32(0x817fdfc4u));
        f2 = px_pack((f64)rdf32(0x817fdfccu), 1.0);
        wrf32d(0x817fdf58u, px_hi(f1));
        wrf32d(0x817fdf58u, px_lo(f1));
        wrf32d(0x817fdf60u, px_hi(f2));
        a.r[0] = param_r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = f2;
        r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
        r6 = rd32(0x817fdf5cu);
        r0 = rd32(0x817fdf60u);
        wr32(0x817fdf88u, rd32(0x817fdf58u));
        wr32(0x817fdf8cu, r6);
        wr32(0x817fdf90u, r0);
        a.r[0] = 0x817fdf88u;
        a.r[1] = r3;
        a.r[2] = 0x817fdf88u;
        f1 = tc_callf(0x80234380u, &a);
        a.r[0] = param_r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        f1 = tc_callf(rd32(rd32(param_r3) + 0x2cu), &a);
        a.r[0] = param_r3;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.f[0] = f1;
        a.f[1] = 0.0;
        r3 = tc_call(rd32(rd32(param_r3) + 0x28u), &a);
        a.f[0] = f1;
        a.r[0] = param_r3 + 0xacu;
        a.r[1] = r3;
        a.r[2] = 0x817fdf94u;
        a.r[3] = 0x817fdf88u;
        (void)tc_call(0x800ca4dcu, &a);
        wr32(param_r3 + 0xc4u, 0u);
    }
    a.r[0] = 0x8046d8c8u;
    a.r[1] = param_r3 + 0xacu;
    r3 = tc_call(0x8008c3f8u, &a);
    wr32(param_r3 + 0xd0u, r3);
    return;
}
