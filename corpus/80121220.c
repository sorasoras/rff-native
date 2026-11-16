#include "tc_rt.h"

u32 fn_80121220(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(rd32((u32)param_1 + 0x20u) + 4u);
    if (r3 != 0u) {
        a.r[0] = r3;
        r3 = tc_call(0x802f70e0u, &a);
    } else {
        r3 = 0u;
    }
    if ((s32)r3 <= 0) {
        a.r[0] = rd32((u32)param_1 + 0x24u);
        a.r[1] = 0u;
        (void)tc_call(0x8011e5a0u, &a);
    }
    return 1u;
}
