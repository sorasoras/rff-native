#include "tc_rt.h"

void fn_80162b8c(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r29 = 0u;
    r31 = (u32)param_1;
    do {
        r3 = rd32(r31 + 4u);
        if (rd32(r3 + 0x4cu) == 3u) {
            r3 = r3 + 8u;
            a.r[0] = r3;
            r3 = tc_call(0x8011e538u, &a);
            if (((ppc_cntlzw(r3 - 2u) >> 5u) & 0x7ffffffu) == 0u) {
                a.r[0] = rd32(r31 + 4u);
                (void)tc_call(0x80163e64u, &a);
            } else {
                r30 = rd32(r31 + 4u);
            }
        }
        r29 = r29 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r29 < 16);
    if (r30 != 0u) {
        for (;;) {
            r3 = tc_call(0x8004f248u, &a);
            if (r3 == 0u) break;
            a.r[0] = r30 + 8u;
            a.r[1] = 0u;
            (void)tc_call(0x8011e5a0u, &a);
            a.r[0] = r30;
            (void)tc_call(0x80163e64u, &a);
        }
    }
    wr32((u32)param_1 + 0x48u, 0u);
    wr32((u32)param_1 + 0x44u, 0u);
    wr32((u32)param_1 + 0x74u, 1u);
    return;
}
