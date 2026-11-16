#include "tc_rt.h"

u32 fn_802bb87c(void)
{
    u32 ca = 0, ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r4 = rd32(0x80571bc4u);
    wr32(r4 + 0x69cu, rd32(r4 + 0x69cu) + 2u);
    r4 = rd32(0x80571bc4u);
    r3 = rd32(r4 + 0x69cu);
    wr32(r4 + 0x69cu, r3 + 1u);
    if ((u32)rd8(r3) != 3u) {
        return 0xcu;
    }
    r8 = 0u;
    ctr = 3u;
    do {
        r5 = rd32(0x80571bc4u);
        r6 = (r8 & 0xffu) * 6u;
        wr32(r5 + 0x69cu, rd32(r5 + 0x69cu) + 1u);
        r5 = rd32(0x80571bc4u);
        r4 = rd32(r5 + 0x69cu);
        wr32(r5 + 0x69cu, r4 + 1u);
        r4 = (u32)rd8(r4);
        r5 = (u32)((s32)r4 >> 4);
        r7 = r4 & 0xfu;
        wr8(rd32(0x80571bc4u) + r6 + 0x681u, (u8)r5);
        r0 = ((r5 & 0x20u) != 0u) ? 0u : (1u << (r5 & 0x1fu));
        wr8(rd32(0x80571bc4u) + r6 + 0x682u, (u8)r7);
        r5 = rd32(0x80571bc4u);
        r4 = (u32)rd8(r5 + 0x6a8u);
        r0 = r4 & r0;
        if (r0 == 0u) {
            return 0xfu;
        }
        r0 = r7 + 1u;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = r4 & r0;
        if (r0 == 0u) {
            return 0xfu;
        }
        r8 = r8 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    wr32(r5 + 0x69cu, rd32(r5 + 0x69cu) + 3u);
    r5 = rd32(0x80571bc4u);
    r4 = (u32)rd16(r5 + 0x692u) + 0xfu;
    ca = ((s32)r4 < 0) && ((r4 & 0xfu) != 0u);
    r4 = (u32)((s32)r4 >> 4);
    wr16(r5 + 0x696u, (u16)((u64)r4 + (u64)ca));
    wr16(rd32(0x80571bc4u) + 0x684u, 0u);
    wr16(rd32(0x80571bc4u) + 0x68au, 0u);
    wr16(rd32(0x80571bc4u) + 0x690u, 0u);
    return 0u;
}
