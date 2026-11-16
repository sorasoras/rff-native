#include "tc_rt.h"

u32 fn_80169194(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    wr32(param_1, 0x8036b728u);
    wr32(param_1 + 0x1694u, 0x26u);
    wr32(param_1 + 0x1698u, 2u);
    wr32(param_1 + 0x1690u, 0x8036b91cu);
    wr32(param_1 + 0x169cu, 0u);
    return param_1;
}
