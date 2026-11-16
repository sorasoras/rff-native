#include "tc_rt.h"

void fn_8018fe40(s32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0xc8u;
    r30 = 0u;
    do {
        a.r[0] = r31;
        r3 = tc_call(0x80320fe4u, &a);
        if (r3 != 0u) {
            a.r[0] = r31;
            (void)tc_call(0x80157e6cu, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x54u;
    } while ((s32)r30 < 4);
    return;
}
