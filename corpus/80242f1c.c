#include "tc_rt.h"

void fn_80242f1c(u32 param_1)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x805717d0u, 0x817fdff0u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0x805717d4u;
    a.r[7] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(param_1, &a);
    return;
}
