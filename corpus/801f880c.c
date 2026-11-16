#include "tc_rt.h"

void fn_801f880c(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x801f888cu, &a);
    a.r[0] = r3;
    a.r[1] = param_2;
    (void)tc_call(0x800d5450u, &a);
    r3 = tc_call(0x801f8868u, &a);
    if ((s32)r3 >= 3) {
        a.r[0] = param_1;
        a.r[1] = 1u;
        (void)tc_call(0x801f8890u, &a);
    }
    return;
}
