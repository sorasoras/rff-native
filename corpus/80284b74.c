#include "tc_rt.h"

void fn_80284b74(u32 param_1)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    f1 = tc_callf(0x80289ba4u, &a);
    a.r[0] = param_1;
    a.r[1] = 0x8050f100u;
    a.f[0] = f1;
    (void)tc_call(rd32(0x8050f7f4u), &a);
    return;
}
