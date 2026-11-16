#include "tc_rt.h"

void fn_802ab2d0(void)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 0x80540a28u;
    do {
        if ((u32)rd8(r30) != 0u) {
            r3 = (u32)rd16(r30 + 0x28u);
            if (r3 != 0xffffu) {
                a.r[0] = r3;
                a.r[1] = 0xffu;
                (void)tc_call(0x802a7a5cu, &a);
            }
        }
        r31 = r31 + 1u;
        r30 = r30 + 0x5cu;
    } while ((s32)r31 < 4);
    return;
}
