#include "tc_rt.h"

void fn_80044e74(f64 param_1, f64 param_2)
{
    TcArgs a = {0};
    a.f[0] = param_1;
    a.f[1] = param_2;
    (void)tc_call(0x80254714u, &a);
    return;
}
