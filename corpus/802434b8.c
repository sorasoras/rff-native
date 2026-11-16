#include "tc_rt.h"

void fn_802434b8(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r31 = r3;
    a.r[0] = param_1;
    (void)tc_call(0x80243434u, &a);
    if ((u32)rd16(param_1 + 0x38u) == 1u) {
        wr32(param_1 + 0x20u, 1u);
    }
    a.r[0] = param_1;
    (void)tc_call(0x80245ef8u, &a);
    wr32(param_1, rd32(0x804e6380u));
    wr32(0x804e6380u, param_1);
    wr32(param_1 + 0xcu, 0u);
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
