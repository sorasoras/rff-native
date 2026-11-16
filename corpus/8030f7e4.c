#include "tc_rt.h"

u32 fn_8030f7e4(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d56cu, &a);
    r31 = (u32)param_1;
    if ((u32)param_1 != 0u) {
        r31 = (u32)param_1 + 0xdcu;
    }
    r3 = tc_call(0x80306860u, &a);
    a.r[0] = r3;
    a.r[1] = r31;
    (void)tc_call(0x80306c2cu, &a);
    wr8((u32)param_1 + 0xe9u, 1u);
    r3 = tc_call(0x80306860u, &a);
    r3 = r3 + 0x354u;
    a.r[0] = r3;
    (void)tc_call(0x8022d648u, &a);
    return 1u;
}
