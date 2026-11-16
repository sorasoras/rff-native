#include "tc_rt.h"

void fn_800d53b4(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x4b0u, 0u);
    wr32((u32)param_1 + 0x4b4u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x800d5940u, &a);
    wr32((u32)param_1 + 0x4b8u, rd32((u32)param_1 + 0x4b8u) & 0xbfffffffu);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    a.r[2] = 0x480u;
    (void)tc_call(0x8000443cu, &a);
    wr32((u32)param_1 + 0x480u, 1u);
    wr32((u32)param_1 + 0x484u, 1u);
    wr32((u32)param_1 + 0x488u, 1u);
    wr32((u32)param_1 + 0x48cu, 1u);
    wr32((u32)param_1 + 0x490u, 1u);
    wr32((u32)param_1 + 0x494u, 1u);
    wr32((u32)param_1 + 0x498u, 1u);
    wr32((u32)param_1 + 0x49cu, 1u);
    wr32((u32)param_1 + 0x4a0u, 1u);
    wr32((u32)param_1 + 0x4a4u, 1u);
    wr32((u32)param_1 + 0x4a8u, 1u);
    wr32((u32)param_1 + 0x4acu, 1u);
    return;
}
