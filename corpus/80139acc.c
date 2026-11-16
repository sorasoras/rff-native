#include "tc_rt.h"

s32 fn_80139acc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 4u;
    (void)tc_call(0x80163efcu, &a);
    a.r[0] = (u32)param_1 + 0x14u;
    (void)tc_call(0x800f82d0u, &a);
    return param_1;
}
