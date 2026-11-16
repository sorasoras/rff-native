#include "tc_rt.h"

void fn_8025ec98(s32 param_1, f64 param_f1)
{
    u32 r3 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.f[0] = param_f1;
    a.r[0] = 0x817fdfe8u;
    f1 = tc_callf(0x8026291cu, &a);
    r3 = rd32(0x817fdfe8u) + (u32)param_1;
    wr32(0x817fdfe8u, r3);
    a.f[0] = f1;
    a.r[0] = r3;
    (void)tc_call(0x802629a4u, &a);
    return;
}
