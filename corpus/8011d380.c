#include "tc_rt.h"

void fn_8011d380(u32 param_r3)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_r3;
    r3 = tc_call(0x8011d534u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3) + 0x38u), &a);
    return;
}
