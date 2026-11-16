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

static f64 px_pq(f64 x)
{
    u64 b = px_f2b(x);
    if ((b & 0x7ff0000000000000ull) == 0x7ff0000000000000ull && (b & 0x000fffffffffffffull) != 0)
        return px_b2f(b | 0x0008000000000000ull);
    return x;
}

static f64 px_padd(f64 a, f64 b)
{
    f64 r = a + b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

void fn_80035958(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f30 = 0.0, f31 = 0.0;
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
    a.r[0] = param_1;
    a.r[1] = 0u;
    r3 = tc_call(0x8004c670u, &a);
    r31 = r3;
    r3 = r3 + 0x20u;
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x80252494u, &a);
    a.r[0] = r31 + 0x20u;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x802524b0u, &a);
    a.r[0] = r31;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x8004b358u, &a);
    a.r[0] = 1u;
    (void)tc_call(0x8004ca7cu, &a);
    r4 = (u32)rd8(0x80571ea9u);
    r0 = (u32)rd8(0x80571eaau);
    wr8(0x817fdfc8u, rd8(0x80571ea8u));
    f31 = (f64)rdf32(0x80571eacu);
    wr8(0x817fdfc9u, (u8)r4);
    f30 = (f64)rdf32(0x80571eb0u);
    wr8(0x817fdfcau, (u8)r0);
    wr8(0x817fdfcbu, (u8)param_2);
    a.r[0] = 0x101u;
    (void)tc_call(0x8004cd5cu, &a);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = 0x101u;
    (void)tc_call(0x8003d05cu, &a);
    a.r[0] = 0x98u;
    a.r[1] = 7u;
    a.r[2] = 4u;
    (void)tc_call(0x80250b74u, &a);
    f1 = (f64)rdf32(0x803a3e90u);
    wrf32d(0xcc008000u, (f64)rdf32(0x803a3e8cu));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f31);
    wrf32d(0xcc008000u, (f64)rdf32(0x80571eacu));
    wrf32d(0xcc008000u, (f64)rdf32(0x80571eacu));
    f1 = (f64)rdf32(0x803a3e90u);
    wrf32d(0xcc008000u, (f64)(f32)px_padd((f64)rdf32(0x803a3e8cu), f30));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f31);
    wrf32d(0xcc008000u, (f64)rdf32(0x80571eb4u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80571eacu));
    f0 = (f64)(f32)px_padd((f64)rdf32(0x803a3e90u), f30);
    wrf32d(0xcc008000u, (f64)rdf32(0x803a3e8cu));
    wrf32d(0xcc008000u, f0);
    wrf32d(0xcc008000u, f31);
    wrf32d(0xcc008000u, (f64)rdf32(0x80571eacu));
    wrf32d(0xcc008000u, (f64)rdf32(0x80571eb4u));
    f1 = (f64)(f32)px_padd((f64)rdf32(0x803a3e90u), f30);
    wrf32d(0xcc008000u, (f64)(f32)px_padd((f64)rdf32(0x803a3e8cu), f30));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f31);
    wrf32d(0xcc008000u, (f64)rdf32(0x80571eb4u));
    wrf32d(0xcc008000u, (f64)rdf32(0x80571eb4u));
    a.r[0] = 0u;
    (void)tc_call(0x8004ca7cu, &a);
    return;
}
