#include "tc_rt.h"

void fn_802e54f4(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdff8u, (u32)param_1 + 4u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdff8u;
    a.r[2] = (u32)param_2 + 4u;
    (void)tc_call(0x802deba4u, &a);
    return;
}
