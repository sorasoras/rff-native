#include "tc_rt.h"

void fn_802fa2e8(s32 param_1)
{
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    if ((u32)rd8((u32)param_1 + 0xcu) != 0u) {
        wr8((u32)param_1 + 0xcu, 0u);
        a.r[0] = (u32)param_1 + 0x10u;
        a.r[1] = 0x817fdfecu;
        a.r[2] = 0x817fdfe8u;
        (void)tc_call(0x802f4eecu, &a);
        a.r[0] = (u32)param_1 + 0x2cu;
        (void)tc_call(0x802479e0u, &a);
        a.r[0] = (u32)param_1 + 0x10u;
        a.r[1] = rd32(0x817fdfecu);
        a.r[2] = rd32(0x817fdfe8u);
        (void)tc_call(0x802f4f40u, &a);
    }
    return;
}
