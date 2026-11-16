#include "tc_rt.h"

void fn_8011eafc(s32 param_1)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x50u);
    c0eq = r0 == 0u;
    if (!c0eq) {
        r31 = 0u;
        if (!c0eq) {
            a.r[0] = r0;
            r3 = tc_call(0x802f6540u, &a);
            if (r3 != 0u) {
                r31 = 1u;
            }
        }
        if (r31 != 0u) {
            r3 = rd32((u32)param_1 + 0x50u);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 0u;
                a.r[2] = 2u;
                (void)tc_call(0x802f61c0u, &a);
            }
        }
    }
    return;
}
