#include "tc_rt.h"

s32 fn_8012019c(s32 param_1)
{
    u32 r3 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + 0x40u;
    r30 = 0xffffffffu;
    r29 = 0u;
    for (;;) {
        if (rd32(r31 + 4u) == 0u) {
            r3 = rd32(r31 + 0x4cu);
            if ((r3 & 4u) == 0u && (r3 & 1u) == 0u && (r3 & 8u) == 0u && (r3 & 0x10u) == 0u && (r3 & 0x20u) == 0u) break;
        } else {
            a.r[0] = (u32)param_1;
            a.r[1] = r31;
            r3 = tc_call(0x8012108cu, &a);
            if (r3 == 0u) {
                r3 = rd32(r31 + 0x4cu);
                if ((r3 & 4u) == 0u && (r3 & 1u) == 0u && (r3 & 8u) == 0u && (r3 & 0x10u) == 0u && (r3 & 0x20u) == 0u) break;
            }
        }
        r29 = r29 + 1u;
        r31 = r31 + 0x80u;
        if ((s32)r29 >= 48) {
            return (s32)r30;
        }
    }
    r30 = r29;
    return (s32)r30;
}
