#include "tc_rt.h"

void fn_80154758(u32 param_1, f64 param_f1)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.r[0] = param_1;
    a.r[1] = 1u;
    (void)tc_call(0x80154760u, &a);
    return;
}
