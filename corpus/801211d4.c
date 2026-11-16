#include "tc_rt.h"

u32 fn_801211d4(s32 param_1)
{
    TcArgs a = {0};
    if (rd32(rd32((u32)param_1 + 0x20u) + 4u) != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x24u);
        a.r[1] = 4u;
        (void)tc_call(0x8011e5a0u, &a);
    } else {
        a.r[0] = rd32((u32)param_1 + 0x24u);
        a.r[1] = 0u;
        (void)tc_call(0x8011e5a0u, &a);
    }
    return 1u;
}
