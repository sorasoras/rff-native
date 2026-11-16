#include "tc_rt.h"

u32 fn_802dfb90(u32 param_1, u32 param_r4)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    (void)tc_call(0x802df5ccu, &a);
    wr8(param_1 + 0x6fu, 0u);
    wr32(param_1, 0x8039ca00u);
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    if ((u32)rd8(0x80571d10u) == 0u) {
        a.r[0] = 0x805480f0u;
        (void)tc_call(0x8022d534u, &a);
        a.r[0] = 0x80571d08u;
        (void)tc_call(0x8022efd4u, &a);
        wr8(0x80571d10u, 1u);
    }
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return param_1;
}
