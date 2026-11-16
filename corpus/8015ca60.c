#include "tc_rt.h"

u32 fn_8015ca60(u32 param_1)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    for (;;) {
        a.r[0] = param_1;
        a.r[1] = r31;
        r3 = tc_call(0x8015cb24u, &a);
        r30 = r3;
        a.r[0] = r3;
        r3 = tc_call(0x800d50b8u, &a);
        if (r3 != 0u) {
            a.r[0] = r30;
            r3 = tc_call(0x800d5168u, &a);
            if (r3 == 0u) {
                r3 = 1u;
                return r3;
            }
            if ((u32)((s32)((rd32(r30 + 0x72cu) << 4u) & 0xc0000000u) >> 31) != 0u) {
                a.r[0] = r30;
                r3 = tc_call(0x800d50c4u, &a);
                if (r3 == 0u) break;
            } else {
                r3 = tc_call(0x80097da4u, &a);
                r3 = rd32(r3 + 0x40u);
                a.r[0] = r3;
                r3 = tc_call(0x8015a388u, &a);
                if (r3 != 0u) {
                    r3 = 1u;
                    return r3;
                }
            }
        }
        r31 = r31 + 1u;
        if ((s32)r31 >= 4) {
            r3 = 0u;
            return r3;
        }
    }
    r3 = 1u;
    return r3;
}
