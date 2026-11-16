#include "tc_rt.h"

void fn_8028a510(u32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    if ((param_1 >= 8u || param_2 >= 4u) || (u32)rd8(param_1 - 0x7fac6758u) == 0u) {
        (void)tc_call(0x8028b7ecu, &a);
        a.r[0] = (u32)param_3;
        (void)tc_call(0x8028a35cu, &a);
    } else {
        r31 = (u32)param_3 - 8u;
        if ((r31 & 1u) != 0u) {
            r0 = 0u;
        } else {
            r0 = (u32)rd8(r31 + 4u);
            if (r0 < 9u) {
                r0 = (r0 << 4u) & 0xff0u;
                r0 = (u32)rd16(r0 - 0x7fac6570u);
            } else {
                r0 = 0u;
            }
        }
        r4 = (u32)param_3 + r0;
        if ((r4 & 1u) != 0u) {
            r0 = 1u;
        } else {
            r4 = rd32(r4);
            r0 = (((0xddbaddbau - r4) | (r4 + 0x22452246u)) >> 0x1fu) & 1u;
        }
        r0 = r0 & 0xffu;
        if (r0 != 0u) {
            (void)tc_call(0x8028b7ecu, &a);
        } else {
            if ((u32)rd8(r31 + 6u) != 1u) {
                (void)tc_call(0x8028b7ecu, &a);
            } else {
                (void)tc_call(0x8028b7a8u, &a);
                r4 = (param_1 << 4u) & 0xff0u;
                r5 = (param_2 << 2u) & 0x3fcu;
                r3 = r4 - 0x7fabef04u + r5;
                if (rd32(r3 - 0x7774u) != 0u) {
                    r3 = rd32(r3 - 0x76f4u);
                    wr32(r3, r31);
                } else {
                    wr32(r3 - 0x7774u, r31);
                }
                r4 = r4 - 0x7fabef04u;
                r4 = r4 + r5;
                wr32(r4 - 0x76f4u, r31);
                wr32(r31, 0u);
                wr8(r31 + 6u, 2u);
                wr8(r31 + 5u, (u8)param_1);
                (void)tc_call(0x8028b784u, &a);
                a.r[0] = param_1;
                a.r[1] = (((param_2 & 0x20u) != 0u) ? 0u : (1u << (param_2 & 0x1fu))) & 0xffffu;
                (void)tc_call(0x8028b6d8u, &a);
            }
        }
    }
    return;
}
