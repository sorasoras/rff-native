#include "tc_rt.h"

u32 fn_803079d0(u32 param_1)
{
    u32 r9 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x802f5938u, &a);
    wr32(param_1 + 0x194u, 0u);
    r9 = param_1 + 0x194u;
    wr32(param_1 + 0x198u, 0u);
    wr32(param_1, 0x8039d618u);
    wr32(param_1 + 0xd0u, 0u);
    wr32(param_1 + 0xd4u, 0u);
    wr32(param_1 + 0xd8u, 0x8039d63cu);
    wr8(param_1 + 0x11cu, 0u);
    wr8(param_1 + 0x11du, 0u);
    wr32(param_1 + 0x174u, 0u);
    wr32(param_1 + 0x178u, 0u);
    wr8(param_1 + 0x17cu, 0u);
    wr32(param_1 + 0x170u, 0x8039d678u);
    wr32(param_1 + 0x180u, 0u);
    wr32(param_1 + 0x184u, 0u);
    wr32(param_1 + 0x18cu, 0u);
    wr32(param_1 + 0x190u, 0u);
    wr32(param_1 + 0x194u, r9);
    wr32(param_1 + 0x198u, r9);
    wr32(param_1 + 0x19cu, 0u);
    a.r[0] = param_1 + 0x1a0u;
    a.r[1] = 0x8030a130u;
    a.r[2] = 0x80307b20u;
    a.r[3] = 0x34u;
    a.r[4] = 0x20u;
    (void)tc_call(0x80255624u, &a);
    wr32(param_1 + 0x824u, 0u);
    if ((u32)rd8(0x80571dd0u) == 0u) {
        a.r[0] = 0x80563da0u;
        (void)tc_call(0x8022d534u, &a);
        wr8(0x80571dd0u, 1u);
    }
    a.r[0] = param_1 + 0x19cu;
    a.r[1] = param_1 + 0x1a0u;
    a.r[2] = 0x680u;
    a.r[3] = 0x34u;
    (void)tc_call(0x802faa98u, &a);
    return param_1;
}
