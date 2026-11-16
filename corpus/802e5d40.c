#include "tc_rt.h"

void fn_802e5d40(u32 param_1, u32 param_2, u32 param_3)
{
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = 0x817fdfe8u;
    a.r[1] = param_2;
    f1 = tc_callf(0x802ee708u, &a);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = param_3;
    a.f[0] = f1;
    (void)tc_call(rd32(rd32(param_1) + 0x18u), &a);
    return;
}
