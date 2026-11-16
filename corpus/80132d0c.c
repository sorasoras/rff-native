#include "tc_rt.h"

void fn_80132d0c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x80132d54u, &a);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = rd32((u32)param_1 + 0x434u);
        r3 = tc_call(0x801894d8u, &a);
        a.r[0] = (u32)param_1 + 0x48u;
        a.r[1] = r3;
        (void)tc_call(0x80119ffcu, &a);
    }
    return;
}
