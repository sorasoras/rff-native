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

static f64 px_psub(f64 a, f64 b)
{
    f64 r = a - b;
    if (r != r) {
        if (a != a) return px_pq(a);
        if (b != b) return px_pq(b);
        return px_b2f(0x7ff8000000000000ull);
    }
    return r;
}

void fn_800f9760(f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4)
{
    u32 r0 = 0, r3 = tc_argr(0u), r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u);
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = tc_argf(4u), f31 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdf20u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wrf64(0x817fdff0u, 0.0);
    wrf32d(0x817fdff8u, px_lo(0.0));
    wrf64(0x817fdfe0u, 0.0);
    wrf32d(0x817fdfe8u, px_lo(0.0));
    wrf64(0x817fdfd0u, 0.0);
    wrf32d(0x817fdfd8u, px_lo(0.0));
    wrf64(0x817fdfc0u, 0.0);
    wrf32d(0x817fdfc8u, px_lo(0.0));
    r3 = tc_call(0x80250534u, &a);
    f1 = tc_lastf();
    r8 = rd32(0x80339000u);
    f31 = (f64)rdf32(0x80573bf8u);
    r7 = rd32(0x80339004u);
    r6 = rd32(0x80339008u);
    r5 = rd32(0x8033900cu);
    r4 = rd32(0x80339010u);
    r0 = rd32(0x80339014u);
    wr32(0x817fdf38u, r8);
    wr32(0x817fdf3cu, r7);
    f1 = (f64)rdf32(0x817fdf38u);
    wr32(0x817fdf40u, r6);
    f2 = (f64)rdf32(0x817fdf3cu);
    wr32(0x817fdf44u, r5);
    f3 = (f64)rdf32(0x817fdf40u);
    wr32(0x817fdf48u, r4);
    f4 = (f64)rdf32(0x817fdf44u);
    wr32(0x817fdf4cu, r0);
    f5 = (f64)rdf32(0x817fdf48u);
    wrf32d(0x817fdf28u, param_f1);
    wrf32d(0x817fdf2cu, param_f2);
    wrf32d(0x817fdf30u, (f64)(f32)px_padd(param_f1, param_f3));
    wrf32d(0x817fdf34u, (f64)(f32)px_psub(param_f2, param_f4));
    wrf32d(0x817fdf4cu, f31);
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f31;
    a.r[0] = 0x817fdf80u;
    r3 = tc_call(0x802342e8u, &a);
    f1 = tc_lastf();
    a.r[0] = 0u;
    r3 = tc_call(0x80253f0cu, &a);
    f1 = tc_lastf();
    a.r[0] = 0u;
    r3 = tc_call(0x80253f38u, &a);
    f1 = tc_lastf();
    a.r[0] = 1u;
    a.r[1] = 7u;
    a.r[2] = 1u;
    r3 = tc_call(0x80253f64u, &a);
    f1 = tc_lastf();
    a.r[0] = 1u;
    a.r[1] = 1u;
    a.r[2] = 0u;
    a.r[3] = 0u;
    r3 = tc_call(0x80253ebcu, &a);
    f1 = tc_lastf();
    a.r[0] = 1u;
    r3 = tc_call(0x80251e90u, &a);
    f1 = tc_lastf();
    a.r[0] = 1u;
    r3 = tc_call(0x802539bcu, &a);
    f1 = tc_lastf();
    a.r[0] = 0u;
    r3 = tc_call(0x8025016cu, &a);
    f1 = tc_lastf();
    a.r[0] = 0u;
    a.r[1] = 0xffu;
    a.r[2] = 0xffu;
    a.r[3] = 4u;
    r3 = tc_call(0x80253860u, &a);
    f1 = tc_lastf();
    a.r[0] = 0u;
    a.r[1] = 4u;
    r3 = tc_call(0x80253360u, &a);
    f1 = tc_lastf();
    a.r[0] = 4u;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = 1u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 2u;
    r3 = tc_call(0x80251eb4u, &a);
    f1 = tc_lastf();
    a.r[0] = 0u;
    r3 = tc_call(0x80250e3cu, &a);
    f1 = tc_lastf();
    a.r[0] = 0x817fdf50u;
    f1 = tc_callf(0x80233740u, &a);
    r3 = tc_lastr();
    a.r[0] = 0x817fdf50u;
    a.r[1] = 0u;
    f1 = tc_callf(0x802544a0u, &a);
    r3 = tc_lastr();
    a.r[0] = 0u;
    r3 = tc_call(0x80254548u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x817fdf80u;
    a.r[1] = 1u;
    r3 = tc_call(0x802543b0u, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x8024f870u, &a);
    f1 = tc_lastf();
    a.r[0] = 9u;
    a.r[1] = 1u;
    r3 = tc_call(0x8024f27cu, &a);
    f1 = tc_lastf();
    a.r[0] = 0u;
    a.r[1] = 9u;
    a.r[2] = 1u;
    a.r[3] = 4u;
    a.r[4] = 0u;
    r3 = tc_call(0x8024f8a4u, &a);
    f1 = tc_lastf();
    f31 = -(f64)(f32)px_psub(f31, (f64)rdf32(0x80573bfcu));
    a.r[0] = 0x98u;
    a.r[1] = 0u;
    a.r[2] = 4u;
    r3 = tc_call(0x80250b74u, &a);
    f1 = tc_lastf();
    f0 = (f64)rdf32(0x817fdf30u);
    f1 = (f64)rdf32(0x817fdf34u);
    f2 = (f64)(f32)param_f2;
    wrf32d(0xcc008000u, f0);
    f3 = (f64)(f32)param_f1;
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f31);
    wrf32d(0xcc008000u, f0);
    wrf32d(0xcc008000u, f2);
    wrf32d(0xcc008000u, f31);
    wrf32d(0xcc008000u, f3);
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f31);
    wrf32d(0xcc008000u, f3);
    wrf32d(0xcc008000u, f2);
    wrf32d(0xcc008000u, f31);
    a.r[0] = 1u;
    r3 = tc_call(0x80253f0cu, &a);
    f1 = tc_lastf();
    a.r[0] = 1u;
    r3 = tc_call(0x80253f38u, &a);
    f1 = tc_lastf();
    a.r[0] = 1u;
    a.r[1] = 3u;
    a.r[2] = 1u;
    r3 = tc_call(0x80253f64u, &a);
    f1 = tc_lastf();
    return;
}
