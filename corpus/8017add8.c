#include "tc_rt.h"

void fn_8017add8(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)rd8((u32)param_1 + 2u) + (u32)rd8(param_3);
    a.r[0] = (u32)rd16(param_2);
    r3 = tc_call(0x8017afecu, &a);
    r4 = r31 - r3;
    wr8(param_3, (u8)(r4 & (u32)((s32)((0u - r4) & ~r4) >> 31)));
    if ((s32)r31 < (s32)r3) {
        r3 = r31;
    }
    wr8((u32)param_1 + 2u, (u8)r3);
    if ((u32)rd8(param_3) == 0u) {
        wr8(param_4, 0u);
        wr16(param_2, 0x2e8u);
    }
    return;
}
