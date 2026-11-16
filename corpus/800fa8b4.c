#include "tc_rt.h"

void fn_800fa8b4(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x800fa768u, &a);
    if (r3 != 0u) {
        r4 = rd32((u32)param_1 + 0x1cu);
        r31 = r4 + 0x44u;
        r4 = rd32(r4 + 0x430u);
        a.r[0] = r3;
        a.r[1] = r4;
        r3 = tc_call(0x801894d8u, &a);
        a.r[0] = r31;
        a.r[1] = r3;
        (void)tc_call(0x80119ffcu, &a);
    }
    return;
}
