#include "tc_rt.h"

u32 fn_802df5cc(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr8(param_1 + 0x6cu, 0u);
    wr32(param_1, 0x8039c998u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x18u, 0u);
    wr8(param_1 + 0x6du, 0u);
    wr8(param_1 + 0x6eu, 0u);
    wr8(param_1 + 4u, 0u);
    wr32(param_1 + 0x68u, 2u);
    wr32(param_1 + 0xcu, 0u);
    wr32(param_1 + 0x10u, 0u);
    wr32(param_1 + 8u, 0u);
    wr32(param_1 + 0x1cu, 0u);
    wr8(param_1 + 0x24u, 0u);
    wr32(param_1 + 0x20u, 0u);
    wr32(param_1 + 0x64u, param_1);
    a.r[0] = param_2;
    a.r[1] = param_1 + 0x28u;
    r3 = tc_call(0x80234874u, &a);
    if (r3 != 0u) {
        wr32(param_1 + 0x14u, rd32(param_1 + 0x5cu));
        a.r[0] = param_1 + 0x14u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        (void)tc_call(0x802df4d4u, &a);
        wr8(param_1 + 0x6du, 1u);
        wr8(param_1 + 0x6eu, 1u);
        wr8(param_1 + 4u, 1u);
    }
    return param_1;
}
