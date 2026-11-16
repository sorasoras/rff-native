#include "tc_rt.h"

void fn_802ddd44(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    (void)param_5;
    a.r[0] = param_1 + 0x14u;
    a.r[1] = param_3;
    a.r[2] = param_4;
    (void)tc_call(0x802dc254u, &a);
    wr32(param_1 + 4u, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x802ddaf4u, &a);
    r3 = tc_call(0x8022c2b0u, &a);
    r0 = rd32(0x805480e8u);
    if (r0 != 0u) {
        wr32(param_1, r0);
    } else {
        wr32(param_1, 0u);
    }
    wr32(0x805480e8u, param_1);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
