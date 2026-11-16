#include "tc_rt.h"

s32 fn_803107b4(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 0x1cu, 0x8039d7c0u);
    a.r[0] = (u32)param_1 + 0x24u;
    a.r[1] = 0x14u;
    (void)tc_call(0x802de7dcu, &a);
    a.r[0] = (u32)param_1 + 0x30u;
    a.r[1] = 0x14u;
    (void)tc_call(0x802de7dcu, &a);
    wr16((u32)param_1 + 0x3cu, 0u);
    a.r[0] = (u32)param_1 + 0x90u;
    a.r[1] = 0x30u;
    (void)tc_call(0x802de7dcu, &a);
    return param_1;
}
