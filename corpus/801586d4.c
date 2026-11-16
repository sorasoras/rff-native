#include "tc_rt.h"

void fn_801586d4(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    wr32(param_1 + 0x120u, 0u);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0xa4u), &a);
    a.r[0] = param_1 + 0x2fcu;
    (void)tc_call(0x80147160u, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    (void)tc_call(0x800da124u, &a);
    return;
}
