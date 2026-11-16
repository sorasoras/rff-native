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

void fn_8004cc20(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r30 = 0, t4 = 0, t8 = 0, t12 = 0, t16 = 0, t20 = 0, t24 = 0, t28 = 0, t32 = 0, t36 = 0, t40 = 0;
    u32 t44 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8004d970u, &a);
    r30 = (((u32)param_1 << 2u) & 0xfffffffcu) - (u32)param_1;
    if ((u32)param_2 != 0u) {
        r3 = r3 + 0x28u;
        a.r[0] = r3;
        a.r[1] = (u32)param_2;
        a.r[2] = 0x803c6378u;
        (void)tc_call(0x802337a0u, &a);
        f1 = px_pack((f64)rdf32((u32)param_2), (f64)rdf32((u32)param_2));
        wrf32d(0x803c63d8u, px_hi(f1));
        wrf32d(0x803c63d8u, px_lo(f1));
        t4 = (u32)param_2 + 8u;
        f2 = px_pack((f64)rdf32(t4), (f64)rdf32(t4));
        wrf32d(0x803c63e0u, px_hi(f2));
        wrf32d(0x803c63e0u, px_lo(f2));
        t8 = (u32)param_2 + 0x10u;
        f3 = px_pack((f64)rdf32(t8), (f64)rdf32(t8));
        wrf32d(0x803c63e8u, px_hi(f3));
        wrf32d(0x803c63e8u, px_lo(f3));
        t12 = (u32)param_2 + 0x18u;
        f4 = px_pack((f64)rdf32(t12), (f64)rdf32(t12));
        wrf32d(0x803c63f0u, px_hi(f4));
        wrf32d(0x803c63f0u, px_lo(f4));
        t16 = (u32)param_2 + 0x20u;
        f5 = px_pack((f64)rdf32(t16), (f64)rdf32(t16));
        wrf32d(0x803c63f8u, px_hi(f5));
        wrf32d(0x803c63f8u, px_lo(f5));
        t20 = (u32)param_2 + 0x28u;
        f6 = px_pack((f64)rdf32(t20), (f64)rdf32(t20));
        wrf32d(0x803c6400u, px_hi(f6));
        wrf32d(0x803c6400u, px_lo(f6));
    } else {
        t24 = r3 + 0x28u;
        f1 = px_pack((f64)rdf32(t24), (f64)rdf32(t24));
        wrf32d(0x803c6378u, px_hi(f1));
        wrf32d(0x803c6378u, px_lo(f1));
        t28 = r3 + 0x30u;
        f2 = px_pack((f64)rdf32(t28), (f64)rdf32(t28));
        wrf32d(0x803c6380u, px_hi(f2));
        wrf32d(0x803c6380u, px_lo(f2));
        t32 = r3 + 0x38u;
        f3 = px_pack((f64)rdf32(t32), (f64)rdf32(t32));
        wrf32d(0x803c6388u, px_hi(f3));
        wrf32d(0x803c6388u, px_lo(f3));
        t36 = r3 + 0x40u;
        f4 = px_pack((f64)rdf32(t36), (f64)rdf32(t36));
        wrf32d(0x803c6390u, px_hi(f4));
        wrf32d(0x803c6390u, px_lo(f4));
        t40 = r3 + 0x48u;
        f5 = px_pack((f64)rdf32(t40), (f64)rdf32(t40));
        wrf32d(0x803c6398u, px_hi(f5));
        wrf32d(0x803c6398u, px_lo(f5));
        t44 = r3 + 0x50u;
        f6 = px_pack((f64)rdf32(t44), (f64)rdf32(t44));
        wrf32d(0x803c63a0u, px_hi(f6));
        wrf32d(0x803c63a0u, px_lo(f6));
        f0 = (f64)rdf32(0x805721c8u);
        f7 = (f64)rdf32(0x805721d8u);
        wrf32d(0x803c63e8u, f0);
        wrf32d(0x803c63d8u, f7);
        wrf32d(0x803c63f8u, f0);
        wrf32d(0x803c63dcu, f0);
        wrf32d(0x803c63ecu, f7);
        wrf32d(0x803c63fcu, f0);
        wrf32d(0x803c63e0u, f0);
        wrf32d(0x803c63f0u, f0);
        wrf32d(0x803c6400u, f7);
        wrf32d(0x803c63e4u, f0);
        wrf32d(0x803c63f4u, f0);
        wrf32d(0x803c6404u, f0);
    }
    a.r[0] = 0x803c6378u;
    a.r[1] = 0x803c63a8u;
    (void)tc_call(0x80233964u, &a);
    a.r[0] = 0x803c6378u;
    a.r[1] = r30;
    (void)tc_call(0x802544a0u, &a);
    a.r[0] = 0x803c63a8u;
    a.r[1] = r30;
    (void)tc_call(0x802544f0u, &a);
    a.r[0] = r30;
    (void)tc_call(0x80254548u, &a);
    return;
}
