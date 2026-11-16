#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_80153524(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r31 = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f28 = 0.0, f29 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = (u32)(s8)rd8((u32)param_1 + 1u);
    r3 = tc_call(0x8004c670u, &a);
    r4 = rd32(r3 + 0x14u);
    r31 = r3;
    r6 = (u32)rd16(r4 + 8u);
    r4 = (u32)rd16(r4 + 0xau);
    r0 = (u32)(s8)rd8((u32)param_1 + 2u);
    r6 = r6 ^ 0x80000000u;
    r4 = r4 ^ 0x80000000u;
    f1 = rdf64(0x805748b0u);
    c0lt = (s32)r0 < 1;
    f28 = (f64)rdf32(0x805748a4u);
    f31 = (f64)(f32)(px_b2f((u64)r6 | 0x4330000000000000ull) - f1);
    f29 = (f64)rdf32(0x805748a0u);
    f30 = (f64)(f32)(px_b2f((u64)r4 | 0x4330000000000000ull) - f1);
    if (r0 == 1u) {
        f28 = (f64)rdf32(0x805748acu);
        r3 = r3 + 0x20u;
        a.r[0] = r3;
        a.r[1] = 2u;
        a.r[2] = 2u;
        (void)tc_call(0x80252494u, &a);
    } else if (c0lt && (s32)r0 >= 0) {
        f0 = (f64)rdf32(0x805748a8u);
        r3 = r3 + 0x20u;
        f31 = (f64)(f32)(f31 * f0);
        f30 = (f64)(f32)(f30 * f0);
        a.r[0] = r3;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x80252494u, &a);
    }
    f0 = (f64)rdf32((u32)param_1 + 0x10u);
    f31 = (f64)(f32)(f31 * f0);
    f30 = (f64)(f32)(f30 * f0);
    a.r[0] = param_4;
    a.r[1] = param_4;
    a.r[2] = (u32)param_1 + 8u;
    (void)tc_call(0x80035dc4u, &a);
    a.r[0] = r31;
    a.r[1] = 0u;
    a.r[2] = 0u;
    (void)tc_call(0x8004b358u, &a);
    a.r[0] = 0x101u;
    (void)tc_call(0x8004cd5cu, &a);
    a.r[0] = param_4;
    a.r[1] = param_4;
    a.r[2] = 0x101u;
    (void)tc_call(0x8003d05cu, &a);
    a.r[0] = 0x98u;
    a.r[1] = 7u;
    a.r[2] = 4u;
    (void)tc_call(0x80250b74u, &a);
    f1 = (f64)rdf32(param_3);
    f0 = (f64)rdf32(param_3 + 4u);
    f2 = (f64)(f32)(f1 - f31);
    f4 = (f64)rdf32(param_3 + 8u);
    f3 = (f64)(f32)(f0 - f30);
    f1 = (f64)(f32)(f1 + f31);
    wrf32d(0xcc008000u, f2);
    f0 = (f64)(f32)(f0 + f30);
    wrf32d(0xcc008000u, f3);
    wrf32d(0xcc008000u, f4);
    wrf32d(0xcc008000u, f29);
    wrf32d(0xcc008000u, f29);
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f3);
    wrf32d(0xcc008000u, f4);
    wrf32d(0xcc008000u, f28);
    wrf32d(0xcc008000u, f29);
    wrf32d(0xcc008000u, f2);
    wrf32d(0xcc008000u, f0);
    wrf32d(0xcc008000u, f4);
    wrf32d(0xcc008000u, f29);
    wrf32d(0xcc008000u, f28);
    wrf32d(0xcc008000u, f1);
    wrf32d(0xcc008000u, f0);
    wrf32d(0xcc008000u, f4);
    wrf32d(0xcc008000u, f28);
    wrf32d(0xcc008000u, f28);
    return;
}
