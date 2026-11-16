#include "tc_rt.h"

s32 fn_8014aea0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x10u;
    (void)tc_call(0x800f82d0u, &a);
    a.r[0] = (u32)param_1 + 0x50u;
    a.r[1] = 0x80163efcu;
    a.r[2] = 0x80163f08u;
    a.r[3] = 0xcu;
    a.r[4] = 0xeu;
    (void)tc_call(0x80255624u, &a);
    wr32((u32)param_1 + 0xf8u, 0u);
    wr32((u32)param_1 + 0xfcu, 0u);
    wr32((u32)param_1 + 0x100u, 0u);
    wr32((u32)param_1 + 0x104u, 0u);
    wr32((u32)param_1 + 0x108u, 0u);
    wr32((u32)param_1 + 0x10cu, 0u);
    wr32((u32)param_1 + 0x110u, 0u);
    wr32((u32)param_1 + 0x114u, 0u);
    wr32((u32)param_1 + 0x118u, 0u);
    wr32((u32)param_1 + 0x11cu, 0u);
    wr32((u32)param_1 + 0x120u, 0u);
    wr32((u32)param_1 + 0x124u, 0u);
    wr32((u32)param_1 + 0x128u, 0u);
    wr32((u32)param_1 + 0x12cu, 0u);
    wr32((u32)param_1 + 0x130u, 0u);
    wr32((u32)param_1 + 0x134u, 0u);
    wr32((u32)param_1 + 0x138u, 0u);
    wr32((u32)param_1 + 0x13cu, 0u);
    wr32((u32)param_1 + 0x140u, 0u);
    wr32((u32)param_1 + 0x144u, 0u);
    wr32((u32)param_1 + 0x148u, 0u);
    wr32((u32)param_1 + 0x14cu, 0u);
    wr32((u32)param_1 + 0x150u, 0u);
    wr32((u32)param_1 + 0x154u, 0u);
    wr32((u32)param_1 + 0x158u, 0u);
    wr32((u32)param_1 + 0x15cu, 0u);
    wr32((u32)param_1 + 0x160u, 0u);
    wr32((u32)param_1 + 0x164u, 0u);
    wr32((u32)param_1 + 0x174u, 0u);
    return param_1;
}
