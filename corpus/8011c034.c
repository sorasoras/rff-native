#include "tc_rt.h"

void fn_8011c034(s32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r7 = 0, r9 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = (u32)param_1 + 0xcu;
    do {
        a.r[0] = r30;
        r3 = tc_call(0x8011bb54u, &a);
        if (r3 == 0u) break;
        r31 = r31 + 1u;
        r30 = r30 + 8u;
    } while ((s32)r31 < 8);
    if (r31 != 8u) {
        wr32(r30, rd32(param_2));
        r9 = rd32(param_2 + 4u);
        r0 = ppc_mulhw(1374389535, (s32)r9);
        r7 = (u32)((s32)r0 >> 5);
        r0 = (u32)((s32)r0 >> 5);
        r0 = r0 + ((r0 >> 0x1fu) & 1u);
        r0 = r0 * 0x64u;
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[2] = 0u;
        a.r[3] = r7 + ((r7 >> 0x1fu) & 1u);
        a.r[4] = r9 - r0;
        r3 = tc_call(0x8011ba1cu, &a);
        r31 = r3;
        r3 = tc_call(0x8011ba70u, &a);
        wr32(r30 + 4u, r3 + r31);
    }
    return;
}
