#include "tc_rt.h"

void fn_802c271c(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    (void)tc_call(0x802c2b14u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    (void)tc_call(0x802c1fa0u, &a);
    return;
}
