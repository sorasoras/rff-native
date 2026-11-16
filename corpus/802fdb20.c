#include "tc_rt.h"

static f64 px_b2f(u64 x)
{
    union { f64 d; u64 b; } v;
    v.b = x;
    return v.d;
}

void fn_802fdb20(s32 param_1, s32 param_2, u32 param_3)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    if ((u32)rd8((u32)param_1 + 0xe8u) != 0u) {
        c0lt = param_2 < 1;
        if ((u32)param_2 == 1u) {
            wrf32d((u32)param_1 + 0xfcu, (f64)(f32)((f64)rdf32((u32)param_1 + 0xfcu) + (f64)(f32)(px_b2f((u64)(param_3 ^ 0x80000000u) | 0x4330000000000000ull) - rdf64(0x805776b8u))));
        } else if (c0lt && param_2 >= 0) {
            wr32((u32)param_1 + 0xf8u, rd32((u32)param_1 + 0xf8u) + param_3);
        }
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    } else {
        r3 = tc_call(0x80306860u, &a);
        r3 = r3 + 0x354u;
        a.r[0] = r3;
        (void)tc_call(0x8022d648u, &a);
    }
    return;
}
