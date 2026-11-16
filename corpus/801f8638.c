#include "tc_rt.h"

void fn_801f8638(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = param_2;
    a.r[0] = param_1;
    (void)tc_call(0x801f85e8u, &a);
    if (param_2 == 0u) {
        r30 = 0x805709d8u;
    }
    r3 = tc_call(0x801f888cu, &a);
    a.r[0] = r3;
    a.r[1] = r30;
    (void)tc_call(0x801f83d4u, &a);
    if (param_3 >= 0) {
        r3 = tc_call(0x801f888cu, &a);
        a.r[0] = r3;
        a.r[1] = 0u;
        (void)tc_call(0x800d5bacu, &a);
        a.r[0] = 0x804b9da0u;
        a.r[1] = (u32)param_3;
        (void)tc_call(0x8010a75cu, &a);
    }
    r3 = tc_call(0x801f888cu, &a);
    a.r[0] = r3;
    (void)tc_call(0x800d395cu, &a);
    r3 = tc_call(0x801f888cu, &a);
    a.r[0] = r3;
    (void)tc_call(0x800d48d4u, &a);
    return;
}
