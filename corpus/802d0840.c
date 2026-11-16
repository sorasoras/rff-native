#include "tc_rt.h"

void fn_802d0840(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdff8u, (u32)param_1 + 0x1cu);
    a.r[0] = (u32)param_1 + 0x18u;
    a.r[1] = 0x817fdff8u;
    a.r[2] = param_2;
    (void)tc_call(0x802d7a8cu, &a);
    return;
}
