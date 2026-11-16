#include "tc_rt.h"

void fn_8008ad80(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32(param_2 + 4u);
    r0 = rd32(param_2 + 8u);
    wr32(param_1, rd32(param_2));
    wr32(param_1 + 4u, r6);
    wr32(param_1 + 8u, r0);
    a.r[0] = param_1;
    a.r[1] = param_3;
    a.r[2] = param_1;
    (void)tc_call(0x802343a4u, &a);
    return;
}
