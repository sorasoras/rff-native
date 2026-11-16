#include "tc_rt.h"

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

void fn_801ec7c4(s32 param_1, u32 param_r4)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    (void)tc_call(0x801ecd78u, &a);
    a.r[0] = (u32)param_1;
    a.r[1] = rd32((u32)param_1 + 4u);
    r3 = tc_call(0x801ecd64u, &a);
    r6 = rd32((u32)param_1 + 4u);
    r29 = r3;
    c0eq = rd32(r3 + 0x18u) == 0u;
    r28 = rd32((u32)param_1 + 8u) + ((r6 << 5u) & 0xffffffe0u);
    r3 = rd32((u32)param_1 + 0xcu) + (r6 * 0xcu);
    if (!c0eq) {
        r0 = (u32)((s32)(ppc_mulhw(-2004318071, (s32)r6) + r6) >> 3);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0xfu;
        a.r[0] = r3;
        a.r[1] = r6 - r0;
        (void)tc_call(0x8025279cu, &a);
    }
    a.r[0] = r28;
    a.r[1] = 0u;
    (void)tc_call(0x80252720u, &a);
    r5 = rd32(r29 + 0x14u);
    f2 = rdf64(0x80576478u);
    r3 = rd32((u32)param_1 + 0x5cu);
    f0 = px_b2f((u64)rd16(r5 + 0xau) | 0x4330000000000000ull);
    wrf32d(0x817fdfb8u, (f64)(f32)(px_b2f((u64)rd16(r5 + 8u) | 0x4330000000000000ull) - f2));
    f0 = (f64)(f32)(f0 - f2);
    wrf32d(0x817fdfbcu, f0);
    a.r[0] = r3;
    (void)tc_call(0x80100f50u, &a);
    a.r[0] = rd32((u32)param_1 + 0x5cu);
    r3 = tc_call(0x80100fd8u, &a);
    f0 = (f64)(f32)((f64)rdf32(0x817fdfb8u) * (f64)px_w2f(r3));
    r3 = rd32((u32)param_1 + 0x5cu);
    wrf32d(0x817fdfb8u, f0);
    a.r[0] = r3;
    (void)tc_call(0x80100fd8u, &a);
    f1 = (f64)rdf32(0x80576468u);
    f0 = (f64)rdf32(0x80576470u);
    f6 = (f64)(f32)((f64)rdf32(0x817fdfbcu) * (f64)px_w2f(tc_lastr4()));
    f3 = (f64)rdf32(param_r4 + 4u);
    f5 = (f64)rdf32(param_r4);
    f4 = (f64)(f32)(f5 - (f64)rdf32(0x817fdfb8u));
    wrf32d(0x817fdfbcu, f6);
    wrf32d(0x817fdfd0u, f4);
    wrf32d(0x817fdfd4u, (f64)(f32)(f3 + f6));
    wrf32d(0x817fdfc0u, f1);
    wrf32d(0x817fdfc4u, f1);
    wrf32d(0x817fdfc8u, f0);
    wrf32d(0x817fdfccu, f0);
    a.r[0] = 0x98u;
    a.r[1] = 0u;
    a.r[2] = 4u;
    (void)tc_call(0x80250b74u, &a);
    f0 = (f64)px_w2f(ppc_single_bits(f5));
    f1 = (f64)px_w2f(ppc_single_bits(f3));
    wrf32d(0xcc008000u, f0);
    f2 = (f64)rdf32(0x817fdfc8u);
    wrf32d(0xcc008000u, f1);
    f3 = (f64)rdf32(0x817fdfccu);
    r6 = (u32)rd8((u32)param_1 + 0x13u);
    r5 = (u32)rd8((u32)param_1 + 0x12u);
    r4 = (u32)rd8((u32)param_1 + 0x11u);
    f4 = (f64)rdf32(0x817fdfd4u);
    wr8(0xcc008000u, rd8((u32)param_1 + 0x10u));
    f5 = (f64)rdf32(0x817fdfc4u);
    wr8(0xcc008000u, (u8)r4);
    f6 = (f64)rdf32(0x817fdfd0u);
    wr8(0xcc008000u, (u8)r5);
    f7 = (f64)rdf32(0x817fdfc0u);
    wr8(0xcc008000u, (u8)r6);
    wrf32d(0xcc008000u, f2);
    wrf32d(0xcc008000u, f3);
    wrf32d(0xcc008000u, f0);
    wrf32d(0xcc008000u, f4);
    r6 = (u32)rd8((u32)param_1 + 0x13u);
    r5 = (u32)rd8((u32)param_1 + 0x12u);
    r4 = (u32)rd8((u32)param_1 + 0x11u);
    wr8(0xcc008000u, rd8((u32)param_1 + 0x10u));
    wr8(0xcc008000u, (u8)r4);
    wr8(0xcc008000u, (u8)r5);
    wr8(0xcc008000u, (u8)r6);
    wrf32d(0xcc008000u, f2);
    wrf32d(0xcc008000u, f5);
    wrf32d(0xcc008000u, f6);
    wrf32d(0xcc008000u, f1);
    r6 = (u32)rd8((u32)param_1 + 0x13u);
    r5 = (u32)rd8((u32)param_1 + 0x12u);
    r4 = (u32)rd8((u32)param_1 + 0x11u);
    wr8(0xcc008000u, rd8((u32)param_1 + 0x10u));
    wr8(0xcc008000u, (u8)r4);
    wr8(0xcc008000u, (u8)r5);
    wr8(0xcc008000u, (u8)r6);
    wrf32d(0xcc008000u, f7);
    wrf32d(0xcc008000u, f3);
    wrf32d(0xcc008000u, f6);
    wrf32d(0xcc008000u, f4);
    r6 = (u32)rd8((u32)param_1 + 0x13u);
    r5 = (u32)rd8((u32)param_1 + 0x12u);
    r4 = (u32)rd8((u32)param_1 + 0x11u);
    wr8(0xcc008000u, rd8((u32)param_1 + 0x10u));
    wr8(0xcc008000u, (u8)r4);
    wr8(0xcc008000u, (u8)r5);
    wr8(0xcc008000u, (u8)r6);
    wrf32d(0xcc008000u, f7);
    wrf32d(0xcc008000u, f5);
    return;
}
