#include "tc_rt.h"

void fn_801cebf8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801cf87cu, &a);
    a.r[0] = param_1;
    a.r[1] = 1u;
    (void)tc_call(0x801cf7b0u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x801cde10u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x801ce1a0u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x801ce20cu, &a);
    return;
}
