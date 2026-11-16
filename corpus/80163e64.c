#include "tc_rt.h"

void fn_80163e64(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 8u;
    r3 = tc_call(0x8011e538u, &a);
    if (((ppc_cntlzw(r3 - 2u) >> 5u) & 0x7ffffffu) == 0u) {
        a.r[0] = (u32)param_1 + 8u;
        a.r[1] = 0u;
        (void)tc_call(0x8011e5a0u, &a);
        wr32((u32)param_1 + 0x48u, 0xffffffffu);
        wr32((u32)param_1 + 0x4cu, 0xffffffffu);
        wr32((u32)param_1 + 0x44u, 0u);
    }
    return;
}
