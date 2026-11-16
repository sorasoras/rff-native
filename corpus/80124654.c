#include "tc_rt.h"

void fn_80124654(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr16(0x817fdff8u, (u16)param_2);
    wr8(0x817fdffau, 1u);
    wr8(0x817fdffbu, 1u);
    a.r[0] = (u32)param_1 + 0xbcu;
    a.r[1] = 0x817fdff8u;
    a.r[2] = 4u;
    (void)tc_call(0x80004338u, &a);
    return;
}
