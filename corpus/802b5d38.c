#include "tc_rt.h"

void fn_802b5d38(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0;
    u32 r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fde10u, 0x817fe000u);
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
    r24 = 0u;
    a.r[0] = param_4;
    a.r[1] = param_3;
    a.r[2] = 0x817fdea0u;
    r3 = tc_call(0x802b66f0u, &a);
    f1 = tc_lastf();
    if (r3 == 0u || (u32)rd16(0x817fdea0u) == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = param_1;
        a.r[1] = param_2;
        a.r[2] = 3u;
        a.r[3] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802b65b4u, &a);
    } else {
        r29 = ((((u32)rd8(r3) << 8u) & 0xffffff00u) + (u32)rd8(r3 + 1u)) & 0xffffu;
        r0 = (u32)rd16(param_1 + 0x20u) - 0xau;
        if ((s32)r29 > (s32)r0) {
            r29 = r0 & 0xffffu;
        }
        r3 = r3 + 2u;
        a.r[0] = r3;
        a.r[1] = param_3;
        a.r[2] = 0x817fde5cu;
        r3 = tc_call(0x802b6a40u, &a);
        f1 = tc_lastf();
        if (r3 == 0u || (u32)rd16(0x817fde5cu) == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = param_1;
            a.r[1] = param_2;
            a.r[2] = 3u;
            a.r[3] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802b65b4u, &a);
        } else {
            r6 = 0x817fde14u;
            r5 = 0x817fde58u;
            ctr = 8u;
            do {
                r4 = rd32(r5 + 4u);
                r5 = r5 + 8u;
                r0 = rd32(r5);
                wr32(r6 + 4u, r4);
                wr32(r6 + 8u, r0);
                r6 = r6 + 8u;
                ctr = ctr - 1u;
            } while (ctr != 0u);
            wr16(r6 + 4u, rd16(r5 + 4u));
            r0 = (u32)rd8(r3);
            if (r0 == 0u) {
                r28 = param_1 + 0x29u;
                wr16(param_1 + 0x476u, 0u);
                a.r[0] = 0u;
                a.r[1] = 0x817fdea0u;
                r3 = tc_call(0x802b2994u, &a);
                r26 = r3;
                while (r3 != 0u) {
                    r5 = 0x817fde58u;
                    r4 = 0x817fde14u;
                    ctr = 8u;
                    do {
                        r3 = rd32(r4 + 4u);
                        r4 = r4 + 8u;
                        r0 = rd32(r4);
                        wr32(r5 + 4u, r3);
                        wr32(r5 + 8u, r0);
                        r5 = r5 + 8u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r23 = r28;
                    r27 = 0u;
                    r28 = r28 + 3u;
                    wr16(r5 + 4u, rd16(r4 + 4u));
                    while ((r27 & 0xffffu) < (u32)rd16(0x817fde5cu)) {
                        r30 = ((r27 << 2u) & 0x3fffcu) - 0x7e8021a4u;
                        a.r[0] = r26;
                        a.r[1] = (u32)rd16(r30 + 2u);
                        a.r[2] = (u32)rd16(r30 + 4u);
                        r3 = tc_call(0x802b2c04u, &a);
                        r25 = r3;
                        if (r3 != 0u) {
                            if (rd32(r3) > (((0x3e8u - ((r28 - (param_1 + 0x26u)) & 0xffffu)) & 0xffffu) - 6u)) {
                                r24 = 1u;
                                break;
                            }
                            a.r[0] = r28;
                            a.r[1] = r25;
                            r3 = tc_call(0x802b6460u, &a);
                            r28 = r3;
                            if ((u32)rd16(r30 + 2u) != (u32)rd16(r30 + 4u)) {
                                r27 = r27 - 1u;
                                wr16(r30 + 2u, (u16)((u32)rd16(r25 + 8u) + 1u));
                            }
                        }
                        r27 = r27 + 1u;
                    }
                    if (r24 != 0u) break;
                    r3 = (r28 - r23 - 3u) & 0xffffu;
                    if (r3 == 0u) {
                        r28 = r23;
                    } else {
                        wr8(r23, 0x36u);
                        wr8(r23 + 1u, (u8)((r3 >> 8u) & 0xffu));
                        wr8(r23 + 2u, (u8)r3);
                    }
                    a.r[0] = r26;
                    a.r[1] = 0x817fdea0u;
                    r3 = tc_call(0x802b2994u, &a);
                    r26 = r3;
                }
                r0 = r28 - (param_1 + 0x26u);
                r4 = r0 & 0xffffu;
                wr16(param_1 + 0x24u, (u16)r0);
                if (r4 <= 0xffu) {
                    wr16(param_1 + 0x476u, 1u);
                    wr8(param_1 + 0x27u, 0x35u);
                    wr8(param_1 + 0x28u, (u8)(r4 - 3u));
                    wr16(param_1 + 0x24u, (u16)(r4 - 1u));
                } else {
                    r3 = r4 - 3u;
                    wr8(param_1 + 0x26u, 0x36u);
                    wr8(param_1 + 0x27u, (u8)((s32)r3 >> 8));
                    wr8(param_1 + 0x28u, (u8)r3);
                }
            } else {
                if (r0 != 2u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = 5u;
                    a.r[3] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802b65b4u, &a);
                    return;
                }
                r0 = (u32)rd8(r3 + 1u);
                r3 = (u32)rd8(r3 + 2u);
                r3 = ((r0 << 8u) & 0xffffff00u) + r3;
                r3 = r3 & 0xffffu;
                if (r3 != (u32)rd16(param_1 + 0x476u)) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = param_1;
                    a.r[1] = param_2;
                    a.r[2] = 5u;
                    a.r[3] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    (void)tc_call(0x802b65b4u, &a);
                    return;
                }
            }
            a.r[0] = 2u;
            r3 = tc_call(0x8028a274u, &a);
            f1 = tc_lastf();
            r25 = r3;
            if (r3 != 0u) {
                r28 = r3 + 0x11u;
                wr16(r3 + 4u, 9u);
                r30 = r28 + 3u;
                wr8(r28, 7u);
                r31 = r30;
                wr8(r28 + 1u, (u8)((param_2 >> 8u) & 0xffu));
                wr8(r28 + 2u, (u8)param_2);
                r0 = (u32)rd16(param_1 + 0x24u);
                if (r0 <= r29) {
                    r29 = r0;
                }
                wr8(r30 + 2u, (u8)((r29 >> 8u) & 0xffu));
                wr8(r30 + 3u, (u8)r29);
                r30 = r30 + 4u;
                a.r[0] = r30;
                a.r[1] = param_1 + (u32)rd16(param_1 + 0x476u) + 0x26u;
                a.r[2] = r29 & 0xffffu;
                f1 = tc_callf(0x80004338u, &a);
                r30 = r30 + (r29 & 0xffffu);
                r4 = (u32)rd16(param_1 + 0x476u);
                r3 = (u32)rd16(param_1 + 0x24u) - r29;
                wr16(param_1 + 0x24u, (u16)r3);
                wr16(param_1 + 0x476u, (u16)(r4 + r29));
                if ((r3 & 0xffffu) == 0u) {
                    wr8(r30, 0u);
                    r30 = r30 + 1u;
                } else {
                    wr8(r30, 2u);
                    wr8(r30 + 1u, (u8)((s32)rd16(param_1 + 0x476u) >> 8));
                    wr8(r30 + 2u, (u8)rd16(param_1 + 0x476u));
                    r30 = r30 + 3u;
                }
                r5 = r30 - r31 - 2u;
                wr8(r31, (u8)((r5 >> 8u) & 0xffu));
                wr8(r31 + 1u, (u8)r5);
                wr16(r25 + 2u, (u16)(r30 - r28));
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = (u32)rd16(param_1 + 0x22u);
                a.r[1] = r25;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802a5e34u, &a);
            } else if ((u32)rd8(0x80545c50u) >= 1u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0xa0000u;
                a.r[1] = 0x80397e9cu;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x8028cc54u, &a);
            }
        }
    }
    return;
}
