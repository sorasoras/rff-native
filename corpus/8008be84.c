#include "tc_rt.h"

void fn_8008be84(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x80084df4u, &a);
    wr32((u32)param_1 + 0x4150u, 0u);
    a.r[0] = (u32)param_1 + 0x4154u;
    (void)tc_call(0x8007ae84u, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x8008c9c8u, &a);
    return;
}
