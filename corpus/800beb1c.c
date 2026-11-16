#include "tc_rt.h"

void fn_800beb1c(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x817fdf80u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r5 = 0x817fdf84u;
    wr32(0x817fdfe0u, 0u);
    wr32(0x817fdfe4u, 0u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r4 = 0x80338564u;
    ctr = 0xau;
    do {
        r3 = rd32(r4 + 4u);
        r4 = r4 + 8u;
        r0 = rd32(r4);
        wr32(r5 + 4u, r3);
        wr32(r5 + 8u, r0);
        r5 = r5 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r27 = param_1;
    r28 = 0x817fdf88u;
    r26 = 0u;
    r25 = 0u;
    do {
        r3 = tc_call(0x80057a90u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = rd32(r28);
        a.r[2] = 0u;
        a.r[3] = 0u;
        r3 = tc_call(0x80050edcu, &a);
        f1 = tc_lastf();
        wr32(r27, r3);
        a.r[0] = 1u;
        r3 = tc_call(0x80050b14u, &a);
        f1 = tc_lastf();
        a.r[0] = param_1;
        a.r[1] = rd32(r27);
        a.r[2] = r26;
        r3 = tc_call(0x800bec64u, &a);
        f1 = tc_lastf();
        r30 = r3;
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.r[0] = r3;
        a.r[1] = rd32(r28 + 4u);
        a.r[2] = 0u;
        a.r[3] = 0u;
        r3 = tc_call(0x80050edcu, &a);
        f1 = tc_lastf();
        wr32(r27 + 4u, r3);
        a.r[0] = 1u;
        r3 = tc_call(0x80050b14u, &a);
        f1 = tc_lastf();
        a.r[0] = param_1;
        a.r[1] = rd32(r27 + 4u);
        a.r[2] = r26;
        r3 = tc_call(0x800bed54u, &a);
        f1 = tc_lastf();
        r29 = rd32(r27 + 4u);
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        r6 = r3;
        if (rd32(r3 + 0x10u) != 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r29;
            a.r[2] = r5;
            a.r[3] = r6;
            r3 = tc_call(0x80040e98u, &a);
            f1 = tc_lastf();
        } else {
            if (rd32(r3 + 0x20u) != 0u) {
                r3 = r3 + 0x24u;
                a.r[0] = r3;
                a.r[1] = r29;
                r3 = tc_call(0x80094ec0u, &a);
                f1 = tc_lastf();
            } else {
                r5 = rd32(r3 + 0xcu);
                r3 = rd32(r3);
                r6 = r6 + 0x18u;
                a.r[0] = r3;
                a.r[1] = r29;
                a.r[2] = r5;
                a.r[3] = r6;
                r3 = tc_call(0x80040e98u, &a);
                f1 = tc_lastf();
            }
        }
        r25 = r25 + 1u;
        wr32(r27 + 4u, 0u);
        r26 = r26 + r30;
        r28 = r28 + 8u;
        r27 = r27 + 8u;
    } while ((s32)r25 < 10);
    return;
}
