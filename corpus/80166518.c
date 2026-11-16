#include "tc_rt.h"

u32 fn_80166518(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    wr32(param_1, 0x8036a1b0u);
    wr32(param_1 + 0x1694u, 0x26u);
    wr32(param_1 + 0x1698u, 2u);
    wr32(param_1 + 0x1690u, 0x8036a3ecu);
    wr32(param_1 + 0x16a0u, 0x27u);
    wr32(param_1 + 0x16a4u, 3u);
    wr32(param_1 + 0x169cu, 0x8036a3a8u);
    return param_1;
}
