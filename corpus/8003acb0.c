#include "tc_rt.h"

u32 fn_8003acb0(u32 param_1, s32 param_2, u32 param_3)
{
    TcArgs a = {0};
    wr32(param_1 + 4u, (u32)param_2);
    wr32(param_1, param_3);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 0x14u, 0u);
    wr8(param_1 + 0x18u, 0x20u);
    wr8(param_1 + 0x19u, 0x20u);
    wr8(param_1 + 0x1au, 0x40u);
    wr8(param_1 + 0x1bu, 0xffu);
    a.r[0] = param_1;
    a.r[1] = param_1 + 0x1cu;
    a.r[2] = (u32)param_2 - 0x1cu;
    a.r[3] = param_1;
    a.r[4] = 0u;
    a.r[5] = 0u;
    (void)tc_call(0x8003ac00u, &a);
    return param_1;
}
