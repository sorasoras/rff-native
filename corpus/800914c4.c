#include "tc_rt.h"

void fn_800914c4(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1;
    r30 = 0u;
    do {
        r3 = rd32(r31 + 0xbf8u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x800901e8u, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 4u;
    } while ((s32)r30 < 20);
    return;
}
