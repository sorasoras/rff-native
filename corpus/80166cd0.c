#include "tc_rt.h"

u32 fn_80166cd0(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    wr32(param_1, 0x8036a880u);
    wr32(param_1 + 0x1694u, 0x24u);
    wr32(param_1 + 0x1698u, 0u);
    wr32(param_1 + 0x1690u, 0x8036aa74u);
    wr32(param_1 + 0x16a0u, 0x26u);
    wr32(param_1 + 0x16a4u, 2u);
    wr32(param_1 + 0x169cu, 0x8036aab8u);
    wr32(param_1 + 0x16b0u, 0x28u);
    wr32(param_1 + 0x16acu, 0x8036ab00u);
    return param_1;
}
