#include "tc_rt.h"

void fn_80287bc4(u32 param_r3)
{
    u32 r3 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r28 = 0u;
    r3 = tc_call(0x8022c2b0u, &a);
    r27 = r3;
    r31 = 0x8050f224u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        a.r[1] = param_r3;
        a.r[2] = 6u;
        r3 = tc_call(0x802592d8u, &a);
        if (r3 == 0u) {
            r28 = (r30 * 0x60u) - 0x7faf0e1cu;
            break;
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x60u;
    } while ((s32)r30 < 10);
    if (r28 == 0u) {
        r31 = 0x8050f5e4u;
        r30 = 0u;
        for (;;) {
            a.r[0] = r31;
            a.r[1] = param_r3;
            a.r[2] = 6u;
            r3 = tc_call(0x802592d8u, &a);
            if (r3 == 0u) break;
            r30 = r30 + 1u;
            r31 = r31 + 0x60u;
            if ((s32)r30 >= 6) {
                a.r[0] = r27;
                (void)tc_call(0x8022c2d8u, &a);
                return;
            }
        }
    }
    a.r[0] = r27;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
