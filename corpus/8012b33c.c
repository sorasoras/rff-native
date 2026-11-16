#include "tc_rt.h"

void fn_8012b33c(s32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r3 = tc_call(0x8012aafcu, &a);
    a.r[0] = r3;
    a.r[1] = 1u;
    f1 = tc_callf(0x8011a004u, &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = r3;
    a.r[1] = tc_lastr4();
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x28u), &a);
    return;
}
