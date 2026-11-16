#include "tc_rt.h"

u32 fn_800f41bc(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800ce4d4u, &a);
    wr32(param_1, 0x8035bee8u);
    a.r[0] = param_1 + 0x20u;
    (void)tc_call(0x800cfca0u, &a);
    wr32(param_1 + 0x4cu, 0u);
    wr32(param_1 + 0x48u, 0xau);
    return param_1;
}
