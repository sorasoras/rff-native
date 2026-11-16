#include "tc_rt.h"

void fn_801dc8e4(u32 param_1, u32 param_2, u32 param_3)
{
    TcArgs a = {0};
    a.f[0] = (f64)rdf32(0x80576218u);
    a.r[0] = 0x1au;
    a.r[1] = param_3;
    a.r[2] = 0x804890c8u;
    a.r[3] = 0x804b15c0u;
    (void)tc_call(0x800d782cu, &a);
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = param_3;
    (void)tc_call(0x8007f238u, &a);
    return;
}
