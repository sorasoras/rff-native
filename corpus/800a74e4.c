#include "tc_rt.h"

void fn_800a74e4(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x800a4040u, &a);
    a.r[0] = r3;
    a.r[1] = param_1;
    a.r[2] = param_2;
    (void)tc_call(0x80118cd8u, &a);
    return;
}
