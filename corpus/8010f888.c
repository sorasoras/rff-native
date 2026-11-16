#include "tc_rt.h"

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

void fn_8010f888(f64 param_1, f64 param_2, f64 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r30 = 0;
    f64 f1 = 0.0, f27 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.f[0] = param_1;
    a.f[1] = param_2;
    (void)tc_call(0x8010f844u, &a);
    f1 = tc_callf(0x8010f7f8u, &a);
    f30 = f1;
    f28 = (f64)(f32)px_fdiv((f64)rdf32(0x80574128u), (f64)(f32)(px_b2f(0x4330000080000010ull) - rdf64(0x80574130u)));
    a.r[0] = 0xa0u;
    a.r[1] = 7u;
    a.r[2] = 0x12u;
    (void)tc_call(0x80250b74u, &a);
    r0 = (u32)rd8((u32)param_4);
    wrf32d(0xcc008000u, param_1);
    r30 = 0u;
    r3 = (u32)rd8((u32)param_4 + 1u);
    wrf32d(0xcc008000u, f30);
    r4 = (u32)rd8((u32)param_4 + 2u);
    wrf32d(0xcc008000u, param_2);
    r5 = (u32)rd8((u32)param_4 + 3u);
    wr8(0xcc008000u, (u8)r0);
    f27 = (f64)rdf32(0x80574124u);
    wr8(0xcc008000u, (u8)r3);
    f31 = (f64)rdf32(0x8057412cu);
    wr8(0xcc008000u, (u8)r4);
    wr8(0xcc008000u, (u8)r5);
    do {
        a.f[0] = (f64)(f32)(f31 * f27);
        f1 = tc_callf(0x80262704u, &a);
        f29 = ppc_fmadds(param_3, (f64)(f32)f1, param_1);
        a.f[0] = (f64)(f32)(f31 * f27);
        f1 = tc_callf(0x80262b10u, &a);
        wrf32d(0xcc008000u, f29);
        r30 = r30 + 1u;
        r0 = (u32)rd8((u32)param_4);
        wrf32d(0xcc008000u, f30);
        r3 = (u32)rd8((u32)param_4 + 1u);
        r4 = (u32)rd8((u32)param_4 + 2u);
        f27 = (f64)(f32)(f27 + f28);
        r5 = (u32)rd8((u32)param_4 + 3u);
        wrf32d(0xcc008000u, ppc_fmadds(param_3, (f64)(f32)f1, param_2));
        wr8(0xcc008000u, (u8)r0);
        wr8(0xcc008000u, (u8)r3);
        wr8(0xcc008000u, (u8)r4);
        wr8(0xcc008000u, (u8)r5);
    } while ((s32)r30 < 17);
    return;
}
