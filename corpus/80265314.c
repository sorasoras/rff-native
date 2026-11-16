#include "tc_rt.h"

u32 fn_80265314(s32 param_1)
{
    u32 r3 = 0, r5 = tc_argr(2u), r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r5 = rd32(0xcd006434u);
    r31 = (r5 >> 0x1bu) & 1u;
    if ((u32)param_1 != 0u) {
        wr32(0x80500ca0u, 0u);
        r5 = r5 | 0x8000000u;
        wr32(0x80500ca4u, 0u);
        wr32(0x80500ca8u, 0u);
        wr32(0x80500cacu, 0u);
    } else {
        r5 = r5 & 0xf7ffffffu;
    }
    wr32(0xcd006434u, r5 & 0x7ffffffeu);
    a.r[0] = r3;
    r3 = tc_call(0x8022c2d8u, &a);
    f1 = tc_lastf();
    return r31;
}
