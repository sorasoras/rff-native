#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_8004b5e8(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = (u32)(s8)rd8(param_2 + 5u);
    r0 = r6 ^ 1u;
    r4 = (u32)((s32)r0 >> 1);
    r0 = r0 & r6;
    r0 = r4 - r0;
    r31 = (r0 >> 0x1fu) & 1u;
    a.r[0] = (u32)rd16(param_2 + 8u);
    r3 = tc_call(0x8004b5bcu, &a);
    r30 = r3;
    a.r[0] = (u32)rd16(param_2 + 0xau);
    r3 = tc_call(0x8004b5bcu, &a);
    if ((u32)param_3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = rd32(param_2);
        a.r[2] = (u32)rd16(param_2 + 8u);
        a.r[3] = (u32)rd16(param_2 + 0xau);
        a.r[4] = (u32)rd8(param_2 + 4u);
        a.r[5] = r30;
        a.r[6] = r3;
        a.r[7] = r31;
        (void)tc_call(0x80252348u, &a);
    } else {
        a.r[0] = param_1;
        a.r[1] = rd32(param_2);
        a.r[2] = (u32)rd16(param_2 + 8u);
        a.r[3] = (u32)rd16(param_2 + 0xau);
        a.r[4] = (u32)rd8(param_2 + 4u);
        a.r[5] = r30;
        a.r[6] = r3;
        a.r[7] = r31;
        (void)tc_call(0x8025213cu, &a);
    }
    if (r31 != 0u) {
        r6 = (u32)rd8(0x80571078u);
        a.f[0] = (f64)rdf32(0x805721a0u);
        a.f[1] = (f64)(f32)((f64)(f32)(px_b2f((u64)((u32)(s8)rd8(param_2 + 5u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805721b0u)) - (f64)rdf32(0x805721a8u));
        a.f[2] = (f64)rdf32(0x8057107cu);
        a.r[0] = param_1;
        a.r[1] = 3u;
        a.r[2] = 1u;
        a.r[3] = r6;
        a.r[4] = r6;
        a.r[5] = 0u;
        (void)tc_call(0x80252390u, &a);
    } else {
        f1 = (f64)rdf32(0x805721a0u);
        a.f[0] = f1;
        a.f[1] = f1;
        a.f[2] = f1;
        a.r[0] = param_1;
        a.r[1] = 1u;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        (void)tc_call(0x80252390u, &a);
    }
    return;
}
