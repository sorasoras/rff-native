#include "tc_rt.h"

void fn_802770fc(u32 param_r3, u32 param_r4)
{
    u32 ca = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfa0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r30 = (param_r3 << 2u) & 0xfffffffcu;
    r29 = rd32(r30 - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r28 = rd32(r29 + 0x8bcu);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if (r28 != 0u) {
        if (r28 != 0xfffffffeu && r28 == 0xfffffffdu) {
            r3 = tc_call(0x8022c2b0u, &a);
            wr32(r29 + 0x8bcu, 0u);
            a.r[0] = r3;
            (void)tc_call(0x8022c2d8u, &a);
        }
    } else {
        r3 = tc_call(0x8022c2b0u, &a);
        r25 = (u32)rd8(r29 + 0x8c0u);
        a.r[0] = r3;
        (void)tc_call(0x8022c2d8u, &a);
        if (r25 == 0u) {
            r26 = rd32(param_r4 + 4u);
            r27 = rd32(param_r4 + 8u);
            r12 = rd32(param_r4 + 0xcu);
            r11 = rd32(param_r4 + 0x10u);
            r10 = rd32(param_r4 + 0x14u);
            r9 = rd32(param_r4 + 0x18u);
            r8 = rd32(param_r4 + 0x1cu);
            r7 = rd32(param_r4 + 0x20u);
            r6 = rd32(param_r4 + 0x24u);
            r5 = rd32(param_r4 + 0x28u);
            r0 = rd32(param_r4 + 0x2cu);
            wr32(0x817fdfb0u, rd32(param_r4));
            wr32(0x817fdfb4u, r26);
            wr32(0x817fdfb8u, r27);
            wr32(0x817fdfbcu, r12);
            wr32(0x817fdfc0u, r11);
            wr32(0x817fdfc4u, r10);
            wr32(0x817fdfc8u, r9);
            wr32(0x817fdfccu, r8);
            wr32(0x817fdfd0u, r7);
            wr32(0x817fdfd4u, r6);
            wr32(0x817fdfd8u, r5);
            wr32(0x817fdfdcu, r0);
            a.r[0] = param_r3;
            a.r[1] = 0x817fdfb0u;
            (void)tc_call(0x8027dc10u, &a);
        } else {
            r28 = 0xfffffffeu;
        }
    }
    if (r28 == 0xfffffffeu) {
        r3 = tc_call(0x802302bcu, &a);
        r4 = tc_lastr4();
        r6 = rd32(r29 + 0x90cu);
        ca = r6 <= r4;
        r4 = r4 - r6;
        a.r[0] = (u32)((u64)~rd32(r29 + 0x908u) + (u64)r3 + (u64)ca);
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
        (void)tc_call(0x80255b5cu, &a);
        if ((s32)tc_lastr4() > 1 && (u32)rd8(0x80571b02u) != 0u) {
            if ((u32)rd8(r29 + 0x910u) != 0u) {
                r3 = tc_call(0x8022c2b0u, &a);
                wr32(r29 + 0x8bcu, 0xfffffffdu);
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
            } else {
                r3 = tc_call(0x802302bcu, &a);
                wr32(r29 + 0x90cu, tc_lastr4());
                wr32(r29 + 0x908u, r3);
                r25 = rd32(r30 - 0x7faf46b0u);
                r3 = tc_call(0x8022c2b0u, &a);
                r25 = rd32(r25 + 0x8bcu);
                a.r[0] = r3;
                (void)tc_call(0x8022c2d8u, &a);
                if (r25 != 0xffffffffu) {
                    r25 = rd32(r30 - 0x7faf46b0u);
                    r3 = tc_call(0x8022c2b0u, &a);
                    r25 = (u32)rd8(r25 + 0x8c3u);
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    a.r[0] = r25;
                    r3 = tc_call(0x802893e0u, &a);
                    if (r3 == 0u) {
                        a.r[0] = 0x817fdfa8u;
                        a.r[1] = 0u;
                        a.r[2] = 6u;
                        (void)tc_call(0x8000443cu, &a);
                    } else {
                        a.r[0] = 0x817fdfa8u;
                        a.r[1] = r3;
                        a.r[2] = 6u;
                        (void)tc_call(0x80004338u, &a);
                    }
                    a.r[0] = 0x817fdfa8u;
                    (void)tc_call(0x80294bd8u, &a);
                }
            }
        }
    }
    return;
}
