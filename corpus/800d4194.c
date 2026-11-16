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

static f64 px_ctiw(f64 b, s32 w)
{
    u64 r = 0xfff8000000000000ull | (u32)w;
    if (w == 0 && (px_f2b(b) >> 63) != 0) r |= 0x100000000ull;
    return px_b2f(r);
}

void fn_800d4194(f64 param_1, f64 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0, f2 = 0.0, f30 = 0.0, f31 = 0.0;
    TcArgs a = {0};
    f30 = param_1;
    r3 = tc_call(0x800d3f34u, &a);
    if (r3 != 0u) {
        f30 = (f64)(f32)(param_1 * (f64)rdf32(0x80573154u));
    }
    r31 = rd32(param_3 + 0x524u);
    r29 = 0u;
    f2 = rdf64(0x80573158u);
    r30 = rd32(r31 + 0x30u);
    f30 = (f64)(f32)(px_b2f((u64)((u32)px_f2b(px_ctiw(f30, ppc_fctiwz(f30))) ^ 0x80000000u) | 0x4330000000000000ull) - f2);
    f31 = (f64)(f32)(px_b2f((u64)((u32)px_f2b(px_ctiw(param_2, ppc_fctiwz(param_2))) ^ 0x80000000u) | 0x4330000000000000ull) - f2);
    do {
        a.r[0] = param_3;
        a.r[1] = r29;
        r3 = tc_call(0x800d4164u, &a);
        if (r3 == 0u) break;
        a.r[0] = r30;
        a.r[1] = r3;
        (void)tc_call(0x8011d53cu, &a);
        a.f[0] = f30;
        a.f[1] = f31;
        a.r[0] = r30;
        (void)tc_call(0x8011d6f8u, &a);
        r29 = r29 + 1u;
    } while ((s32)r29 < 2);
    if (rd32(param_3 + 0x51cu) != 0u) {
        a.f[0] = (f64)rdf32(0x8057311cu);
        a.f[1] = (f64)rdf32(0x80573110u);
        a.r[0] = r30;
        (void)tc_call(0x8011d9a4u, &a);
    } else {
        f1 = (f64)rdf32(0x80573110u);
        a.f[0] = f1;
        a.f[1] = f1;
        a.r[0] = r30;
        (void)tc_call(0x8011d9a4u, &a);
    }
    a.r[0] = param_3;
    r3 = tc_call(0x800d3f48u, &a);
    if (r3 != 0u) {
        a.f[0] = (f64)rdf32(param_3 + 0x4f8u);
        a.f[1] = (f64)rdf32(param_3 + 0x4fcu);
        a.r[0] = r30;
        (void)tc_call(0x8011d9b8u, &a);
    }
    a.f[0] = (f64)rdf32(param_3 + 0x4e8u);
    a.r[0] = r31;
    f1 = tc_callf(0x8011c914u, &a);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r31;
    a.r[3] = 0u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.r[6] = 0u;
    a.r[7] = 0u;
    (void)tc_call(0x8011c924u, &a);
    a.r[0] = r30;
    (void)tc_call(0x8011d3b4u, &a);
    a.r[0] = r30;
    a.r[1] = param_4;
    a.r[2] = param_5;
    a.r[3] = 0u;
    a.r[4] = 0u;
    (void)tc_call(0x8011d94cu, &a);
    return;
}
