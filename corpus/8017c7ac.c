#include "tc_rt.h"

u32 fn_8017c7ac(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    r6 = (param_3 & 0xffu) - 0x7fb6d800u;
    r7 = (u32)rd8(r6 + 0x39cu);
    r0 = r7 + 1u;
    if (r0 <= 0x3cu) {
        wr8(r6 + 0x39cu, (u8)r0);
        r5 = 1u;
    } else {
        r5 = 0x3cu - r7;
        wr8(r6 + 0x39cu, 0x3cu);
    }
    if (r5 != 1u) {
        r3 = 0u;
    } else {
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = 0x1eu;
        r3 = tc_call(0x8017c730u, &a);
        if (r3 == 0u) {
            r3 = (param_3 & 0xffu) - 0x7fb6d800u;
            r4 = (u32)rd8(r3 + 0x39cu);
            if (r4 > 1u) {
                wr8(r3 + 0x39cu, (u8)(r4 - 1u));
            } else {
                wr8(r3 + 0x39cu, 0u);
            }
            r3 = 0u;
        } else {
            r3 = 1u;
        }
    }
    return r3;
}
