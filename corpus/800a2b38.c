#include "tc_rt.h"

void fn_800a2b38(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x800a2d38u, &a);
    a.r[0] = r3;
    a.r[1] = param_2;
    (void)tc_call(0x8009ba78u, &a);
    return;
}
