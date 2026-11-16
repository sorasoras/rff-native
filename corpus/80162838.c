#include "tc_rt.h"

void fn_80162838(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x44u);
    if (r4 != 0u) {
        a.r[0] = r4 + 8u;
        (void)tc_call(0x8011e5d8u, &a);
        a.r[0] = rd32((u32)param_1 + 0x44u) + 8u;
        r3 = tc_call(0x8011e538u, &a);
        if (((ppc_cntlzw(r3) >> 5u) & 0x7ffffffu) != 0u) {
            r4 = rd32((u32)param_1 + 0x44u);
            r5 = rd32(r4 + 0x44u);
            wr32(r4 + 0x44u, 0u);
            if (r5 == 0u) {
                wr32((u32)param_1 + 0x48u, 0u);
                wr32((u32)param_1 + 0x74u, 1u);
            }
            wr32((u32)param_1 + 0x44u, r5);
        }
    }
    return;
}
