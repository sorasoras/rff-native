#include "tc_rt.h"

void fn_8003fe98(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    (void)param_2;
    (void)tc_call(0x8003d490u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8003f7c0u, &a);
    a.r[0] = 1u;
    (void)tc_call(0x8003f770u, &a);
    a.r[0] = param_1;
    a.r[1] = param_3;
    (void)tc_call(0x8003fd08u, &a);
    return;
}
