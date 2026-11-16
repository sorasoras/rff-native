#include "tc_rt.h"

void fn_8030199c(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x802550d4u, &a);
    r4 = r3;
    if ((u32)rd8((u32)param_2 + r3 - 1u) != 0x2fu) {
        wr8((u32)param_1 + r3 + 8u, 0x2fu);
        r4 = r3 + 1u;
    }
    r4 = (u32)param_1 + r4;
    wr8(r4 + 8u, 0u);
    a.r[0] = (u32)param_1 + 8u;
    a.r[1] = (u32)param_2;
    a.r[2] = r3;
    (void)tc_call(0x8025bdf4u, &a);
    return;
}
