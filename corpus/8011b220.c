#include "tc_rt.h"

void fn_8011b220(s32 param_1, s32 param_2, u32 param_3)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_2 >= 0) {
        if (param_2 >= 4) {
            return;
        }
        r31 = (u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu);
        if ((s32)rd32(r31 + 0x10u) < 0) {
            a.r[0] = 0x804b9da0u;
            a.r[1] = param_3;
            r3 = tc_call(0x8010a75cu, &a);
            if ((s32)r3 >= 0) {
                wr32(r31 + 0x10u, r3);
            }
        }
    }
    return;
}
