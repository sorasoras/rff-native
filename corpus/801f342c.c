#include "tc_rt.h"

void fn_801f342c(s32 param_1)
{
    u32 ctr = 0, r4 = 0, r5 = 0, r6 = 0;
    r4 = (u32)param_1;
    r6 = 0u;
    r5 = (u32)param_1;
    ctr = 8u;
    do {
        if ((s32)rd32(r4 + ((rd32((u32)param_1 + 0xfb8u) << 2u) & 0xfffffffcu)) > 0) {
            wr32(r5 + 0xf14u, r6);
            r5 = r5 + 4u;
        }
        r4 = r4 + 0x18u;
        r6 = r6 + 1u;
        if ((s32)rd32(r4 + ((rd32((u32)param_1 + 0xfb8u) << 2u) & 0xfffffffcu)) > 0) {
            wr32(r5 + 0xf14u, r6);
            r5 = r5 + 4u;
        }
        r4 = r4 + 0x18u;
        r6 = r6 + 1u;
        if ((s32)rd32(r4 + ((rd32((u32)param_1 + 0xfb8u) << 2u) & 0xfffffffcu)) > 0) {
            wr32(r5 + 0xf14u, r6);
            r5 = r5 + 4u;
        }
        r4 = r4 + 0x18u;
        r6 = r6 + 1u;
        if ((s32)rd32(r4 + ((rd32((u32)param_1 + 0xfb8u) << 2u) & 0xfffffffcu)) > 0) {
            wr32(r5 + 0xf14u, r6);
            r5 = r5 + 4u;
        }
        r4 = r4 + 0x18u;
        r6 = r6 + 1u;
        if ((s32)rd32(r4 + ((rd32((u32)param_1 + 0xfb8u) << 2u) & 0xfffffffcu)) > 0) {
            wr32(r5 + 0xf14u, r6);
            r5 = r5 + 4u;
        }
        r4 = r4 + 0x18u;
        r6 = r6 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
