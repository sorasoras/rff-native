#include "tc_rt.h"

void fn_8015c074(f64 param_1, f64 param_2, f64 param_3, f64 param_4, u32 param_5)
{
    TcArgs a = {0};
    a.f[0] = param_3;
    a.f[1] = param_4;
    a.r[0] = param_5;
    (void)tc_call(0x800d3178u, &a);
    a.f[0] = param_1;
    a.f[1] = param_2;
    a.r[0] = param_5;
    (void)tc_call(0x800d316cu, &a);
    return;
}
