#include "tc_rt.h"

void fn_8004ba74(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    (void)param_2;
    a.r[0] = rd32(0x803c62c8u);
    a.r[1] = param_1;
    (void)tc_call(0x8003b3a4u, &a);
    return;
}
