#include "tc_rt.h"

void fn_8028a77c(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_2 - 8u;
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
    r4 = (u32)param_2 + r0;
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
            if (rd32(param_1) != 0u) {
                wr32(rd32(param_1 + 4u) - 8u, r31);
            } else {
                wr32(param_1, (u32)param_2);
            }
            r4 = (u32)rd16(param_1 + 8u);
            wr32(param_1 + 4u, (u32)param_2);
            r4 = r4 + 1u;
            wr16(param_1 + 8u, (u16)r4);
            wr32(r31, 0u);
            wr8(r31 + 6u, 2u);
            (void)tc_call(0x8028b784u, &a);
        }
    }
    return;
}
