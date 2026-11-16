#include "tc_rt.h"

static u64 px_f2b(f64 x)
{
    union { f64 d; u64 b; } v;
    v.d = x;
    return v.b;
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

void fn_8004e310(f64 param_1, f64 param_2, u32 param_3, u32 param_4)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_hi(0.0));
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_hi(0.0));
    wrf32d(0x817fdfe8u, px_lo(0.0));
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd0u, 0u);
    r3 = tc_call(0x8004d970u, &a);
    r30 = r3;
    wr32(0x803c6598u, param_3);
    r0 = (u32)rd8(0x803c65a4u);
    wrf32d(0x803c659cu, param_1);
    r5 = 0u;
    c0eq = r0 == 0u;
    r8 = (u32)rd8(0x803c65a6u);
    wrf32d(0x803c65a0u, param_2);
    r7 = (u32)rd8(0x803c65a7u);
    wr8(0x803c65a5u, (u8)param_4);
    r6 = (u32)rd8(0x803c65a8u);
    r9 = (u32)rd16(r3 + 0xf4u);
    r3 = (u32)rd16(r3 + 0xf0u);
    r0 = (u32)rd8(0x803c65a9u);
    r9 = (r9 >> 1u) & 0x7fffffffu;
    wr8(0x817fdfc8u, (u8)r8);
    r29 = r9 + r3;
    wr8(0x817fdfc9u, (u8)r7);
    wr8(0x817fdfcau, (u8)r6);
    wr8(0x817fdfcbu, (u8)r0);
    if (!c0eq) {
        r5 = param_3;
    }
    a.f[0] = (f64)rdf32(0x803c659cu);
    a.f[1] = (f64)rdf32(0x803c65a0u);
    a.f[2] = (f64)rdf32(r30 + 0xe0u);
    a.f[3] = (f64)rdf32(r30 + 0xe4u);
    a.r[0] = r5;
    a.r[1] = 0x817fdfc8u;
    (void)tc_call(0x802539e0u, &a);
    a.r[0] = 0x803c65aau;
    a.r[1] = (u32)rd16(r30 + 0xf4u);
    a.r[2] = r30 + 0x58u;
    (void)tc_call(0x80253c38u, &a);
    a.r[0] = param_4 & 0xffu;
    a.r[1] = r29 & 0xffffu;
    a.r[2] = 0x803c65aau;
    (void)tc_call(0x80253d98u, &a);
    return;
}
