#include "tc_rt.h"

u32 fn_800d6bc8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x80070854u, &a);
    wr32(param_1 + 0x7cu, 0u);
    wr32(param_1, 0x80355d10u);
    return param_1;
}
