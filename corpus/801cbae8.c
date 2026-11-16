#include "tc_rt.h"

void fn_801cbae8(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = param_2;
    (void)tc_call(0x801cbb54u, &a);
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.r[2] = param_3;
    (void)tc_call(0x801cbb54u, &a);
    a.r[0] = param_1;
    a.r[1] = 2u;
    a.r[2] = param_4;
    (void)tc_call(0x801cbb54u, &a);
    return;
}
