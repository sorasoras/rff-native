#include "tc_rt.h"

void fn_802bbd28(void)
{
    u32 ctr = 0, r3 = tc_argr(0u), r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r8 = tc_argr(5u), r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    r4 = rd32(0x80571bc8u);
    r6 = rd32(0x80571bc4u);
    wr32(0x80571c28u, r4);
    wr32(0x80571c24u, r4 + 0x101u);
    r3 = rd32(r6 + 0x69cu);
    r5 = (u32)rd8(r3);
    r4 = r3 + 2u;
    r3 = (u32)rd8(r3 + 1u);
    r3 = (r3 & 0xffff00ffu) | ((r5 << 8u) & 0xff00u);
    r3 = r3 - 2u;
    wr32(r6 + 0x69cu, r4);
    r5 = r3 & 0xffffu;
    do {
        r30 = rd32(0x80571bc4u);
        r6 = 0u;
        r3 = 0u;
        r8 = rd32(r30 + 0x69cu);
        wr32(r30 + 0x69cu, r8 + 1u);
        r4 = (u32)rd8(r8);
        r30 = rd32(0x80571bc4u);
        r8 = (r4 << 1u) & 0x1eu;
        r4 = (u32)((s32)r4 >> 4);
        r30 = rd32(r30 + 0x69cu);
        r4 = r8 + r4;
        r4 = r4 & 0xffu;
        wr32(0x80571c2cu, r30);
        ctr = 2u;
        do {
            r31 = rd32(0x80571bc4u);
            r3 = r3 + 8u;
            r30 = rd32(r31 + 0x69cu);
            wr32(r31 + 0x69cu, r30 + 1u);
            r31 = rd32(0x80571bc4u);
            r8 = (u32)rd8(r30);
            r30 = rd32(r31 + 0x69cu);
            r6 = r6 + r8;
            wr32(r31 + 0x69cu, r30 + 1u);
            r31 = rd32(0x80571bc4u);
            r8 = (u32)rd8(r30);
            r30 = rd32(r31 + 0x69cu);
            r6 = r6 + r8;
            wr32(r31 + 0x69cu, r30 + 1u);
            r31 = rd32(0x80571bc4u);
            r8 = (u32)rd8(r30);
            r30 = rd32(r31 + 0x69cu);
            r6 = r6 + r8;
            wr32(r31 + 0x69cu, r30 + 1u);
            r31 = rd32(0x80571bc4u);
            r8 = (u32)rd8(r30);
            r30 = rd32(r31 + 0x69cu);
            r6 = r6 + r8;
            wr32(r31 + 0x69cu, r30 + 1u);
            r31 = rd32(0x80571bc4u);
            r8 = (u32)rd8(r30);
            r30 = rd32(r31 + 0x69cu);
            r6 = r6 + r8;
            wr32(r31 + 0x69cu, r30 + 1u);
            r31 = rd32(0x80571bc4u);
            r8 = (u32)rd8(r30);
            r30 = rd32(r31 + 0x69cu);
            r6 = r6 + r8;
            wr32(r31 + 0x69cu, r30 + 1u);
            r31 = rd32(0x80571bc4u);
            r8 = (u32)rd8(r30);
            r30 = rd32(r31 + 0x69cu);
            r6 = r6 + r8;
            wr32(r31 + 0x69cu, r30 + 1u);
            r6 = r6 + (u32)rd8(r30);
            ctr = ctr - 1u;
        } while (ctr != 0u);
        r27 = rd32(0x80571bc4u);
        r3 = r4 * 0xe0u;
        r28 = 0u;
        r29 = 1u;
        wr32(r27 + r3 + 0x340u, rd32(r27 + 0x69cu));
        r31 = rd32(0x80571bc4u);
        wr32(r31 + 0x69cu, rd32(r31 + 0x69cu) + (r6 & 0xffffu));
        for (;;) {
            r8 = rd32(0x80571c2cu) + r29;
            r30 = (u32)rd8(r8 - 1u);
            if (r30 == 0u) {
                r29 = r29 + 1u;
                if ((s32)r29 > 16) break;
            } else {
                r8 = (r30 >> 3u) & 0x1fffffffu;
                ctr = r8;
                if (r8 != 0u) {
                    do {
                        wr8(rd32(0x80571c28u) + r28, (u8)r29);
                        r28 = r28 + 1u;
                        wr8(rd32(0x80571c28u) + r28, (u8)r29);
                        r28 = r28 + 1u;
                        wr8(rd32(0x80571c28u) + r28, (u8)r29);
                        r28 = r28 + 1u;
                        wr8(rd32(0x80571c28u) + r28, (u8)r29);
                        r28 = r28 + 1u;
                        wr8(rd32(0x80571c28u) + r28, (u8)r29);
                        r28 = r28 + 1u;
                        wr8(rd32(0x80571c28u) + r28, (u8)r29);
                        r28 = r28 + 1u;
                        wr8(rd32(0x80571c28u) + r28, (u8)r29);
                        r28 = r28 + 1u;
                        wr8(rd32(0x80571c28u) + r28, (u8)r29);
                        r28 = r28 + 1u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r30 = r30 & 7u;
                    if (r30 == 0u) {
                        r29 = r29 + 1u;
                        if ((s32)r29 <= 16) continue;
                        break;
                    }
                }
                ctr = r30;
                do {
                    wr8(rd32(0x80571c28u) + r28, (u8)r29);
                    r28 = r28 + 1u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r29 = r29 + 1u;
                if ((s32)r29 > 16) break;
            }
        }
        r27 = 0u;
        r29 = 0u;
        wr8(rd32(0x80571c28u) + r28, 0u);
        r30 = rd32(0x80571c28u);
        r28 = (u32)rd8(r30);
        while ((u32)rd8(r30 + (r27 & 0xffffu)) != 0u) {
            r31 = r28 & 0xffu;
            for (;;) {
                r30 = rd32(0x80571c28u);
                if (r31 != (u32)rd8(r30 + (r27 & 0xffffu))) break;
                r8 = (r27 << 1u) & 0x1fffeu;
                r27 = r27 + 1u;
                wr16(rd32(0x80571c24u) + r8, (u16)r29);
                r29 = r29 + 1u;
            }
            r29 = (r29 << 1u) & 0xfffeu;
            r28 = r28 + 1u;
        }
        r28 = 0u;
        r27 = 1u;
        r31 = rd32(0x80571bc4u) + r3;
        r29 = r31 + 0x304u;
        ctr = 8u;
        do {
            r3 = rd32(0x80571c2cu) + r27;
            r3 = (u32)rd8(r3 - 1u);
            if (r3 == 0u) {
                wr32(r29 + 0x44u, 0xffffffffu);
                wr32(r29 + 0x8cu, 0xffffffffu);
            } else {
                r8 = rd32(0x80571c24u);
                wr32(r29 + 0x8cu, r28 - (u32)rd16(r8 + ((r28 << 1u) & 0xfffffffeu)));
                r3 = rd32(0x80571c2cu);
                r8 = rd32(0x80571c24u);
                r3 = r3 + r27;
                r3 = (u32)rd8(r3 - 1u);
                r28 = r28 + r3;
                wr32(r29 + 0x44u, (u32)rd16(r8 + ((r28 << 1u) & 0xfffffffeu) - 2u));
            }
            r27 = r27 + 1u;
            r3 = rd32(0x80571c2cu) + r27;
            r3 = (u32)rd8(r3 - 1u);
            if (r3 == 0u) {
                wr32(r29 + 0x48u, 0xffffffffu);
                wr32(r29 + 0x90u, 0xffffffffu);
            } else {
                r8 = rd32(0x80571c24u);
                wr32(r29 + 0x90u, r28 - (u32)rd16(r8 + ((r28 << 1u) & 0xfffffffeu)));
                r3 = rd32(0x80571c2cu);
                r8 = rd32(0x80571c24u);
                r3 = r3 + r27;
                r3 = (u32)rd8(r3 - 1u);
                r28 = r28 + r3;
                wr32(r29 + 0x48u, (u32)rd16(r8 + ((r28 << 1u) & 0xfffffffeu) - 2u));
            }
            r29 = r29 + 8u;
            r27 = r27 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
        wr32(r31 + 0x388u, 0xfffffu);
        r3 = r5 - (r6 + 0x11u);
        r4 = ((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu));
        r6 = rd32(0x80571bc4u);
        r5 = r3 & 0xffffu;
        wr8(r6 + 0x6a8u, (u8)((u32)rd8(r6 + 0x6a8u) | r4));
    } while (r5 != 0u);
    return;
}
