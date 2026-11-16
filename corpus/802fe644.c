#include "tc_rt.h"

u32 fn_802fe644(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_3;
    a.r[2] = param_4;
    (void)tc_call(0x802f5da8u, &a);
    wr32(param_1, 0x8039d498u);
    a.r[0] = param_1 + 0x100u;
    (void)tc_call(0x802fd1dcu, &a);
    wr8(param_1 + 0x294u, 0u);
    wr8(param_1 + 0x295u, 0u);
    wr32(param_1 + 0x280u, 0u);
    wr32(param_1 + 0x284u, param_2);
    wr32(param_1 + 0x290u, 0u);
    wr32(param_1 + 0x298u, 0u);
    wr32(param_1 + 0x4a0u, 0u);
    wr32(param_1 + 0x4a4u, 0u);
    wr8(param_1 + 0x4a8u, 0u);
    wr32(param_1 + 0x49cu, 0x8039d4d0u);
    wr32(param_1 + 0x4acu, 0u);
    wr32(param_1 + 0x4b0u, 0u);
    wr32(param_1 + 0x4b8u, 0u);
    wr32(param_1 + 0x4bcu, 0u);
    return param_1;
}
