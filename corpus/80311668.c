#include "tc_rt.h"

s32 fn_80311668(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x802de7dcu, &a);
    a.r[0] = (u32)param_1 + 0xcu;
    a.r[1] = 0u;
    (void)tc_call(0x802de7dcu, &a);
    wr16((u32)param_1 + 0x18u, 0u);
    return param_1;
}
