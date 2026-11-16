#include "tc_rt.h"

void fn_80162c98(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x44u);
    if (r5 == 0u) {
        wr32((u32)param_1 + 0x44u, (u32)param_2);
        wr32((u32)param_1 + 0x48u, (u32)param_2);
    } else {
        a.r[0] = r5 + 8u;
        r3 = tc_call(0x8011e538u, &a);
        if (((ppc_cntlzw(r3 - 2u) >> 5u) & 0x7ffffffu) != 0u) {
            wr32((u32)param_2 + 0x44u, rd32(rd32((u32)param_1 + 0x44u) + 0x44u));
            wr32(rd32((u32)param_1 + 0x44u) + 0x44u, (u32)param_2);
            if (rd32((u32)param_1 + 0x44u) != rd32((u32)param_1 + 0x48u)) {
                return;
            }
            wr32((u32)param_1 + 0x48u, (u32)param_2);
        } else {
            wr32((u32)param_2 + 0x44u, rd32((u32)param_1 + 0x44u));
            wr32((u32)param_1 + 0x44u, (u32)param_2);
        }
    }
    return;
}
