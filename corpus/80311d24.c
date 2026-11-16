#include "tc_rt.h"

s32 fn_80311d24(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x1cu, 0x8039d828u);
    a.r[0] = (u32)param_1 + 0xc0u;
    a.r[1] = 0x14u;
    (void)tc_call(0x802de7dcu, &a);
    a.r[0] = (u32)param_1 + 0xccu;
    a.r[1] = 0x14u;
    (void)tc_call(0x802de7dcu, &a);
    wr16((u32)param_1 + 0xd8u, 0u);
    return param_1;
}
