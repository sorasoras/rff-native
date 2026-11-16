#include "tc_rt.h"

void fn_80193ba4(s32 param_1, u32 param_2)
{
    u32 r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r31 = rd32(rd32((u32)param_1 + 0x20u));
    a.r[0] = param_2;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = 8u;
    (void)tc_call(0x800f8734u, &a);
    wr8(0x817fdff0u, 0u);
    a.r[0] = r31;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x802e4518u, &a);
    return;
}
