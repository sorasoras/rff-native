#include "tc_rt.h"

void fn_800f36dc(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0x28u), &a);
    f1 = tc_lastf();
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = r3;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0xbcu), &a);
    return;
}
