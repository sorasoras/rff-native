#include "tc_rt.h"

void fn_8015a47c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_2 == 0u) {
        wr16((u32)param_1 + 0x83cu, 0u);
    } else {
        a.r[0] = (u32)param_2;
        r3 = tc_call(0x8025e7a4u, &a);
        r31 = 0x1fu;
        if (r3 <= 0x1fu) {
            r31 = r3;
        }
        a.r[0] = (u32)param_1 + 0x83cu;
        a.r[1] = (u32)param_2;
        a.r[2] = r31;
        (void)tc_call(0x8025e7dcu, &a);
        wr16((u32)param_1 + ((r31 << 1u) & 0xfffffffeu) + 0x83cu, 0u);
    }
    return;
}
