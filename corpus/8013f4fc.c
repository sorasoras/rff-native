#include "tc_rt.h"

void fn_8013f4fc(u32 param_1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_1;
    r3 = tc_call(0x8013f438u, &a);
    f1 = tc_lastf();
    a.r[0] = r3;
    a.r[1] = param_1;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(r3 + 0xcu) + 0xcu), &a);
    return;
}
