#include "tc_rt.h"

void fn_8004f8d8(void)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0x803c68d0u;
    r30 = 0u;
    do {
        if (rd32(r31 + 0x1cu) != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x803058a4u, &a);
            a.r[0] = r31;
            (void)tc_call(0x8030582cu, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x2cu;
    } while ((s32)r30 < 8);
    return;
}
