#include "tc_rt.h"

void fn_8016a824(u32 param_1, u32 param_2)
{
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = 0x805711d0u;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 1u;
    (void)tc_call(0x80154f74u, &a);
    return;
}
