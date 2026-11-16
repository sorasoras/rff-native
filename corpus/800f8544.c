#include "tc_rt.h"

void fn_800f8544(u32 param_1, u32 param_r4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_r4;
    r3 = tc_call(0x800f83f4u, &a);
    a.r[0] = param_1;
    a.r[1] = r3;
    (void)tc_call(0x800f84d8u, &a);
    return;
}
