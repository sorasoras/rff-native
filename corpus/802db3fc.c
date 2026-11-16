#include "tc_rt.h"

void fn_802db3fc(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x805475ccu) + ((u32)(s8)rd8(rd32((u32)param_1 + 0x18u) - 0x7fab8a98u) * 0x64u);
    if (param_2 < 0) {
        r0 = 0u;
    } else {
        r0 = 0x7fu;
        if (param_2 <= 127) {
            r0 = (u32)param_2;
        }
    }
    wr32(r31 + 0x10u, r0);
    a.r[0] = r31;
    (void)tc_call(0x802da74cu, &a);
    wr32(r31 + 4u, rd32(r31 + 4u) | 0x40000000u);
    return;
}
