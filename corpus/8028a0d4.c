#include "tc_rt.h"

u32 fn_8028a0d4(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r7 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (param_1 != 0u) {
        r31 = 0u;
        r5 = (u32)rd8(0x80539b83u);
        while ((r31 & 0xffu) < r5 && param_1 > (u32)rd16((((u32)rd8((r31 & 0xffu) - 0x7fac6486u) << 4u) & 0xfffffff0u) - 0x7fac6570u)) {
            r31 = r31 + 1u;
        }
        if ((r31 & 0xffu) != r5) {
            (void)tc_call(0x8028b7a8u, &a);
            r7 = (u32)rd8(0x80539b83u);
            for (;;) {
                if ((r31 & 0xffu) >= r7) {
                    (void)tc_call(0x8028b784u, &a);
                    r3 = 0u;
                    return r3;
                }
                r4 = (u32)rd8((r31 & 0xffu) - 0x7fac6486u);
                if (((u32)rd16(0x80539b78u) & (((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu)))) == 0u) {
                    r4 = ((r4 << 4u) & 0xff0u) - 0x7fabef04u;
                    if ((u32)rd16(r4 - 0x7668u) < (u32)rd16(r4 - 0x766au)) break;
                }
                r31 = r31 + 1u;
            }
            r30 = rd32(r4 - 0x7674u);
            r0 = rd32(r30);
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
            wr8(r30 + 5u, (u8)r3);
            r3 = r30 + 8u;
            wr8(r30 + 6u, 1u);
            wr32(r30, 0u);
            wr8(r30 + 7u, 0u);
        } else {
            (void)tc_call(0x8028b7ecu, &a);
            r3 = 0u;
        }
    } else {
        (void)tc_call(0x8028b7ecu, &a);
        r3 = 0u;
    }
    return r3;
}
