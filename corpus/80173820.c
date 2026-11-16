#include "tc_rt.h"

void fn_80173820(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(param_1) + 0xb0u), &a);
    wr32(param_1 + 0x120u, 3u);
    return;
}
