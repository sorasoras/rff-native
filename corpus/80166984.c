#include "tc_rt.h"

u32 fn_80166984(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    wr32(param_1, 0x8036a628u);
    wr32(param_1 + 0x1694u, 0x26u);
    wr32(param_1 + 0x1690u, 0x8036a850u);
    wr32(param_1 + 0x169cu, 0x27u);
    wr32(param_1 + 0x1698u, 0x8036a820u);
    return param_1;
}
