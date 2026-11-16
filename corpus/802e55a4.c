#include "tc_rt.h"

static u32 px_rec(u32 sp_, u32 param_r3, u32 param_r4, f64 *f1_out)
{
    u32 lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = 0;
    u32 r12 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = *f1_out, f2 = tc_argf(1u), f3 = tc_argf(2u), f4 = tc_argf(3u), f5 = tc_argf(4u), f6 = tc_argf(5u), f7 = tc_argf(6u), f8 = tc_argf(7u);
    TcArgs a = {0};
    r1 = sp_;
    lr = 0x817ff000u;
    r3 = param_r3;
    r4 = param_r4;
L_802e55a4:;
    wr32(r1 - 0x30u, r1);
    r1 = r1 - 0x30u;
    wr32(r1 + 0x34u, lr);
    r11 = r1 + 0x30u;
    wr32(r11 - 0x24u, r23);
    wr32(r11 - 0x20u, r24);
    wr32(r11 - 0x1cu, r25);
    wr32(r11 - 0x18u, r26);
    wr32(r11 - 0x14u, r27);
    wr32(r11 - 0x10u, r28);
    wr32(r11 - 0xcu, r29);
    wr32(r11 - 8u, r30);
    wr32(r11 - 4u, r31);
    r23 = r3;
    r31 = r4;
    r25 = 0x80571d50u;
    if (r3 == 0u) goto L_802e5610;
    r12 = rd32(r3);
    r12 = rd32(r12 + 0xcu);
    lr = 0x802e55dcu;
    if (r12 == 0x802e55a4u) goto L_802e55a4;
    goto L_802e55d8_call_1;
L_802e55e0:;
    if (r3 == 0x80571d50u) {
        r0 = 1u;
        goto L_802e5600;
    }
    r3 = rd32(r3);
L_802e55f4:;
    if (r3 != 0u) goto L_802e55e0;
    r0 = 0u;
L_802e5600:;
    if (r0 != 0u) {
        r3 = r23;
        goto L_802e5614;
    }
L_802e5610:;
    r3 = 0u;
L_802e5614:;
    if (r3 != 0u) {
        wr32(r3 + 0xf8u, r31);
    }
    r30 = rd32(r23 + 0x14u);
    r27 = r23 + 0x14u;
    r23 = 0x80571d50u;
    r24 = 0x80571d50u;
    goto L_802e5730;
L_802e5634:;
    r25 = r30 - 4u;
    if (r25 == 0u) goto L_802e5684;
    r12 = rd32(r25);
    r3 = r25;
    r12 = rd32(r12 + 0xcu);
    lr = 0x802e5650u;
    if (r12 == 0x802e55a4u) goto L_802e55a4;
    goto L_802e564c_call_3;
L_802e5654:;
    if (r3 == 0x80571d50u) {
        r0 = 1u;
        goto L_802e5674;
    }
    r3 = rd32(r3);
L_802e5668:;
    if (r3 != 0u) goto L_802e5654;
    r0 = 0u;
L_802e5674:;
    if (r0 != 0u) {
        r3 = r25;
        goto L_802e5688;
    }
L_802e5684:;
    r3 = 0u;
L_802e5688:;
    if (r3 != 0u) {
        wr32(r3 + 0xf8u, r31);
    }
    r29 = rd32(r25 + 0x14u);
    r26 = r25 + 0x14u;
    goto L_802e5724;
L_802e56a0:;
    r25 = r29 - 4u;
    if (r25 == 0u) goto L_802e56f0;
    r12 = rd32(r25);
    r3 = r25;
    r12 = rd32(r12 + 0xcu);
    lr = 0x802e56bcu;
    if (r12 == 0x802e55a4u) goto L_802e55a4;
    goto L_802e56b8_call_5;
L_802e56c0:;
    if (r3 == 0x80571d50u) {
        r0 = 1u;
        goto L_802e56e0;
    }
    r3 = rd32(r3);
L_802e56d4:;
    if (r3 != 0u) goto L_802e56c0;
    r0 = 0u;
L_802e56e0:;
    if (r0 != 0u) {
        r3 = r25;
        goto L_802e56f4;
    }
L_802e56f0:;
    r3 = 0u;
L_802e56f4:;
    if (r3 != 0u) {
        wr32(r3 + 0xf8u, r31);
    }
    r25 = r25 + 0x14u;
    r28 = rd32(r25);
    while (r28 != r25) {
        r3 = px_rec(r1, r28 - 4u, r31, &f1);
        r4 = 0u;
        r5 = 0u;
        r6 = 0u;
        r7 = 0u;
        r8 = 0u;
        r9 = 0u;
        r10 = 0u;
        f2 = 0.0;
        f3 = 0.0;
        f4 = 0.0;
        f5 = 0.0;
        f6 = 0.0;
        f7 = 0.0;
        f8 = 0.0;
        r28 = rd32(r28);
    }
    r29 = rd32(r29);
L_802e5724:;
    if (r29 != r26) goto L_802e56a0;
    r30 = rd32(r30);
L_802e5730:;
    if (r30 != r27) goto L_802e5634;
    r11 = r1 + 0x30u;
    r23 = rd32(r11 - 0x24u);
    r24 = rd32(r11 - 0x20u);
    r25 = rd32(r11 - 0x1cu);
    r26 = rd32(r11 - 0x18u);
    r27 = rd32(r11 - 0x14u);
    r28 = rd32(r11 - 0x10u);
    r29 = rd32(r11 - 0xcu);
    r30 = rd32(r11 - 8u);
    r31 = rd32(r11 - 4u);
    r0 = rd32(r1 + 0x34u);
    *f1_out = f1; return r3;
L_802e55d8_call_1:;
    a.r[0] = r3;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    a.f[7] = f8;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r5 = tc_junkr(5u);
    r6 = tc_junkr(6u);
    r7 = tc_junkr(7u);
    r8 = tc_junkr(8u);
    r9 = tc_junkr(9u);
    r10 = tc_junkr(0xau);
    f2 = 0.0;
    f3 = 0.0;
    f4 = 0.0;
    f5 = 0.0;
    f6 = 0.0;
    f7 = 0.0;
    f8 = 0.0;
    goto L_802e55f4;
L_802e564c_call_3:;
    a.r[0] = r25;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    a.f[7] = f8;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r5 = tc_junkr(5u);
    r6 = tc_junkr(6u);
    r7 = tc_junkr(7u);
    r8 = tc_junkr(8u);
    r9 = tc_junkr(9u);
    r10 = tc_junkr(0xau);
    f2 = 0.0;
    f3 = 0.0;
    f4 = 0.0;
    f5 = 0.0;
    f6 = 0.0;
    f7 = 0.0;
    f8 = 0.0;
    goto L_802e5668;
L_802e56b8_call_5:;
    a.r[0] = r25;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    a.f[0] = f1;
    a.f[1] = f2;
    a.f[2] = f3;
    a.f[3] = f4;
    a.f[4] = f5;
    a.f[5] = f6;
    a.f[6] = f7;
    a.f[7] = f8;
    r3 = tc_call(r12, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r5 = tc_junkr(5u);
    r6 = tc_junkr(6u);
    r7 = tc_junkr(7u);
    r8 = tc_junkr(8u);
    r9 = tc_junkr(9u);
    r10 = tc_junkr(0xau);
    f2 = 0.0;
    f3 = 0.0;
    f4 = 0.0;
    f5 = 0.0;
    f6 = 0.0;
    f7 = 0.0;
    f8 = 0.0;
    goto L_802e56d4;
}

void fn_802e55a4(u32 param_r3, u32 param_r4)
{
    f64 f1 = 0.0;
    px_rec(0x817fe000u, param_r3, param_r4, &f1);
}
