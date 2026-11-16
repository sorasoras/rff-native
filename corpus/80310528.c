#include "tc_rt.h"

void fn_80310528(u32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    if ((u32)param_2 == 2u) {
        a.r[0] = param_1;
        (void)tc_call(0x802f8588u, &a);
    }
    wr32((u32)param_3 + 0x130u, 0u);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
