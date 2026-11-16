#include "tc_rt.h"

void fn_80126834(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    r3 = tc_call(0x8012542cu, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = rd32(rd32((u32)param_1 + 0x1cu) + 0x430u);
        r3 = tc_call(0x801894d8u, &a);
        a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
        a.r[1] = r3;
        (void)tc_call(0x80119ffcu, &a);
    }
    return;
}
