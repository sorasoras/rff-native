#include "tc_rt.h"

void fn_80308558(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    wr8((u32)param_1 + 0x123u, (u8)param_2);
    if ((u32)param_2 != 0u) {
        wr8((u32)param_1 + 0x125u, 1u);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80309d30u, &a);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return;
}
