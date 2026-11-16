#include "tc_rt.h"

u32 fn_80133c5c(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r20 = 0, r21 = 0, r23 = 0, r24 = 0, r25 = 0;
    u32 r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdf70u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfd0u, 0u);
    wr32(0x817fdfd4u, 0u);
    wr32(0x817fdfd8u, 0u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r28 = 0u;
    r31 = rd32(rd32((u32)param_1 + 0x1cu) + 0x44u);
    r7 = rd32(0x8033a224u);
    r6 = rd32(0x8033a228u);
    c0lt = (s32)r31 < 7;
    r5 = rd32(0x8033a22cu);
    r4 = rd32(0x8033a230u);
    r3 = rd32(0x8033a234u);
    r0 = rd32(0x8033a238u);
    wr32(0x817fdf78u, rd32(0x8033a220u));
    wr32(0x817fdf7cu, r7);
    wr32(0x817fdf80u, r6);
    wr32(0x817fdf84u, r5);
    wr32(0x817fdf88u, r4);
    wr32(0x817fdf8cu, r3);
    wr32(0x817fdf90u, r0);
    if (r31 == 7u) {
        r29 = 2u;
        r28 = (u32)rd8(0x804990b5u);
    } else if (!c0lt) {
        if ((s32)r31 >= 9) {
            r29 = 4u;
        } else {
            r29 = 3u;
            r28 = (u32)rd8(0x804990b3u);
        }
    } else if ((s32)r31 >= 6) {
        r29 = 1u;
        r28 = (u32)rd8(0x804990b4u);
    } else if ((s32)r31 >= 0) {
        r29 = 0u;
        r28 = (u32)rd8(0x804990b2u);
    } else {
        r29 = 4u;
    }
    a.r[0] = 0x804ac83cu;
    a.r[1] = r29;
    r3 = tc_call(0x80165898u, &a);
    r30 = r3;
    r5 = 0x817fdf94u;
    do {
        wr16(r5, 0x2e8u);
        wr8(r5 + 2u, 1u);
        wr8(r5 + 3u, 1u);
        r5 = r5 + 4u;
    } while (r5 < 0x817fdfacu);
    r21 = 0u;
    wr16(0x817fdfacu, 0x2e8u);
    r27 = 0xau;
    r26 = 0u;
    r25 = 0u;
    wr8(0x817fdfaeu, 1u);
    r24 = 0u;
    wr8(0x817fdfafu, 1u);
    wr16(0x817fdfb0u, 0x2e8u);
    wr8(0x817fdfb2u, 1u);
    wr8(0x817fdfb3u, 1u);
    wr32(0x817fdfb4u, 0u);
    wr8(0x817fdfb8u, 0u);
    wr8(0x817fdfb9u, 0u);
    wr8(0x817fdfbau, 0u);
    wr32(0x817fdfbcu, 0xffffffffu);
    wr32(0x817fdfc0u, 0xffffffffu);
    wr32(0x817fdfc4u, 0xffffffffu);
    do {
        r20 = rd32(rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x458u) + 0x2cu) + r21);
        a.r[0] = r21 - 0x7e80206cu;
        a.r[1] = r20 + 0xbcu;
        a.r[2] = 4u;
        (void)tc_call(0x80004338u, &a);
        if ((u32)rd16(r20 + 0xbcu) != 0x2e8u) {
            r0 = (u32)rd8(r20 + 0xbfu);
            if ((s32)r27 > (s32)r0) {
                r27 = r0;
            }
            r0 = (u32)rd8(r20 + 0xbfu);
            if ((s32)r26 < (s32)r0) {
                r26 = r0;
            }
        }
        r24 = r24 + 1u;
        r21 = r21 + 4u;
    } while ((s32)r24 < 6);
    if ((s32)r31 > 5) {
        r21 = 0u;
        while ((s32)r21 < (s32)r30) {
            a.r[0] = 0x804ac83cu;
            a.r[1] = r29;
            a.r[2] = r21;
            r3 = tc_call(0x80165a20u, &a);
            r20 = r3;
            a.r[0] = 0x804ac83cu;
            a.r[1] = r29;
            a.r[2] = r21;
            r3 = tc_call(0x801658e0u, &a);
            r23 = r3;
            r31 = 0u;
            while ((s32)r31 < (s32)r20) {
                a.r[0] = (u32)param_1;
                a.r[1] = r23;
                a.r[2] = 0x817fdf94u;
                r3 = tc_call(0x801341d4u, &a);
                r25 = r3;
                if (r3 != 0u) {
                    wr32(0x817fdfbcu, r29);
                    wr32(0x817fdfc0u, r21);
                    wr32(0x817fdfc4u, r31);
                    break;
                }
                r31 = r31 + 1u;
                r23 = r23 + 0x24u;
            }
            if (r25 != 0u) break;
            r23 = 0u;
            r21 = r21 + 1u;
        }
    } else {
        a.r[0] = 0x804ac83cu;
        a.r[1] = r29;
        a.r[2] = rd32(((r31 << 2u) & 0xfffffffcu) - 0x7e802088u);
        r3 = tc_call(0x80165a20u, &a);
        r20 = r3;
        a.r[0] = 0x804ac83cu;
        a.r[1] = r29;
        a.r[2] = rd32(((r31 << 2u) & 0xfffffffcu) - 0x7e802088u);
        r3 = tc_call(0x801658e0u, &a);
        r23 = r3;
        r21 = 0u;
        while ((s32)r21 < (s32)r20) {
            a.r[0] = (u32)param_1;
            a.r[1] = r23;
            a.r[2] = 0x817fdf94u;
            r3 = tc_call(0x801341d4u, &a);
            r25 = r3;
            if (r3 != 0u) {
                r0 = rd32(((r31 << 2u) & 0xfffffffcu) - 0x7e802088u);
                wr32(0x817fdfbcu, r29);
                wr32(0x817fdfc0u, r0);
                wr32(0x817fdfc4u, r21);
                break;
            }
            r21 = r21 + 1u;
            r23 = r23 + 0x24u;
        }
        if (r25 == 0u) {
            r23 = 0u;
        }
    }
    if (r23 == 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = 0x817fdf94u;
        (void)tc_call(0x8013419cu, &a);
    } else {
        a.r[0] = (u32)param_1;
        a.r[1] = r23;
        a.r[2] = 0x817fdf94u;
        a.r[3] = r28;
        (void)tc_call(0x80134004u, &a);
        wr8(0x817fdfafu, (u8)r27);
    }
    if (r29 == 0u) {
        wr16(0x817fdfb0u, 0x150u);
    }
    r20 = 0u;
    r23 = 0u;
    do {
        r21 = rd32(rd32(rd32(rd32((u32)param_1 + 0x1cu) + 0x458u) + 0x2cu) + r23);
        wr32(r21 + 0x54u, 0u);
        a.r[0] = r21;
        (void)tc_call(0x80161ac4u, &a);
        wr16(r21 + 0xbcu, 0x2e8u);
        r20 = r20 + 1u;
        r23 = r23 + 4u;
        wr8(r21 + 0xbeu, 0u);
        wr8(r21 + 0xbfu, 0u);
    } while ((s32)r20 < 6);
    a.r[0] = 0x817fdf94u;
    (void)tc_call(0x80198ea8u, &a);
    return 0u;
}
