#include "tc_rt.h"

void fn_802ed894(s32 param_1, u32 param_2)
{
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = rd32((u32)param_1 + 4u);
    a.r[2] = (rd32((u32)param_1 + 0x18u) >> 0xdu) & 3u;
    a.r[3] = (u32)rd16((u32)param_1 + 0x16u);
    (void)tc_call(0x80252774u, &a);
    return;
}
