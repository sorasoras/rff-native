#include "tc_rt.h"

void fn_8017bff8(u32 param_r4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r9 = 0, r12 = 0;
    (void)param_r4;
    r3 = 0u;
    r4 = 0u;
    ctr = 9u;
    do {
        r9 = r4 - 0x7fb6d800u;
        r12 = 0u;
        r0 = (u32)rd8(r9 + 0x39cu);
        if (r0 >= 0x23u) {
            r12 = 0x10u;
        } else {
            if (r0 != 0u) {
                r12 = 1u;
            }
        }
        r0 = (u32)rd8(r9 + 0x39du);
        if (r0 >= 0x23u) {
            r12 = r12 | 0x20u;
        } else {
            if (r0 != 0u) {
                r12 = r12 | 2u;
            }
        }
        r0 = (u32)rd8(r9 + 0x39eu);
        if (r0 >= 0x23u) {
            r12 = r12 | 0x40u;
        } else {
            if (r0 != 0u) {
                r12 = r12 | 4u;
            }
        }
        r0 = (u32)rd8(r9 + 0x39fu);
        if (r0 >= 0x23u) {
            r12 = r12 | 0x80u;
        } else {
            if (r0 != 0u) {
                r12 = r12 | 8u;
            }
        }
        if ((r12 & 0xf0u) == 0xf0u) {
            wr32(r3 - 0x7fc90de8u, 1u);
        } else {
            if ((r12 & 0xffu) != 0u) {
                wr32(r3 - 0x7fc90de8u, 0u);
            } else {
                wr32(r3 - 0x7fc90de8u, 0xffffffffu);
            }
        }
        r3 = r3 + 8u;
        r4 = r4 + 4u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
