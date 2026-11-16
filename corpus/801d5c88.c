#include "tc_rt.h"

void fn_801d5c88(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801d5530u, &a);
    wr32((u32)param_1 + 0x78u, 0u);
    r3 = tc_call(0x80040b64u, &a);
    r3 = r3 & 0x1fu;
    wr32((u32)param_1 + 0x7cu, r3 + 0x1eu);
    return;
}
