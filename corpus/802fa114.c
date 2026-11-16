#include "tc_rt.h"

void fn_802fa114(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, s32 param_6)
{
    TcArgs a = {0};
    (void)param_2;
    (void)param_4;
    (void)param_5;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if ((u32)rd8((u32)param_1 + 0xcu) != 0u && (u32)param_6 != 2u) {
        wr32(0x817fdfe8u, rd32(param_3));
        wr32(0x817fdfecu, rd32(param_3 + 4u));
        wr32(0x817fdff0u, rd32(param_3 + 8u));
        a.r[0] = 0x817fdfe8u;
        a.r[1] = (u32)param_1 + 0x2cu;
        (void)tc_call(0x802490a0u, &a);
    }
    return;
}
