#include "tc_rt.h"

void fn_801f85e8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x801f888cu, &a);
    a.r[0] = r3;
    (void)tc_call(0x800d3704u, &a);
    wr32((u32)param_1 + 0x73cu, 0xffffffffu);
    wr32((u32)param_1 + 0x740u, 0xffffffffu);
    wr32((u32)param_1 + 0x744u, 0u);
    a.r[0] = (u32)param_1;
    a.r[1] = 0u;
    (void)tc_call(0x801f897cu, &a);
    return;
}
