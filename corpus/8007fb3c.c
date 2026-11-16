#include "tc_rt.h"

void fn_8007fb3c(s32 param_1)
{
    u32 r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = 0u;
    r31 = rd32((u32)param_1 + 0x2fcu);
    do {
        if (rd32(r31 + 8u) != 0u) {
            r29 = 0u;
            do {
                r4 = (u32)(s8)rd8(r31 + r29 + 0xcu);
                if (r4 != 0xffffffffu) {
                    a.r[0] = (u32)param_1 + 0x27cu;
                    a.r[1] = r4;
                    (void)tc_call(0x800a25e4u, &a);
                }
                r29 = r29 + 1u;
            } while ((s32)r29 < 3);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x24u;
    } while ((s32)r30 < 4);
    return;
}
