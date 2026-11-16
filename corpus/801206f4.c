#include "tc_rt.h"

void fn_801206f4(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_2 >= 0) {
        r31 = (u32)param_1 + (((u32)param_2 << 7u) & 0xffffff80u);
        if (rd32(r31 + 0x44u) != 0u) {
            a.r[0] = r31 + 0x50u;
            a.r[1] = 5u;
            (void)tc_call(0x8011e5a0u, &a);
        }
        r3 = rd32(r31 + 0x48u);
        c0eq = r3 == 0u;
        if (!c0eq && !c0eq) {
            a.r[0] = r3;
            a.r[1] = 3u;
            (void)tc_call(0x802f5fd8u, &a);
        }
        wr32(r31 + 0x8cu, 0u);
    }
    return;
}
