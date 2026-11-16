#include "tc_rt.h"

u32 fn_8007b7cc(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r28 = 0u;
    r29 = 0u;
    while ((s32)r28 < (s32)rd16((u32)param_2 + 0x1eu)) {
        r4 = rd32((u32)param_1 + 0x38u) + (rd32((u32)param_1 + 0x3cu) * (u32)rd16(rd32((u32)param_2 + 0x20u) + r29));
        r3 = rd32(r4 + 0x40u);
        if (r3 != 0u) {
            r3 = rd32(r3 + 0x20u);
            r30 = r3 + 0x40u;
        } else {
            r30 = rd32(r4 + 0x54u);
        }
        r31 = rd32(r4 + 0x50u);
        r3 = tc_call(0x8004d970u, &a);
        if (rd32(r3) == 0u) {
            a.r[0] = r30;
            a.r[1] = r31;
            a.r[2] = r3;
            r3 = tc_call(0x8007b204u, &a);
        } else {
            a.r[0] = r30;
            a.r[1] = r31;
            a.r[2] = r3;
            r3 = tc_call(0x8007b504u, &a);
        }
        if (r3 != 0u) {
            r3 = 1u;
            return r3;
        }
        r29 = r29 + 2u;
        r28 = r28 + 1u;
    }
    r3 = 0u;
    return r3;
}
