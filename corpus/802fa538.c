#include "tc_rt.h"

void fn_802fa538(s32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, s32 param_6, u32 param_r9)
{
    TcArgs a = {0};
    (void)param_2;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if ((u32)rd8((u32)param_1 + 0xcu) != 0u && (u32)param_6 != 2u) {
        wr32(0x817fdfe8u, rd32(param_3));
        wr32(0x817fdfecu, rd32(param_3 + 4u));
        wr32(0x817fdff0u, rd32(param_3 + 8u));
        a.r[0] = 0x817fdfe8u;
        a.r[1] = (u32)param_1 + 0x2cu;
        a.r[2] = param_3;
        a.r[3] = param_4;
        a.r[4] = param_5;
        a.r[5] = (u32)param_6;
        a.r[6] = param_r9;
        (void)tc_call(0x80247a8cu, &a);
    }
    return;
}
