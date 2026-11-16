#include "tc_rt.h"

void fn_8011bc48(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    TcArgs a = {0};
    r6 = rd32(param_2);
    r0 = ppc_mulhw(1374389535, (s32)r6);
    r4 = (u32)((s32)r0 >> 5);
    r0 = (u32)((s32)r0 >> 5);
    r0 = r0 + ((r0 >> 0x1fu) & 1u);
    r0 = r0 * 0x64u;
    a.r[0] = r4 + ((r4 >> 0x1fu) & 1u);
    a.r[1] = r6 - r0;
    r3 = tc_call(0x8011ba50u, &a);
    a.r[0] = r3;
    a.r[1] = rd32(param_1);
    a.r[2] = rd32(param_1 + 4u);
    (void)tc_call(0x8011baf4u, &a);
    return;
}
