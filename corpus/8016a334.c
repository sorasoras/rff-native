#include "tc_rt.h"

void fn_8016a334(u32 param_1, s32 param_2)
{
    u32 r0 = 0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    if (rd32((u32)param_2 + 0x1670u) != 0u) {
        r0 = rd32((u32)param_2 + 0xcf8u);
        wr32(0x817fdfe8u, rd32((u32)param_2 + 0xcf4u));
        wr32(0x817fdfecu, r0);
        wr32(0x817fdff0u, rd32((u32)param_2 + 0xcfcu));
        a.r[0] = rd32((u32)param_2 + 0x1670u);
        a.r[1] = 0x817fdfe8u;
        (void)tc_call(0x8015811cu, &a);
    }
    return;
}
