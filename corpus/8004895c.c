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

static f64 px_pq(f64 x)
{
    u64 b = px_f2b(x);
    if ((b & 0x7ff0000000000000ull) == 0x7ff0000000000000ull && (b & 0x000fffffffffffffull) != 0)
        return px_b2f(b | 0x0008000000000000ull);
    return x;
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

void fn_8004895c(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5, u32 param_6, u32 param_7, s32 param_8, s32 param_9, s32 param_10)
{
    u32 r3 = 0, r28 = 0, r29 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0;
    TcArgs a = {0};
    (void)param_9;
    (void)param_10;
    wr32(0x817fdf60u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdfc8u, 0x43300000u);
    wr32(0x817fdfd0u, 0x43300000u);
    r28 = (u32)(s16)rd16(0x817fe00au);
    r29 = rd32(0x817fe00cu);
    a.r[0] = 0x817fdfa8u;
    a.r[1] = param_1;
    a.r[2] = param_6 & 0xffffu;
    a.r[3] = param_7 & 0xffffu;
    a.r[4] = 1u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x8025213cu, &a);
    f1 = tc_lastf();
    f1 = (f64)rdf32(0x8057215cu);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = f1;
    a.r[0] = 0x817fdfa8u;
    a.r[1] = 5u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 2u;
    r3 = tc_call(0x80252390u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x817fdfa8u;
    a.r[1] = 0u;
    r3 = tc_call(0x80252720u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x817fdf88u;
    a.r[1] = param_2;
    a.r[2] = (param_6 >> 1u) & 0xffffu;
    a.r[3] = (param_7 >> 1u) & 0xffffu;
    a.r[4] = 1u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x8025213cu, &a);
    f1 = tc_lastf();
    f1 = (f64)rdf32(0x8057215cu);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = f1;
    a.r[0] = 0x817fdf88u;
    a.r[1] = 5u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 2u;
    r3 = tc_call(0x80252390u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x817fdf88u;
    a.r[1] = 1u;
    r3 = tc_call(0x80252720u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x817fdf68u;
    a.r[1] = param_3;
    a.r[2] = (u32)((s32)param_6 >> 1) & 0xffffu;
    a.r[3] = (u32)((s32)param_7 >> 1) & 0xffffu;
    a.r[4] = 1u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    r3 = tc_call(0x8025213cu, &a);
    f1 = tc_lastf();
    f1 = (f64)rdf32(0x8057215cu);
    a.f[0] = f1;
    a.f[1] = f1;
    a.f[2] = f1;
    a.r[0] = 0x817fdf68u;
    a.r[1] = 5u;
    a.r[2] = 1u;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 2u;
    r3 = tc_call(0x80252390u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x817fdf68u;
    a.r[1] = 2u;
    r3 = tc_call(0x80252720u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x98u;
    a.r[1] = 7u;
    a.r[2] = 4u;
    r3 = tc_call(0x80250b74u, &a);
    f1 = tc_lastf();
    wr32(0x817fdfccu, (u32)param_4 ^ 0x80000000u);
    f2 = rdf64(0x80572188u);
    wr32(0x817fdfd4u, (u32)param_5 ^ 0x80000000u);
    f1 = rdf64(0x817fdfc8u);
    f0 = rdf64(0x817fdfd0u);
    f4 = (f64)(f32)px_psub(f1, f2);
    wr32(0x817fdfccu, ((u32)param_4 + (u32)param_8) ^ 0x80000000u);
    f5 = (f64)(f32)px_psub(f0, f2);
    f0 = rdf64(0x817fdfc8u);
    wrf32d(0xcc008000u, f4);
    f6 = (f64)(f32)px_psub(f0, f2);
    wrf32d(0xcc008000u, f5);
    f0 = (f64)rdf32(0x8057215cu);
    wr32(0x817fdfd4u, ((u32)param_5 + r28) ^ 0x80000000u);
    wrf32d(0xcc008000u, f0);
    f0 = rdf64(0x817fdfd0u);
    f3 = (f64)rdf32(r29 + 4u);
    f2 = (f64)(f32)px_psub(f0, f2);
    wrf32d(0xcc008000u, (f64)rdf32(r29));
    wrf32d(0xcc008000u, f3);
    wrf32d(0xcc008000u, f6);
    wrf32d(0xcc008000u, f5);
    wrf32d(0xcc008000u, (f64)rdf32(0x8057215cu));
    f1 = (f64)rdf32(r29 + 0xcu);
    wrf32d(0xcc008000u, (f64)rdf32(r29 + 8u));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f4);
    wrf32d(0xcc008000u, f2);
    wrf32d(0xcc008000u, (f64)rdf32(0x8057215cu));
    f1 = (f64)rdf32(r29 + 0x14u);
    wrf32d(0xcc008000u, (f64)rdf32(r29 + 0x10u));
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f6);
    wrf32d(0xcc008000u, f2);
    wrf32d(0xcc008000u, (f64)rdf32(0x8057215cu));
    f1 = (f64)rdf32(r29 + 0x1cu);
    wrf32d(0xcc008000u, (f64)rdf32(r29 + 0x18u));
    wrf32d(0xcc008000u, f1);
    return;
}
