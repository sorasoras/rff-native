#include "tc_rt.h"

void fn_8012b3c8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    (void)tc_call(rd32(rd32(r3 + 0x28u) + 0x28u), &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu);
    (void)tc_call(0x8012abecu, &a);
    r3 = tc_call(0x8012aafcu, &a);
    a.r[0] = r3;
    a.r[1] = 1u;
    (void)tc_call(0x8011a004u, &a);
    return;
}
