#include "tc_rt.h"

void fn_8030368c(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfb0u, 0x817fe000u);
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
    wr32(0x817fdfb8u, param_3);
    r31 = param_3 + (u32)param_4;
    a.r[0] = param_1;
    a.r[1] = param_2;
    a.r[2] = 0x817fdfb8u;
    a.r[3] = r31;
    r3 = tc_call(0x803039f0u, &a);
    if (r3 == 0u) {
        return;
    }
    a.r[0] = param_2;
    r3 = tc_call(0x803014c4u, &a);
    r3 = (r3 << 3u) & 0xfffffff8u;
    r5 = rd32(0x817fdfb8u);
    r3 = r3 + 4u + r5;
    r4 = (r3 + 3u) & 0xfffffffcu;
    if ((s32)(r4 - r31) > 0) {
        r0 = 0u;
    } else {
        wr32(param_1 + 0x14u, r5);
        wr32(0x817fdfb8u, r4);
        a.r[0] = param_2;
        r3 = tc_call(0x803014c4u, &a);
        r6 = 0u;
        r7 = 0u;
        wr32(rd32(param_1 + 0x14u), r3);
        for (;;) {
            r3 = rd32(param_1 + 0x14u);
            if (r6 >= rd32(r3)) break;
            r3 = r3 + r7;
            r6 = r6 + 1u;
            wr32(r3 + 4u, 0u);
            r3 = rd32(param_1 + 0x14u) + r7;
            r7 = r7 + 8u;
            wr32(r3 + 8u, 0u);
        }
        r0 = 1u;
    }
    if (r0 == 0u) {
        return;
    }
    a.r[0] = param_2;
    a.r[1] = 0x817fdfbcu;
    r3 = tc_call(0x80301514u, &a);
    if (r3 != 0u) {
        r23 = rd32(0x817fdfb8u);
        r25 = rd32(0x817fdfbcu) * 0x4c0u;
        r24 = (r25 + r23 + 3u) & 0xfffffffcu;
        if ((s32)(r24 - r31) > 0) {
            r0 = 0u;
        } else {
            r26 = param_1 + 0x50u;
            a.r[0] = r26;
            (void)tc_call(0x8022d56cu, &a);
            a.r[0] = param_1 + 0x40u;
            a.r[1] = r23;
            a.r[2] = r25;
            a.r[3] = 0x4c0u;
            (void)tc_call(0x802faa98u, &a);
            a.r[0] = r26;
            (void)tc_call(0x8022d648u, &a);
            wr32(0x817fdfb8u, r24);
            r0 = 1u;
        }
        if (r0 == 0u) {
            return;
        }
        r23 = rd32(0x817fdfb8u);
        r25 = rd32(0x817fdfc4u) * 0x10c0u;
        r24 = (r25 + r23 + 3u) & 0xfffffffcu;
        if ((s32)(r24 - r31) > 0) {
            r0 = 0u;
        } else {
            r26 = param_1 + 0x78u;
            a.r[0] = r26;
            (void)tc_call(0x8022d56cu, &a);
            a.r[0] = param_1 + 0x68u;
            a.r[1] = r23;
            a.r[2] = r25;
            a.r[3] = 0x10c0u;
            (void)tc_call(0x802faa98u, &a);
            a.r[0] = r26;
            (void)tc_call(0x8022d648u, &a);
            wr32(0x817fdfb8u, r24);
            r0 = 1u;
        }
        if (r0 == 0u) {
            return;
        }
        r23 = rd32(0x817fdfb8u);
        r25 = rd32(0x817fdfd0u) * 0x240u;
        r24 = (r25 + r23 + 3u) & 0xfffffffcu;
        if ((s32)(r24 - r31) > 0) {
            r0 = 0u;
        } else {
            r26 = param_1 + 0xa0u;
            a.r[0] = r26;
            (void)tc_call(0x8022d56cu, &a);
            a.r[0] = param_1 + 0x90u;
            a.r[1] = r23;
            a.r[2] = r25;
            a.r[3] = 0x240u;
            (void)tc_call(0x802faa98u, &a);
            a.r[0] = r26;
            (void)tc_call(0x8022d648u, &a);
            wr32(0x817fdfb8u, r24);
            r0 = 1u;
        }
        if (r0 == 0u) {
            return;
        }
        r4 = rd32(0x817fdfb8u);
        r5 = rd32(0x817fdfc0u) * 0xf8u;
        if ((s32)(((r5 + r4 + 3u) & 0xfffffffcu) - r31) > 0) {
            r0 = 0u;
        } else {
            a.r[0] = param_1 + 0xb8u;
            a.r[1] = r4;
            a.r[2] = r5;
            (void)tc_call(0x802fc254u, &a);
            r0 = 1u;
        }
        if (r0 == 0u) {
            return;
        }
    }
    wr32(param_1 + 0x10u, param_2);
    wr32(param_1 + 0xe0u, param_3);
    wr32(param_1 + 0xe4u, (u32)param_4);
    return;
}
