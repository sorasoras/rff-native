#include "tc_rt.h"

void fn_8004e1dc(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr8(0x817fdff8u, (u8)param_1);
    wr8(0x803c65a6u, (u8)param_1);
    wr8(0x803c65a7u, (u8)param_2);
    wr8(0x803c65a8u, (u8)param_3);
    wr8(0x803c65a9u, 0u);
    wr8(0x817fdff9u, (u8)param_2);
    wr8(0x817fdffau, (u8)param_3);
    wr8(0x817fdffbu, 0u);
    a.r[0] = 0x817fdff8u;
    (void)tc_call(0x80253c0cu, &a);
    return;
}
