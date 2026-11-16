#include "tc_rt.h"

void fn_8021aff0(u32 param_1, u32 param_2)
{
    u32 r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = rd32(0x805710ecu);
    r29 = rd32(0x805710e8u);
    wr32(0x805710ecu, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x8003d790u, &a);
    wr32(0x805710e8u, 0u);
    a.r[0] = 0u;
    (void)tc_call(0x8004e22cu, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    (void)tc_call(0x800f3f18u, &a);
    wr32(0x805710ecu, r30);
    a.r[0] = (((0u - r30) | r30) >> 0x1fu) & 1u;
    (void)tc_call(0x8003d790u, &a);
    wr32(0x805710e8u, r29);
    a.r[0] = (((0u - r29) | r29) >> 0x1fu) & 1u;
    (void)tc_call(0x8004e22cu, &a);
    return;
}
