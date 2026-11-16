#include "tc_rt.h"

void fn_8007f6c0(u32 param_1)
{
    TcArgs a = {0};
    wr32(0x817fdff0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[3] = 0x817fdff8u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0xe8u), &a);
    return;
}
