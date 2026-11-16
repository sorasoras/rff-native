#include "tc_rt.h"

void fn_80201154(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x5ebu;
    a.r[1] = 0x8020119cu;
    a.r[2] = (u32)param_1;
    r3 = tc_call(0x800f939cu, &a);
    wr32((u32)param_1 + 0x90u, r3);
    wr32((u32)param_1 + 0x94u, 0u);
    return;
}
