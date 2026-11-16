#include "tc_rt.h"

void fn_80274a6c(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr8(0x817fdff8u, (u8)param_1);
    a.r[0] = 0x817fdff8u;
    a.r[1] = param_2;
    a.r[2] = 0x60u;
    (void)tc_call(0x802746d8u, &a);
    return;
}
