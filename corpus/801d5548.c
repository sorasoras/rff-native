#include "tc_rt.h"

void fn_801d5548(s32 param_1, f64 param_f1)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.r[0] = rd32((u32)param_1 + 8u);
    (void)tc_call(0x80064b48u, &a);
    return;
}
