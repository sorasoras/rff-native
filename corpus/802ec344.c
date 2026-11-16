#include "tc_rt.h"

void fn_802ec344(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r6 = 0, r10 = 0, r30 = 0;
    if (param_2 != 0u) {
        r10 = rd32((u32)param_1 + 0x38u);
        r30 = rd32((u32)param_1 + 0x3cu);
        r0 = (r30 >> 9u) & 0x1fu;
        r6 = ((((r10 >> 0x12u) & 3u) + ((r10 >> 0x18u) & 0xfu)) * 0x14u) + (((r10 >> 0x1cu) & 0xfu) * 0x1cu) + (((r10 >> 4u) & 4u) + (((r10 >> 0xcu) & 4u) + (((r10 >> 5u) & 4u) + (((r10 >> 0x12u) & 0x3cu) + ((r10 >> 6u) & 4u)))));
        r6 = rd32((u32)param_1 + 0x40u) + r6;
        r6 = ((r10 >> 3u) & 4u) + ((r10 >> 0xdu) & 0x1cu) + r6;
        r30 = ((r30 >> 5u) & 0x1f0u) + r6;
        ctr = param_2 - r0;
        if (r0 < param_2) {
            do {
                if (r30 != 0u) {
                    wr8(r30, 0xffu);
                    wr8(r30 + 1u, 4u);
                    wr8(r30 + 2u, 0xffu);
                    wr8(r30 + 3u, 0u);
                    wr8(r30 + 4u, 0xffu);
                    wr8(r30 + 5u, 0xafu);
                    wr8(r30 + 8u, 0x77u);
                    wr8(r30 + 9u, 0x57u);
                    wr8(r30 + 6u, 0u);
                    wr8(r30 + 7u, 0x61u);
                    wr8(r30 + 0xau, 0u);
                    wr8(r30 + 0xbu, 0x81u);
                    wr8(r30 + 0xcu, 0u);
                    wr8(r30 + 0xdu, 0u);
                    wr8(r30 + 0xeu, 0u);
                    wr8(r30 + 0xfu, 0u);
                }
                r30 = r30 + 0x10u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
        }
    }
    wr32((u32)param_1 + 0x3cu, (rd32((u32)param_1 + 0x3cu) & 0xffffc1ffu) | ((param_2 << 9u) & 0x3e00u));
    return;
}
