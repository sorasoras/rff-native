#include "tc_rt.h"

void fn_80044e78(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr8(0x817fdff8u, (u8)param_1);
    wr8(0x817fdff9u, (u8)param_2);
    wr8(0x817fdffau, (u8)param_3);
    wr8(0x817fdffbu, (u8)param_4);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, rd32(0x817fdff8u));
    a.r[0] = 0x817fdffcu;
    a.r[1] = param_5;
    (void)tc_call(0x802514f8u, &a);
    return;
}
