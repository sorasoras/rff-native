#include "tc_rt.h"

void fn_8004220c(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0x817fdfc8u;
    a.r[1] = (u32)(s16)param_2;
    (void)tc_call(0x80041a00u, &a);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = param_1;
    (void)tc_call(0x802337a0u, &a);
    return;
}
