#include "tc_rt.h"

void fn_8013d404(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr16(0x817fdff8u, (u16)param_2);
    wr8(0x817fdffau, (u8)param_3);
    wr8(0x817fdffbu, (u8)param_4);
    a.r[0] = param_1;
    a.r[1] = 0x817fdff8u;
    a.r[2] = 0x817fdffau;
    a.r[3] = 0x817fdffbu;
    (void)tc_call(0x8017ab38u, &a);
    return;
}
