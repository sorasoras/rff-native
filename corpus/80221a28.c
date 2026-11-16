#include "tc_rt.h"

s32 fn_80221a28(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x14u, 0x80378e88u);
    a.r[0] = (u32)param_1 + 8u;
    (void)tc_call(0x80163efcu, &a);
    return param_1;
}
