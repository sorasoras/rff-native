#include "tc_rt.h"

void fn_8028a35c(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_1 != 0u) {
        r31 = (u32)param_1 - 8u;
        if ((r31 & 1u) == 0u) {
            r0 = (u32)rd8(r31 + 4u);
            if (r0 >= 9u) {
                r0 = 0u;
            } else {
                r0 = (r0 << 4u) & 0xff0u;
                r0 = (u32)rd16(r0 - 0x7fac6570u);
            }
        } else {
            r0 = 0u;
        }
        r4 = (u32)param_1 + r0;
        if ((r4 & 1u) == 0u) {
            r4 = rd32(r4);
            r0 = (((0xddbaddbau - r4) | (r4 + 0x22452246u)) >> 0x1fu) & 1u;
        } else {
            r0 = 1u;
        }
        r0 = r0 & 0xffu;
        if (r0 == 0u) {
            if ((u32)rd8(r31 + 6u) == 1u) {
                if ((u32)rd8(r31 + 4u) < 9u) {
                    (void)tc_call(0x8028b7a8u, &a);
                    r4 = (((u32)rd8(r31 + 4u) << 4u) & 0xfffffff0u) - 0x7fabef58u;
                    r3 = rd32(r4 - 0x761cu);
                    if (r3 == 0u) {
                        wr32(r4 - 0x7620u, r31);
                    } else {
                        wr32(r3, r31);
                    }
                    wr32(r4 - 0x761cu, r31);
                    wr32(r31, 0u);
                    wr8(r31 + 6u, 0u);
                    wr8(r31 + 5u, 0xf0u);
                    r3 = (u32)rd16(r4 - 0x7614u);
                    if (r3 != 0u) {
                        wr16(r4 - 0x7614u, (u16)(r3 - 1u));
                    }
                    (void)tc_call(0x8028b784u, &a);
                    return;
                }
                (void)tc_call(0x8028b7ecu, &a);
                return;
            }
            (void)tc_call(0x8028b7ecu, &a);
            return;
        }
    }
    (void)tc_call(0x8028b7ecu, &a);
    return;
}
