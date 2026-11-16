#include "tc_rt.h"

u32 fn_8014f254(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x158u;
    (void)tc_call(0x80147160u, &a);
    if (rd32((u32)param_1 + 0x134u) == 1u) {
        r3 = 1u;
    } else {
        a.r[0] = (u32)param_1;
        r3 = tc_call(0x801efda8u, &a);
    }
    return r3;
}
