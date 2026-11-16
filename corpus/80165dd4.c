#include "tc_rt.h"

u32 fn_80165dd4(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    wr32(param_1, 0x80369b68u);
    wr32(param_1 + 0x1690u, 0u);
    wr32(param_1 + 0x1698u, 0x25u);
    wr32(param_1 + 0x169cu, 1u);
    wr32(param_1 + 0x1694u, 0x80369d68u);
    return param_1;
}
