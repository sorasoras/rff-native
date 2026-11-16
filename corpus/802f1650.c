#include "tc_rt.h"

void fn_802f1650(u32 param_r3, u32 param_r4)
{
    u32 r3 = 0, r23 = 0, r24 = 0, r25 = 0, r27 = 0, r28 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfdcu, 0u);
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r3 = tc_call(0x802302b4u, &a);
    r31 = r3;
    if ((u32)(s8)rd8(0x80571d70u) == 0u) {
        a.r[0] = 0x80548270u;
        (void)tc_call(0x802f03acu, &a);
        a.r[0] = 0x80548270u;
        a.r[1] = 0x802f0930u;
        a.r[2] = 0x80548260u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80571d70u, 1u);
    }
    if (rd32(0x80548270u) == 2u) {
        r30 = 4u;
        wr32(0x817fdfc8u, rd32(param_r3));
        wr32(0x817fdfccu, rd32(param_r3 + 4u));
        wr32(0x817fdfd0u, rd32(param_r3 + 8u));
        wr32(0x817fdfd4u, rd32(param_r3 + 0xcu));
    } else {
        r30 = 3u;
        wr32(0x817fdfc8u, rd32(param_r3));
        wr32(0x817fdfccu, rd32(param_r3 + 4u));
        wr32(0x817fdfd0u, rd32(param_r3 + 8u));
    }
    if ((u32)(s8)rd8(0x80571d70u) == 0u) {
        a.r[0] = 0x80548270u;
        (void)tc_call(0x802f03acu, &a);
        a.r[0] = 0x80548270u;
        a.r[1] = 0x802f0930u;
        a.r[2] = 0x80548260u;
        (void)tc_call(0x802551b8u, &a);
        wr8(0x80571d70u, 1u);
    }
    r23 = param_r4 - 0x7fab7d90u;
    if ((u32)rd8(r23 + 0xf0u) != 0u) {
        if ((u32)(s8)rd8(0x80571d70u) == 0u) {
            a.r[0] = 0x80548270u;
            (void)tc_call(0x802f03acu, &a);
            a.r[0] = 0x80548270u;
            a.r[1] = 0x802f0930u;
            a.r[2] = 0x80548260u;
            (void)tc_call(0x802551b8u, &a);
            wr8(0x80571d70u, 1u);
        }
        r24 = 0x817fdfc8u;
        r25 = 0u;
        wr8(r23 + 0xf0u, (u8)((u32)rd8(r23 + 0xf0u) - 1u));
        while ((s32)r25 < (s32)r30) {
            a.r[0] = rd32(r24);
            a.r[1] = 0u;
            a.r[2] = 0x180u;
            (void)tc_call(0x8000443cu, &a);
            r24 = r24 + 4u;
            r25 = r25 + 1u;
        }
        if ((u32)(s8)rd8(0x80571d70u) == 0u) {
            a.r[0] = 0x80548270u;
            (void)tc_call(0x802f03acu, &a);
            a.r[0] = 0x80548270u;
            a.r[1] = 0x802f0930u;
            a.r[2] = 0x80548260u;
            (void)tc_call(0x802551b8u, &a);
            wr8(0x80571d70u, 1u);
        }
        r3 = tc_call(0x802302b4u, &a);
        wr32(((param_r4 << 2u) & 0xfffffffcu) - 0x7fab7c9cu, r3 - r31);
    } else {
        if ((u32)(s8)rd8(0x80571d70u) == 0u) {
            a.r[0] = 0x80548270u;
            (void)tc_call(0x802f03acu, &a);
            a.r[0] = 0x80548270u;
            a.r[1] = 0x802f0930u;
            a.r[2] = 0x80548260u;
            (void)tc_call(0x802551b8u, &a);
            wr8(0x80571d70u, 1u);
        }
        r23 = (param_r4 * 0xcu) - 0x7fab7d90u;
        if (rd32(r23 + 0xb4u) == 0u) {
            r23 = 0x817fdfc8u;
            r24 = 0u;
            while ((s32)r24 < (s32)r30) {
                a.r[0] = rd32(r23);
                a.r[1] = 0u;
                a.r[2] = 0x180u;
                (void)tc_call(0x8000443cu, &a);
                r23 = r23 + 4u;
                r24 = r24 + 1u;
            }
            if ((u32)(s8)rd8(0x80571d70u) == 0u) {
                a.r[0] = 0x80548270u;
                (void)tc_call(0x802f03acu, &a);
                a.r[0] = 0x80548270u;
                a.r[1] = 0x802f0930u;
                a.r[2] = 0x80548260u;
                (void)tc_call(0x802551b8u, &a);
                wr8(0x80571d70u, 1u);
            }
            r3 = tc_call(0x802302b4u, &a);
            wr32(((param_r4 << 2u) & 0xfffffffcu) - 0x7fab7c9cu, r3 - r31);
        } else {
            if ((u32)(s8)rd8(0x80571d70u) == 0u) {
                a.r[0] = 0x80548270u;
                (void)tc_call(0x802f03acu, &a);
                a.r[0] = 0x80548270u;
                a.r[1] = 0x802f0930u;
                a.r[2] = 0x80548260u;
                (void)tc_call(0x802551b8u, &a);
                wr8(0x80571d70u, 1u);
            }
            r28 = rd32(r23 + 0xb8u);
            r27 = r23 + 0xb8u;
            for (;;) {
                if ((u32)(s8)rd8(0x80571d70u) == 0u) {
                    a.r[0] = 0x80548270u;
                    (void)tc_call(0x802f03acu, &a);
                    a.r[0] = 0x80548270u;
                    a.r[1] = 0x802f0930u;
                    a.r[2] = 0x80548260u;
                    (void)tc_call(0x802551b8u, &a);
                    wr8(0x80571d70u, 1u);
                }
                if (r28 == r27) break;
                if ((u32)(s8)rd8(0x80571d70u) == 0u) {
                    a.r[0] = 0x80548270u;
                    (void)tc_call(0x802f03acu, &a);
                    a.r[0] = 0x80548270u;
                    a.r[1] = 0x802f0930u;
                    a.r[2] = 0x80548260u;
                    (void)tc_call(0x802551b8u, &a);
                    wr8(0x80571d70u, 1u);
                }
                a.r[0] = r28 - 4u;
                a.r[1] = r30;
                a.r[2] = 0x817fdfc8u;
                a.r[3] = 0x180u;
                a.r[4] = 0u;
                a.r[5] = rd32(0x80548270u);
                a.f[0] = (f64)rdf32(0x8057754cu);
                (void)tc_call(rd32(rd32(r28 - 4u) + 0x14u), &a);
                r28 = rd32(r28);
            }
            if ((u32)(s8)rd8(0x80571d70u) == 0u) {
                a.r[0] = 0x80548270u;
                (void)tc_call(0x802f03acu, &a);
                a.r[0] = 0x80548270u;
                a.r[1] = 0x802f0930u;
                a.r[2] = 0x80548260u;
                (void)tc_call(0x802551b8u, &a);
                wr8(0x80571d70u, 1u);
            }
            r3 = tc_call(0x802302b4u, &a);
            wr32(((param_r4 << 2u) & 0xfffffffcu) - 0x7fab7c9cu, r3 - r31);
        }
    }
    return;
}
