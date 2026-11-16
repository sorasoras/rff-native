#include "tc_rt.h"

void fn_800505e4(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, u32 param_6, s32 param_7)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    wr32(param_1, param_2);
    wr32(param_1 + 4u, ((u32)param_3 + 0xfu) & 0xfffffff0u);
    wr32(param_1 + 0xcu, param_4);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0x10u, (u32)param_7);
    wr32(param_1 + 0x14u, param_6);
    a.r[0] = param_5;
    r3 = tc_call(0x802550d4u, &a);
    if (r3 > 8u) {
        a.r[0] = param_1 + 0x18u;
        a.r[1] = param_5;
        a.r[2] = 7u;
        (void)tc_call(0x8025bdf4u, &a);
        wr8(param_1 + 0x1fu, 0u);
    } else {
        a.r[0] = param_1 + 0x18u;
        a.r[1] = param_5;
        (void)tc_call(0x8025bd34u, &a);
    }
    wr32(param_1 + 0x44u, 0u);
    wr32(param_1 + 0x20u, 0u);
    if ((u32)param_7 != 0u) {
        wr32(param_1 + 0x20u, 0u);
    } else {
        r3 = rd32(param_1);
        wr32(param_1 + 0x20u, 1u);
        a.r[0] = r3;
        a.r[1] = rd32(param_1 + 4u);
        a.r[2] = 0x10u;
        a.r[3] = rd32(param_1 + 0xcu);
        a.r[4] = param_1 + 0x18u;
        r3 = tc_call(0x80040d50u, &a);
        r0 = rd32(param_1 + 4u);
        wr32(param_1 + 0x44u, r3);
        a.r[0] = param_1 + 0x24u;
        a.r[1] = r3;
        a.r[2] = (r0 >> 4u) & 0xfffffffu;
        (void)tc_call(0x80094db4u, &a);
    }
    r0 = rd32(param_1 + 0x20u);
    wr32(param_1 + 8u, 0u);
    if (r0 != 0u) {
        a.r[0] = param_1 + 0x24u;
        (void)tc_call(0x80094e18u, &a);
        a.r[0] = param_1 + 0x24u;
        (void)tc_call(0x80094dd4u, &a);
    }
    return;
}
