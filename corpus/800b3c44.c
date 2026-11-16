#include "tc_rt.h"

void fn_800b3c44(u32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800b3c0cu, &a);
    a.r[0] = param_1;
    (void)tc_call(0x800b38acu, &a);
    a.r[0] = param_1;
    f1 = tc_callf(0x8007e314u, &a);
    a.r[0] = param_1;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x1e4u), &a);
    return;
}
