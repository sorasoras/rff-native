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

void fn_800547e8(u32 param_r3, u32 param_r4)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0, r14 = 0, r15 = 0;
    u32 r16 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0;
    u32 r28 = 0, r29 = 0, r30 = 0, t0 = 0, t6 = 0, t8 = 0, t14 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    r0 = rd32(param_r4 + 0x5cu);
    wr32(0x817fdfa8u, rd32(param_r4 + 0x64u));
    r15 = rd32(param_r4 + 0x68u);
    wr32(param_r3 + 0x5cu, r0);
    r0 = rd32(0x817fdfa8u);
    wr32(0x817fdf38u, r15);
    r15 = rd32(param_r4 + 0x6cu);
    wr32(param_r3 + 0x64u, r0);
    r0 = rd32(0x817fdf38u);
    wr32(0x817fdf3cu, r15);
    r15 = rd32(param_r4 + 0x70u);
    wr32(param_r3 + 0x68u, r0);
    r0 = rd32(0x817fdf3cu);
    wr32(0x817fdf40u, r15);
    r15 = rd32(param_r4 + 0x74u);
    wr32(param_r3 + 0x6cu, r0);
    r0 = rd32(0x817fdf40u);
    wr32(0x817fdf44u, r15);
    r15 = rd32(param_r4 + 0x78u);
    wr32(param_r3 + 0x70u, r0);
    r0 = rd32(0x817fdf44u);
    wr32(0x817fdf48u, r15);
    r15 = rd32(param_r4 + 0x7cu);
    wr32(param_r3 + 0x74u, r0);
    r0 = rd32(0x817fdf48u);
    wr32(0x817fdf4cu, r15);
    r15 = rd32(param_r4 + 0x80u);
    wr32(param_r3 + 0x78u, r0);
    r0 = rd32(0x817fdf4cu);
    wr32(0x817fdf50u, r15);
    r15 = rd32(param_r4 + 0x84u);
    wr32(param_r3 + 0x7cu, r0);
    r0 = rd32(0x817fdf50u);
    wr32(0x817fdf54u, r15);
    r15 = rd32(param_r4 + 0x88u);
    wr32(param_r3 + 0x80u, r0);
    r0 = rd32(0x817fdf54u);
    wr32(0x817fdf58u, r15);
    r15 = rd32(param_r4 + 0x8cu);
    wr32(param_r3 + 0x84u, r0);
    r0 = rd32(0x817fdf58u);
    wr32(0x817fdf5cu, r15);
    r15 = rd32(param_r4 + 0x90u);
    wr32(param_r3 + 0x88u, r0);
    r0 = rd32(0x817fdf5cu);
    wr32(0x817fdf60u, r15);
    r15 = rd32(param_r4 + 0x94u);
    wr32(param_r3 + 0x8cu, r0);
    r0 = rd32(0x817fdf60u);
    wr32(0x817fdf64u, r15);
    r15 = rd32(param_r4 + 0x98u);
    wr32(param_r3 + 0x90u, r0);
    r0 = rd32(0x817fdf64u);
    wr32(0x817fdf68u, r15);
    r15 = rd32(param_r4 + 0x9cu);
    wr32(param_r3 + 0x94u, r0);
    r0 = rd32(0x817fdf68u);
    wr32(0x817fdf6cu, r15);
    r15 = rd32(param_r4 + 0xa0u);
    wr32(param_r3 + 0x98u, r0);
    r0 = rd32(0x817fdf6cu);
    wr32(0x817fdf70u, r15);
    r15 = rd32(param_r4 + 0xa4u);
    wr32(param_r3 + 0x9cu, r0);
    r0 = rd32(0x817fdf70u);
    wr32(0x817fdf74u, r15);
    r15 = rd32(param_r4 + 0xa8u);
    wr32(param_r3 + 0xa0u, r0);
    r0 = rd32(0x817fdf74u);
    wr32(0x817fdf78u, r15);
    r15 = rd32(param_r4 + 0xacu);
    wr32(param_r3 + 0xa4u, r0);
    r0 = rd32(0x817fdf78u);
    wr32(0x817fdf7cu, r15);
    r15 = rd32(param_r4 + 0xb0u);
    wr32(param_r3 + 0xa8u, r0);
    r0 = rd32(0x817fdf7cu);
    wr32(0x817fdf80u, r15);
    r15 = rd32(param_r4 + 0xb4u);
    wr32(param_r3 + 0xacu, r0);
    r0 = rd32(0x817fdf80u);
    wr32(0x817fdf84u, r15);
    r15 = rd32(param_r4 + 0xb8u);
    wr32(param_r3 + 0xb0u, r0);
    r0 = rd32(0x817fdf84u);
    wr32(0x817fdf88u, r15);
    r15 = rd32(param_r4 + 0xbcu);
    wr32(param_r3 + 0xb4u, r0);
    r0 = rd32(0x817fdf88u);
    wr32(0x817fdf8cu, r15);
    r15 = rd32(param_r4 + 0xc0u);
    wr32(param_r3 + 0xb8u, r0);
    r0 = rd32(0x817fdf8cu);
    wr32(0x817fdf90u, r15);
    r15 = rd32(param_r4 + 0xc4u);
    wr32(param_r3 + 0xbcu, r0);
    r0 = rd32(0x817fdf90u);
    wr32(0x817fdf94u, r15);
    r15 = rd32(param_r4 + 0xc8u);
    wr32(param_r3 + 0xc0u, r0);
    r0 = rd32(0x817fdf94u);
    wr32(0x817fdf98u, r15);
    r15 = rd32(param_r4 + 0xccu);
    wr32(param_r3 + 0xc4u, r0);
    r0 = rd32(0x817fdf98u);
    wr32(0x817fdf9cu, r15);
    r15 = rd32(param_r4 + 0xd0u);
    wr32(param_r3 + 0xc8u, r0);
    r0 = rd32(0x817fdf9cu);
    wr32(0x817fdfa0u, r15);
    r15 = rd32(param_r4 + 0xd4u);
    wr32(param_r3 + 0xccu, r0);
    r16 = rd32(param_r4);
    r17 = rd32(param_r4 + 4u);
    r18 = rd32(param_r4 + 8u);
    r19 = rd32(param_r4 + 0xcu);
    r20 = rd32(param_r4 + 0x10u);
    r21 = rd32(param_r4 + 0x14u);
    r22 = rd32(param_r4 + 0x18u);
    r23 = rd32(param_r4 + 0x1cu);
    r24 = rd32(param_r4 + 0x20u);
    r25 = rd32(param_r4 + 0x24u);
    r26 = rd32(param_r4 + 0x28u);
    r27 = rd32(param_r4 + 0x2cu);
    r28 = rd32(param_r4 + 0x30u);
    r29 = rd32(param_r4 + 0x34u);
    r30 = rd32(param_r4 + 0x38u);
    r12 = rd32(param_r4 + 0x3cu);
    r11 = rd32(param_r4 + 0x40u);
    r10 = rd32(param_r4 + 0x44u);
    r9 = rd32(param_r4 + 0x48u);
    r8 = rd32(param_r4 + 0x4cu);
    r7 = rd32(param_r4 + 0x50u);
    r6 = rd32(param_r4 + 0x54u);
    r5 = rd32(param_r4 + 0x58u);
    r14 = rd32(param_r4 + 0x60u);
    wr32(param_r3 + 0xd0u, rd32(0x817fdfa0u));
    wr32(param_r3, r16);
    wr32(param_r3 + 4u, r17);
    wr32(param_r3 + 8u, r18);
    wr32(param_r3 + 0xcu, r19);
    wr32(param_r3 + 0x10u, r20);
    wr32(param_r3 + 0x14u, r21);
    wr32(param_r3 + 0x18u, r22);
    wr32(param_r3 + 0x1cu, r23);
    wr32(param_r3 + 0x20u, r24);
    wr32(param_r3 + 0x24u, r25);
    wr32(param_r3 + 0x28u, r26);
    wr32(param_r3 + 0x2cu, r27);
    wr32(param_r3 + 0x30u, r28);
    wr32(param_r3 + 0x34u, r29);
    wr32(param_r3 + 0x38u, r30);
    wr32(param_r3 + 0x3cu, r12);
    wr32(param_r3 + 0x40u, r11);
    wr32(param_r3 + 0x44u, r10);
    wr32(param_r3 + 0x48u, r9);
    wr32(param_r3 + 0x4cu, r8);
    wr32(param_r3 + 0x50u, r7);
    wr32(param_r3 + 0x54u, r6);
    wr32(param_r3 + 0x58u, r5);
    wr32(param_r3 + 0x60u, r14);
    wr32(param_r3 + 0xd4u, r15);
    r23 = (u32)(s16)rd16(param_r4 + 0xdau);
    f7 = (f64)rdf32(param_r4 + 0xdcu);
    f6 = (f64)rdf32(param_r4 + 0xe0u);
    f5 = (f64)rdf32(param_r4 + 0xe4u);
    f4 = (f64)rdf32(param_r4 + 0xe8u);
    f3 = (f64)rdf32(param_r4 + 0xecu);
    r22 = (u32)rd16(param_r4 + 0xf0u);
    r21 = (u32)rd16(param_r4 + 0xf2u);
    r20 = (u32)rd16(param_r4 + 0xf4u);
    r19 = (u32)rd16(param_r4 + 0xf6u);
    r18 = rd32(param_r4 + 0xf8u);
    f0 = (f64)rdf32(param_r4 + 0xfcu);
    r17 = rd32(param_r4 + 0x100u);
    r16 = rd32(param_r4 + 0x104u);
    r15 = rd32(param_r4 + 0x108u);
    r14 = rd32(param_r4 + 0x10cu);
    r12 = rd32(param_r4 + 0x110u);
    r11 = rd32(param_r4 + 0x114u);
    r10 = rd32(param_r4 + 0x118u);
    r9 = rd32(param_r4 + 0x11cu);
    r8 = rd32(param_r4 + 0x120u);
    r7 = rd32(param_r4 + 0x124u);
    r6 = rd32(param_r4 + 0x128u);
    r5 = rd32(param_r4 + 0x12cu);
    r0 = rd32(param_r4 + 0x130u);
    wr16(param_r3 + 0xd8u, rd16(param_r4 + 0xd8u));
    wr16(param_r3 + 0xdau, (u16)r23);
    wrf32d(param_r3 + 0xdcu, f7);
    wrf32d(param_r3 + 0xe0u, f6);
    wrf32d(param_r3 + 0xe4u, f5);
    wrf32d(param_r3 + 0xe8u, f4);
    wrf32d(param_r3 + 0xecu, f3);
    wr16(param_r3 + 0xf0u, (u16)r22);
    wr16(param_r3 + 0xf2u, (u16)r21);
    wr16(param_r3 + 0xf4u, (u16)r20);
    wr16(param_r3 + 0xf6u, (u16)r19);
    wr32(param_r3 + 0xf8u, r18);
    wrf32d(param_r3 + 0xfcu, f0);
    wr32(param_r3 + 0x100u, r17);
    wr32(param_r3 + 0x104u, r16);
    wr32(param_r3 + 0x108u, r15);
    wr32(param_r3 + 0x10cu, r14);
    wr32(param_r3 + 0x110u, r12);
    wr32(param_r3 + 0x114u, r11);
    wr32(param_r3 + 0x118u, r10);
    wr32(param_r3 + 0x11cu, r9);
    wr32(param_r3 + 0x120u, r8);
    wr32(param_r3 + 0x124u, r7);
    wr32(param_r3 + 0x128u, r6);
    wr32(param_r3 + 0x12cu, r5);
    wr32(param_r3 + 0x130u, r0);
    t0 = param_r3 + 4u;
    f1 = px_pack((f64)rdf32(t0), (f64)rdf32(t0));
    f2 = px_pack((f64)rdf32(param_r3 + 0xcu), 1.0);
    t6 = param_r3 + 0x134u;
    wrf32d(t6, px_hi(f1));
    wrf32d(t6, px_lo(f1));
    wrf32d(param_r3 + 0x13cu, px_hi(f2));
    t8 = param_r3 + 0x10u;
    f1 = px_pack((f64)rdf32(t8), (f64)rdf32(t8));
    f2 = px_pack((f64)rdf32(param_r3 + 0x18u), 1.0);
    t14 = param_r3 + 0x140u;
    wrf32d(t14, px_hi(f1));
    wrf32d(t14, px_lo(f1));
    wrf32d(param_r3 + 0x148u, px_hi(f2));
    a.r[0] = param_r3;
    (void)tc_call(0x8004cdecu, &a);
    wrf32d(param_r3 + 0xe4u, (f64)rdf32(0x80572324u));
    r3 = tc_call(0x8003ced8u, &a);
    if (r3 == 1u) {
        f0 = (f64)rdf32(0x80572334u);
    } else {
        f0 = (f64)rdf32(0x8057232cu);
    }
    wrf32d(param_r3 + 0xdcu, f0);
    return;
}
