#include "tc_rt.h"

s32 fn_8031d344(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x1cu, 0x8039daa8u);
    a.r[0] = (u32)param_1 + 0x38u;
    a.r[1] = 0x14u;
    (void)tc_call(0x802de7dcu, &a);
    a.r[0] = (u32)param_1 + 0x44u;
    a.r[1] = 0x14u;
    (void)tc_call(0x802de7dcu, &a);
    wr16((u32)param_1 + 0x50u, 0u);
    return param_1;
}
