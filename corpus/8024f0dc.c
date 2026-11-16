#include "tc_rt.h"

void fn_8024f0dc(void)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    if ((u32)rd8(0x80571979u) != 0u) {
        r3 = tc_call(0x8022c2b0u, &a);
        r29 = rd32(0x80576c88u);
        r28 = r3;
        r0 = rd32(r29 + 8u) & 0xfffffffeu;
        wr32(r29 + 8u, r0);
        wr16(rd32(0x80571954u) + 2u, (u16)r0);
        r0 = rd32(r29 + 8u) & 0xfffffff3u;
        wr32(r29 + 8u, r0);
        wr16(rd32(0x80571954u) + 2u, (u16)r0);
        r0 = rd32(0x80500698u);
        wr32(0x8050069cu, 0u);
        r3 = rd32(0x80571954u);
        wr32(0x80500694u, r0);
        wr16(r3 + 0x30u, 0u);
        wr16(rd32(0x80571954u) + 0x34u, (u16)rd32(0x80500698u));
        wr16(rd32(0x80571954u) + 0x38u, (u16)rd32(0x80500694u));
        wr16(rd32(0x80571954u) + 0x32u, (u16)((s32)rd32(0x8050069cu) >> 16));
        wr16(rd32(0x80571954u) + 0x36u, (u16)((rd32(0x80500698u) >> 0x10u) & 0x3fffu));
        wr16(rd32(0x80571954u) + 0x3au, (u16)((rd32(0x80500694u) >> 0x10u) & 0x3fffu));
        (void)tc_call(0x802250a0u, &a);
        if ((u32)rd8(0x80571990u) != 0u) {
            r4 = rd32(0x80500698u);
            r0 = rd32(0x8050069cu);
            wr32(0x805006b8u, rd32(0x80500694u));
            r3 = rd32(0x80571950u);
            wr32(0x805006bcu, r4);
            wr32(0x805006c0u, r0);
            wr32(r3 + 0x14u, r4 & 0x1fffffe0u);
            r0 = (rd32(r29 + 8u) | 4u) & 0xfffffff7u;
            wr32(r29 + 8u, r0);
            wr16(rd32(0x80571954u) + 2u, (u16)r0);
            r0 = rd32(r29 + 8u) | 0x10u;
            wr32(r29 + 8u, r0);
            wr16(rd32(0x80571954u) + 2u, (u16)r0);
        }
        r6 = rd32(0x80576c88u);
        r5 = rd32(r29 + 8u) & 0xffffffddu;
        wr32(r29 + 8u, r5);
        wr16(rd32(0x80571954u) + 2u, (u16)r5);
        wr32(0x80571980u, 0u);
        r0 = rd32(r6 + 0x10u) | 3u;
        wr32(r6 + 0x10u, r0);
        wr16(rd32(0x80571954u) + 4u, (u16)r0);
        r0 = rd32(r29 + 8u) | 1u;
        wr32(r29 + 8u, r0);
        wr16(rd32(0x80571954u) + 2u, (u16)r0);
        a.r[0] = r28;
        (void)tc_call(0x8022c2d8u, &a);
    }
    return;
}
