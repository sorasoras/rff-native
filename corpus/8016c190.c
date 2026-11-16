#include "tc_rt.h"

void fn_8016c190(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    (void)param_1;
    a.r[0] = (u32)param_2;
    (void)tc_call(0x800b3354u, &a);
    r3 = rd32((u32)param_2 + 0xf78u);
    wr32((u32)param_2 + 0xf78u, r3 ^ (r3 & 1u));
    return;
}
