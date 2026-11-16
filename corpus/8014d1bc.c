#include "tc_rt.h"

void fn_8014d1bc(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x48u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = 1u;
        (void)tc_call(0x802f5fd8u, &a);
    }
    a.r[0] = (u32)param_1 + 0xcu;
    (void)tc_call(0x8011e3f0u, &a);
    return;
}
