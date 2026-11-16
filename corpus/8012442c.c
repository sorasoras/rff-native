#include "tc_rt.h"

void fn_8012442c(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (u32)param_2 + (rd32(param_1) * 0x14u);
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 8u;
    (void)tc_call(0x800f8734u, &a);
    a.r[0] = rd32(rd32(param_1 + 0x18u));
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x802e4518u, &a);
    return;
}
