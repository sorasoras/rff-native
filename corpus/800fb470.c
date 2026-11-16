#include "tc_rt.h"

void fn_800fb470(s32 param_1)
{
    u32 r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = r5 + 0x70u;
    a.r[1] = rd32(r5 + 0x12f0u);
    (void)tc_call(0x80210c90u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x70u;
    a.r[1] = 0u;
    (void)tc_call(0x80210878u, &a);
    return;
}
