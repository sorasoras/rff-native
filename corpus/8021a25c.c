#include "tc_rt.h"

void fn_8021a25c(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r3 = 0, r5 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r30 = (u32)param_2 - 1u;
    r31 = (u32)param_1 + ((r30 << 2u) & 0xfffffffcu);
    while ((s32)r30 >= 0) {
        r3 = rd32(r31 + 0x58u);
        if (r3 != 0u) {
            r5 = rd32(r31 + 0x14u);
            if (r5 != 0xffffffffu) {
                r3 = r3 + ((r5 << 3u) & 0xfffffff8u);
                if ((s32)rd16(r3 + 0x10u) <= param_3) {
                    a.r[0] = (u32)param_1;
                    a.r[1] = r30;
                    a.r[2] = r5;
                    (void)tc_call(0x8021a1f4u, &a);
                }
            }
        }
        r31 = r31 - 4u;
        r30 = r30 - 1u;
    }
    return;
}
