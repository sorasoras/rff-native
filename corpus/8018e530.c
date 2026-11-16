#include "tc_rt.h"

u32 fn_8018e530(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r29 = (u32)param_1 + 0xau;
    r28 = (u32)param_1 + 4u;
    r27 = 1u;
    do {
        r25 = (u32)rd8(r29 + rd32((u32)param_1 + 0x84u) + 0x21cu);
        if (r25 == 0u) {
            a.r[0] = (u32)param_1;
            r3 = tc_call(0x8018f700u, &a);
            r26 = r3;
        } else {
            if (r25 == 0x64u) {
                r26 = rd32((u32)param_1 + 0x8cu);
            } else {
                r3 = tc_call(0x80040b64u, &a);
                if ((r3 - (((ppc_mulhwu(0x51eb851fu, r3) >> 5u) & 0x7ffffffu) * 0x64u)) <= r25) {
                    r3 = rd32((u32)param_1 + 0x8cu);
                } else {
                    a.r[0] = (u32)param_1;
                    r3 = tc_call(0x8018f700u, &a);
                }
                r26 = r3;
            }
        }
        a.r[0] = (u32)param_1;
        a.r[1] = r25;
        r3 = tc_call(0x8018f7d0u, &a);
        r3 = r3 - 1u;
        r27 = r27 + 1u;
        r29 = r29 + 0xau;
        r0 = ppc_cntlzw(r3 ^ 1u);
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (r3 << (r0 & 0x1fu));
        r0 = (r0 >> 0x1fu) & 1u;
        wr32(r28 + 0x98u, r0);
        wr32(r28 + 0xa8u, r26);
        r28 = r28 + 4u;
    } while ((s32)r27 < 4);
    r5 = rd32(0x804863d8u);
    wr32(r5 + 0x9cu, rd32(r5 + 0x9cu) | 0x40000000u);
    a.r[0] = (u32)param_1;
    a.r[1] = 1u;
    (void)tc_call(0x8018f750u, &a);
    wr32((u32)param_1 + 0x94u, 0xfu);
    r6 = rd32(0x8036ff78u);
    r0 = rd32(0x8036ff7cu);
    wr32(0x817fdfc8u, rd32(0x8036ff74u));
    wr32(0x817fdfccu, r6);
    wr32(0x817fdfd0u, r0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfc8u;
    a.r[2] = 0x1eu;
    (void)tc_call(0x8018f18cu, &a);
    r30 = (u32)param_1 + 4u;
    r25 = 1u;
    do {
        r0 = rd32(r30 + 0x98u);
        r5 = 0xffffffffu;
        if (r0 == 1u) {
            r5 = 1u;
        } else {
            if (r0 == 2u) {
                r5 = 2u;
            }
        }
        if (r5 != 0xffffffffu) {
            a.r[0] = (u32)param_1;
            a.r[1] = r25;
            a.r[2] = r5;
            a.r[3] = 1u;
            a.r[4] = 1u;
            (void)tc_call(0x8018fb18u, &a);
        }
        r25 = r25 + 1u;
        r30 = r30 + 4u;
    } while ((s32)r25 < 4);
    return 1u;
}
