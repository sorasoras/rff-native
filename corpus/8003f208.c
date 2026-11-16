#include "tc_rt.h"

void fn_8003f208(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if ((u32)param_2 != 0xffffffffu) {
        a.r[0] = param_1;
        r3 = tc_call(0x8003f06cu, &a);
        r31 = r3;
        wr8(0x817fdfe8u, rd8(param_1));
        wr8(0x817fdfe9u, rd8(param_1 + 1u));
        wr8(0x817fdfeau, rd8(param_1 + 2u));
        wr8(0x817fdfebu, rd8(param_1 + 3u));
        a.r[0] = 0u;
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x802535e8u, &a);
        a.r[0] = r31;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        (void)tc_call(0x80254568u, &a);
    }
    return;
}
