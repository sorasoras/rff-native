#include "tc_rt.h"

void fn_800b3aec(u32 param_1)
{
    u32 r3 = 0, r4 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_1) + 0xccu), &a);
    f1 = tc_lastf();
    r4 = r3;
    r3 = rd32(param_1 + 0x364u);
    a.r[0] = r3;
    a.r[1] = r4;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3) + 0xcu), &a);
    return;
}
