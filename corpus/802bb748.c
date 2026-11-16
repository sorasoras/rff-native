#include "tc_rt.h"

u32 fn_802bb748(void)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0;
    r4 = rd32(0x80571bc4u);
    wr32(r4 + 0x69cu, rd32(r4 + 0x69cu) + 2u);
    r4 = rd32(0x80571bc4u);
    r3 = rd32(r4 + 0x69cu);
    wr32(r4 + 0x69cu, r3 + 1u);
    if ((u32)rd8(r3) == 8u) {
        r5 = rd32(0x80571bc4u);
        r4 = rd32(r5 + 0x69cu);
        wr16(r5 + 0x694u, (u16)(((u32)rd8(r4 + 1u) & 0xffff00ffu) | (((u32)rd8(r4) << 8u) & 0xff00u)));
        r4 = rd32(0x80571bc4u);
        wr32(r4 + 0x69cu, rd32(r4 + 0x69cu) + 2u);
        r5 = rd32(0x80571bc4u);
        r4 = rd32(r5 + 0x69cu);
        wr16(r5 + 0x692u, (u16)(((u32)rd8(r4 + 1u) & 0xffff00ffu) | (((u32)rd8(r4) << 8u) & 0xff00u)));
        r4 = rd32(0x80571bc4u);
        wr32(r4 + 0x69cu, rd32(r4 + 0x69cu) + 2u);
        r4 = rd32(0x80571bc4u);
        r3 = rd32(r4 + 0x69cu);
        wr32(r4 + 0x69cu, r3 + 1u);
        if ((u32)rd8(r3) == 3u) {
            r7 = 0u;
            ctr = 3u;
            do {
                r4 = rd32(0x80571bc4u);
                wr32(r4 + 0x69cu, rd32(r4 + 0x69cu) + 1u);
                r4 = rd32(0x80571bc4u);
                r3 = rd32(r4 + 0x69cu);
                wr32(r4 + 0x69cu, r3 + 1u);
                r3 = (u32)rd8(r3);
                if (((r7 & 0xffu) == 0u && r3 != 0x22u) || ((r7 & 0xffu) != 0u && r3 != 0x11u)) {
                    return 0x13u;
                }
                r6 = rd32(0x80571bc4u);
                r0 = (r7 & 0xffu) * 6u;
                r7 = r7 + 1u;
                r5 = rd32(r6 + 0x69cu);
                wr8(r6 + r0 + 0x680u, rd8(r5));
                wr32(r6 + 0x69cu, r5 + 1u);
                ctr = ctr - 1u;
            } while (ctr != 0u);
            return 0u;
        }
        return 0xcu;
    }
    return 0xau;
}
