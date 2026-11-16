#include "tc_rt.h"

void fn_8011c0f4(s32 param_1, u32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = (u32)param_1 + 0xcu;
    do {
        r3 = rd32(param_2);
        if ((s32)r3 < 0) {
            a.r[0] = r30;
            (void)tc_call(0x8011bb44u, &a);
        } else {
            if (r3 == rd32(r30)) {
                a.r[0] = r30;
                (void)tc_call(0x8011bb44u, &a);
                return;
            }
        }
        r31 = r31 + 1u;
        r30 = r30 + 8u;
    } while ((s32)r31 < 8);
    return;
}
