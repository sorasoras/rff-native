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

void fn_80305100(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5, u32 param_6)
{
    u32 c0lt = 0, r3 = 0, r6 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = param_6;
    a.r[0] = param_1;
    a.r[1] = rd32(param_3);
    r3 = tc_call(0x80303ee8u, &a);
    if (r3 != 0u) {
        c0lt = param_5 < 1;
        if ((u32)param_5 == 1u) {
            r6 = 0u;
            r31 = 0u;
        } else if (!c0lt) {
            if (param_5 >= 3) {
                r6 = 0u;
                r31 = 0u;
            } else {
                r6 = 0u;
            }
        } else if (param_5 >= 0) {
            r6 = 1u;
        } else {
            r6 = 0u;
            r31 = 0u;
        }
        a.r[0] = param_2;
        a.r[1] = r3;
        a.r[2] = rd32(param_4);
        a.r[3] = r6;
        a.r[4] = r31;
        a.r[5] = param_1 + 0x24u;
        a.r[6] = rd32(param_3);
        r3 = tc_call(0x8030ed94u, &a);
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
            a.r[0] = param_2;
            a.r[1] = rd32(param_4 + 4u);
            (void)tc_call(0x8030ef10u, &a);
            a.r[0] = param_2;
            a.r[1] = (u32)rd8(param_4 + 8u);
            (void)tc_call(0x8030ef18u, &a);
        }
    }
    return;
}
