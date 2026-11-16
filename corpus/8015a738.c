#include "tc_rt.h"

s32 fn_8015a738(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800a5f50u, &a);
    wr32((u32)param_1 + 0x14u, 0xffffffffu);
    wr32((u32)param_1 + 0x18u, 0xffffffffu);
    return param_1;
}
