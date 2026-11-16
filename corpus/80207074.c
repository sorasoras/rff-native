#include "tc_rt.h"

u32 fn_80207074(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80150c84u, &a);
    wr32(param_1 + 0x1698u, 0u);
    wr32(param_1, 0x80377678u);
    wr32(param_1 + 0x169cu, 0u);
    wr32(param_1 + 0x16a0u, 0u);
    wr32(param_1 + 0x16a4u, 0u);
    wr32(param_1 + 0x16a8u, 0u);
    wr32(param_1 + 0x16acu, 0u);
    wr32(param_1 + 0x16b0u, 0u);
    wr32(param_1 + 0x16b4u, 0u);
    return param_1;
}
