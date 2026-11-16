#include "tc_rt.h"

void fn_8011bbf0(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32((u32)param_1 + 0x4cu);
    r3 = tc_call(0x8011ba70u, &a);
    if ((s32)r31 > 0 && rd32((u32)param_1 + 0x54u) != 0u) {
        wr32((u32)param_1 + 0x54u, 0u);
    }
    wr32((u32)param_1 + 0x4cu, r3);
    return;
}
