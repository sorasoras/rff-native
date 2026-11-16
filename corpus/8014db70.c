#include "tc_rt.h"

void fn_8014db70(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    r3 = tc_call(0x8014db2cu, &a);
    a.r[0] = r3;
    a.r[1] = param_3;
    (void)tc_call(0x8014d9dcu, &a);
    return;
}
