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

void fn_80304f48(u32 param_1, u32 param_2, u32 param_3, s32 param_4, s32 param_5, u32 param_6)
{
    u32 c0lt = 0, fl_ = 0, r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = param_6;
    a.r[0] = param_2;
    a.r[1] = param_1 + 0xc4u;
    a.r[2] = (u32)rd16((u32)param_4 + 4u);
    a.r[3] = (u32)rd16((u32)param_4 + 6u);
    r3 = tc_call(0x8030a6fcu, &a);
    for (;;) {
        if (r3 == 0u) {
            fl_ = 1u;
            break;
        }
        if (r3 != 1u) {
            return;
        }
        r0 = rd32(param_1 + 0x6cu);
        if (r0 == 1u) {
            return;
        }
        if (r0 != 0u) {
            r3 = rd32(param_1 + 0x70u) - 0xe0u;
        } else {
            r3 = 0u;
        }
        if (param_2 == r3) {
            return;
        }
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x802f5fd8u, &a);
        a.r[0] = param_2;
        a.r[1] = param_1 + 0xc4u;
        a.r[2] = (u32)rd16((u32)param_4 + 4u);
        a.r[3] = (u32)rd16((u32)param_4 + 6u);
        r3 = tc_call(0x8030a6fcu, &a);
    }
    if (fl_ == 1u) {
        fl_ = 0u;
    }
    c0lt = param_5 < 1;
    if ((u32)param_5 == 1u) {
        r31 = 0u;
        r30 = 0u;
    } else if (!c0lt) {
        if (param_5 >= 3) {
            r31 = 0u;
            r30 = 0u;
        } else {
            r31 = 0u;
        }
    } else if (param_5 >= 0) {
        r31 = 1u;
    } else {
        r31 = 0u;
        r30 = 0u;
    }
    a.r[0] = rd32(param_1 + 0x10u);
    a.r[1] = rd32(param_3);
    a.r[2] = param_2 + 0xec0u;
    a.r[3] = 0x200u;
    r3 = tc_call(0x80301544u, &a);
    if (r3 != 0u) {
        a.r[0] = param_2;
        a.r[1] = r31;
        a.r[2] = r30;
        a.r[3] = r3;
        r3 = tc_call(0x8030a778u, &a);
        if (r3 != 0u) {
            a.f[0] = (f64)(f32)px_fdiv((f64)(f32)(px_b2f((u64)(rd32(param_3 + 0x10u) ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x80577770u)), (f64)rdf32(0x80577768u));
            a.r[0] = param_2;
            (void)tc_call(0x802f7168u, &a);
            a.r[0] = param_2;
            a.r[1] = rd32(param_3 + 0x14u);
            (void)tc_call(0x802f7284u, &a);
            a.r[0] = param_2;
            a.r[1] = rd32(param_3 + 0x18u);
            (void)tc_call(0x802f72c0u, &a);
            a.r[0] = param_2;
            a.r[1] = rd32(param_3 + 0x1cu);
            (void)tc_call(0x802f72fcu, &a);
            return;
        }
        return;
    }
    return;
}
