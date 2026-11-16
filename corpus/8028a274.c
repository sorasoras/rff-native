#include "tc_rt.h"

u32 fn_8028a274(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_1 >= 9u) {
        r3 = 0u;
    } else {
        (void)tc_call(0x8028b7a8u, &a);
        r31 = (param_1 << 4u) & 0xff0u;
        r4 = r31 - 0x7fabef04u;
        if ((u32)rd16(r4 - 0x7668u) < (u32)rd16(r4 - 0x766au)) {
            r31 = rd32(r4 - 0x7674u);
            r0 = rd32(r31);
            wr32(r4 - 0x7674u, r0);
            if (r0 == 0u) {
                wr32(r4 - 0x7670u, 0u);
            }
            r0 = (u32)rd16(r4 - 0x7668u) + 1u;
            wr16(r4 - 0x7668u, (u16)r0);
            if ((r0 & 0xffffu) > (u32)rd16(r4 - 0x7666u)) {
                wr16(r4 - 0x7666u, rd16(r4 - 0x7668u));
            }
            (void)tc_call(0x8028b784u, &a);
            r3 = tc_call(0x8028b77cu, &a);
            wr8(r31 + 5u, (u8)r3);
            r3 = r31 + 8u;
            wr8(r31 + 6u, 1u);
            wr32(r31, 0u);
            wr8(r31 + 7u, 0u);
        } else {
            (void)tc_call(0x8028b784u, &a);
            a.r[0] = (u32)rd16(r31 - 0x7fac6570u);
            r3 = tc_call(0x8028a0d4u, &a);
        }
    }
    return r3;
}
