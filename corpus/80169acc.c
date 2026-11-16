#include "tc_rt.h"

u32 fn_80169acc(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800af074u, &a);
    wr32(param_1, 0x8036bff0u);
    wr32(param_1 + 0x1694u, 0x27u);
    wr32(param_1 + 0x1690u, 0x8036c1e8u);
    return param_1;
}
