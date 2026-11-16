#include "tc_rt.h"

u32 fn_8011ecc8(s32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r3 = rd32((u32)param_1 + 0x50u);
    if (r3 != 0u) {
        a.r[0] = r3;
        a.r[1] = 0u;
        a.f[0] = 0.0;
        r3 = tc_call(rd32(rd32(r3) + 0x14u), &a);
        if (r3 != 0u) {
            r31 = 1u;
        }
    }
    return r31;
}
