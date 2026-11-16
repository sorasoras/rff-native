#include "tc_rt.h"

void fn_80161e68(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if (rd32((u32)param_1 + 0x5cu) != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = param_2;
        a.r[2] = 0x817fdfe8u;
        (void)tc_call(0x80161eb0u, &a);
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x80161ef0u, &a);
    }
    return;
}
