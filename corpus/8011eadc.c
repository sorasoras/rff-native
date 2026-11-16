#include "tc_rt.h"

void fn_8011eadc(s32 param_1)
{
    u32 c0eq = 0, r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x50u);
    c0eq = r3 == 0u;
    if (!c0eq) {
        if (c0eq) {
            return;
        }
        a.r[0] = r3;
        a.r[1] = 1u;
        a.r[2] = 2u;
        (void)tc_call(0x802f61c0u, &a);
        return;
    }
    return;
}
