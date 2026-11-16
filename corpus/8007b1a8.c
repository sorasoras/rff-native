#include "tc_rt.h"

void fn_8007b1a8(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = (u32)param_2;
    r3 = tc_call(0x80031774u, &a);
    f1 = tc_lastf();
    if (r3 != 0u) {
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.f[0] = f1;
        (void)tc_call(rd32((u32)param_2 + 0x5cu), &a);
        (void)tc_call(0x80040278u, &a);
    }
    return;
}
