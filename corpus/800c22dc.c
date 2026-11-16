#include "tc_rt.h"

void fn_800c22dc(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x8006cd5cu, &a);
    a.r[0] = param_1;
    a.r[1] = 0u;
    (void)tc_call(0x800c234cu, &a);
    return;
}
