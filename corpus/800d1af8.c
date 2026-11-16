#include "tc_rt.h"

u32 fn_800d1af8(f64 param_1, f64 param_2, s32 param_3, s32 param_4, u32 param_5, u32 param_r6)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_3;
    a.r[1] = 0u;
    a.r[2] = 1u;
    a.r[3] = param_r6;
    r3 = tc_call(0x800ce5b4u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr32((u32)param_3 + 0x20u, (u32)param_4);
        wr32((u32)param_3 + 0x28u, rd32((u32)param_4 + 0x130u));
        wr32((u32)param_4 + 0x140u, (u32)param_3);
        a.f[0] = param_1;
        a.f[1] = param_2;
        a.r[0] = (u32)param_3;
        a.r[1] = param_5;
        (void)tc_call(0x800d1c2cu, &a);
        r3 = 1u;
    }
    return r3;
}
