#include "tc_rt.h"

void fn_802d0c34(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdfe8u, (u32)param_1 + 0x14u);
    a.r[0] = (u32)param_1 + 0x10u;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = (u32)param_2 + 4u;
    (void)tc_call(0x802d7a8cu, &a);
    wr32((u32)param_2 + 0xcu, (u32)param_1);
    return;
}
