#include "tc_rt.h"

void fn_800f7364(u32 param_1, f64 param_f1, u32 param_r4)
{
    TcArgs a = {0};
    a.f[0] = param_f1;
    a.r[0] = rd32(param_1);
    a.r[1] = param_r4;
    (void)tc_call(0x800f6eb8u, &a);
    return;
}
