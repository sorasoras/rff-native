#include "tc_rt.h"

void fn_802298d0(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5, u32 param_6, s32 param_7)
{
    u32 fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = tc_argr(7u);
    u32 r11 = tc_argr(8u), r12 = tc_argr(9u), r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    r4 = param_2;
    r5 = param_3;
    r6 = param_4;
    r7 = (u32)param_5;
    r8 = param_6;
    r9 = (u32)param_7;
    for (;;) {
        r12 = r1;
        r11 = 0xfffffde0u - (r1 & 0x1fu);
        wr32(r1 + r11, r1);
        r1 = r1 + r11;
        wr32(r12 + 4u, lr);
        wr32(r12 - 0x20u, r24);
        wr32(r12 - 0x1cu, r25);
        wr32(r12 - 0x18u, r26);
        wr32(r12 - 0x14u, r27);
        wr32(r12 - 0x10u, r28);
        wr32(r12 - 0xcu, r29);
        wr32(r12 - 8u, r30);
        wr32(r12 - 4u, r31);
        r27 = r3;
        r24 = r4;
        r28 = r5;
        r29 = r6;
        r31 = r7;
        r26 = r8;
        r25 = r9;
        r3 = tc_call(0x8022c2b0u, &a);
        f1 = tc_lastf();
        if (rd32(0x805714bcu) != 0u) {
            wr32(0x805714b0u, rd32(0x80003194u));
        }
        a.r[0] = 0x1cu;
        a.r[1] = 1u;
        r3 = tc_call(0x80227210u, &a);
        f1 = tc_lastf();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        wr32(r3, 1u);
        r30 = r3;
        wr32(r3 + 4u, r4);
        wr32(r3 + 0xcu, r28);
        wr32(r3 + 0x10u, r29);
        wr32(r3 + 0x14u, r31);
        if (r31 == 0u) {
            a.r[0] = 0x2000u;
            a.r[1] = 1u;
            r3 = tc_call(0x80227210u, &a);
            f1 = tc_lastf();
            wr32(r30 + 0x18u, r3);
            if (rd32(0x805714b0u) != 2u || rd32(0x805714bcu) != 0u) {
                a.r[0] = rd32(r30 + 0x18u);
                a.r[1] = r26;
                a.r[2] = r25;
                f1 = tc_callf(0x80228c88u, &a);
                r3 = tc_lastr();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            } else {
                a.r[0] = rd32(r30 + 0x18u);
                a.r[1] = r26;
                a.r[2] = r25;
                f1 = tc_callf(0x80228f60u, &a);
                r3 = tc_lastr();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            }
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        r3 = tc_call(0x80235088u, &a);
        f1 = tc_lastf();
        a.r[0] = 1u;
        r3 = tc_call(0x80239258u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x80239268u, &a);
        f1 = tc_lastf();
        wr32(0x805714c0u, 0u);
        a.r[0] = 0x80229168u;
        r3 = tc_call(0x8023981cu, &a);
        f1 = tc_lastf();
        a.r[0] = 0xfffffff0u;
        r3 = tc_call(0x8022c640u, &a);
        f1 = tc_lastf();
        a.r[0] = 0x10u;
        r3 = tc_call(0x8022c6c0u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x8022c2c4u, &a);
        f1 = tc_lastf();
        while (rd32(0x805714c0u) != 1u) {
        }
        r3 = tc_call(0x802291a0u, &a);
        f1 = tc_lastf();
        if ((r24 + 0x60000000u) == 0u && rd32(0x805714bcu) == 0u) {
            r3 = tc_call(0x802de0e8u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                fl_ = 1u;
                break;
            }
            a.r[0] = r1 + 0x60u;
            r3 = tc_call(0x802de670u, &a);
            f1 = tc_lastf();
            if (r3 != 0u) {
                fl_ = 1u;
                break;
            }
            r3 = tc_call(0x802de13cu, &a);
            f1 = tc_lastf();
            r6 = tc_junkr(6u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            if (r3 != 0u) {
                fl_ = 1u;
                break;
            }
            r3 = rd32(r30 + 0x18u);
            r0 = rd32(r25 + 4u);
            r7 = rd32(r1 + 0x60u);
            r3 = r3 + r0;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[1] = 0x11u;
            a.r[2] = 0x80570a60u;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = rd32(r1 + 0x64u);
            a.r[6] = r9;
            a.r[7] = r10;
            r3 = tc_call(0x8025b8bcu, &a);
            f1 = tc_lastf();
        }
        a.r[0] = 0x20u;
        a.r[1] = 0x20u;
        r3 = tc_call(0x80227210u, &a);
        f1 = tc_lastf();
        r6 = rd32(0x805714b4u);
        r31 = r3;
        if (r6 == 0u) {
            r26 = 0x80000000u;
            if (rd32(0x800030f4u) == 0u) {
                r6 = 0x910u;
                wr32(0x805714b4u, 0x910u);
            } else {
                a.r[0] = 0x40u;
                a.r[1] = 0x20u;
                r3 = tc_call(0x80227210u, &a);
                f1 = tc_lastf();
                r6 = (u32)rd8(0x80576af0u);
                r25 = r3;
                r10 = (u32)rd8(0x80576af1u);
                r9 = (u32)rd8(0x80576af2u);
                r0 = (u32)rd8(0x80576af3u);
                r8 = rd32(0x800030f4u);
                wr8(r1 + 0x48u, (u8)r6);
                wr8(r1 + 0x49u, (u8)r10);
                wr8(r1 + 0x4au, (u8)r9);
                wr8(r1 + 0x4bu, (u8)r0);
                a.r[0] = r1 + 0x140u;
                a.r[1] = r3;
                a.r[2] = 0x40u;
                a.r[3] = (u32)((s32)r8 >> 2);
                a.r[4] = 0u;
                a.r[5] = 0u;
                r3 = tc_call(0x80238f38u, &a);
                f1 = tc_lastf();
                for (;;) {
                    a.r[0] = r1 + 0x140u;
                    r3 = tc_call(0x802390f4u, &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) break;
                    a.r[0] = r1 + 0x140u;
                    r3 = tc_call(0x802390f4u, &a);
                    f1 = tc_lastf();
                    if ((s32)r3 <= 2) {
                        a.r[0] = r1 + 0x140u;
                        r3 = tc_call(0x802390f4u, &a);
                        f1 = tc_lastf();
                        if ((s32)r3 >= 0) continue;
                    }
                    r3 = tc_call(0x8022e0f8u, &a);
                    f1 = tc_lastf();
                }
                r4 = rd32(r25 + 0x38u);
                r6 = (u32)((s32)(rd32(0x800030f4u) + r4) >> 2);
                wr32(0x805714b4u, r6);
            }
        }
        r7 = (u32)rd8(0x80576af0u);
        r10 = (u32)rd8(0x80576af1u);
        r9 = (u32)rd8(0x80576af2u);
        r0 = (u32)rd8(0x80576af3u);
        wr8(r1 + 0x4cu, (u8)r7);
        wr8(r1 + 0x4du, (u8)r10);
        wr8(r1 + 0x4eu, (u8)r9);
        wr8(r1 + 0x4fu, (u8)r0);
        a.r[0] = r1 + 0x170u;
        a.r[1] = r31;
        a.r[2] = 0x20u;
        a.r[3] = r6;
        a.r[4] = 0u;
        a.r[5] = 0u;
        r3 = tc_call(0x80238f38u, &a);
        f1 = tc_lastf();
        for (;;) {
            a.r[0] = r1 + 0x170u;
            r3 = tc_call(0x802390f4u, &a);
            f1 = tc_lastf();
            if (r3 == 0u) break;
            a.r[0] = r1 + 0x170u;
            r3 = tc_call(0x802390f4u, &a);
            f1 = tc_lastf();
            if ((s32)r3 <= 2) {
                a.r[0] = r1 + 0x170u;
                r3 = tc_call(0x802390f4u, &a);
                f1 = tc_lastf();
                if ((s32)r3 >= 0) continue;
            }
            r3 = tc_call(0x8022e0f8u, &a);
            f1 = tc_lastf();
        }
        r6 = rd32(0x805714b4u);
        if (r6 == 0u) {
            r26 = 0x80000000u;
            if (rd32(0x800030f4u) == 0u) {
                r6 = 0x910u;
                wr32(0x805714b4u, 0x910u);
            } else {
                a.r[0] = 0x40u;
                a.r[1] = 0x20u;
                r3 = tc_call(0x80227210u, &a);
                f1 = tc_lastf();
                r6 = (u32)rd8(0x80576af0u);
                r25 = r3;
                r10 = (u32)rd8(0x80576af1u);
                r9 = (u32)rd8(0x80576af2u);
                r0 = (u32)rd8(0x80576af3u);
                r8 = rd32(0x800030f4u);
                wr8(r1 + 0x50u, (u8)r6);
                wr8(r1 + 0x51u, (u8)r10);
                wr8(r1 + 0x52u, (u8)r9);
                wr8(r1 + 0x53u, (u8)r0);
                a.r[0] = r1 + 0x1a0u;
                a.r[1] = r3;
                a.r[2] = 0x40u;
                a.r[3] = (u32)((s32)r8 >> 2);
                a.r[4] = 0u;
                a.r[5] = 0u;
                r3 = tc_call(0x80238f38u, &a);
                f1 = tc_lastf();
                for (;;) {
                    a.r[0] = r1 + 0x1a0u;
                    r3 = tc_call(0x802390f4u, &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) break;
                    a.r[0] = r1 + 0x1a0u;
                    r3 = tc_call(0x802390f4u, &a);
                    f1 = tc_lastf();
                    if ((s32)r3 <= 2) {
                        a.r[0] = r1 + 0x1a0u;
                        r3 = tc_call(0x802390f4u, &a);
                        f1 = tc_lastf();
                        if ((s32)r3 >= 0) continue;
                    }
                    r3 = tc_call(0x8022e0f8u, &a);
                    f1 = tc_lastf();
                }
                r4 = rd32(r25 + 0x38u);
                r6 = (u32)((s32)(rd32(0x800030f4u) + r4) >> 2);
                wr32(0x805714b4u, r6);
            }
        }
        r4 = rd32(r31 + 0x14u);
        r7 = (u32)rd8(0x80576af0u);
        r6 = r6 + 8u;
        r10 = (u32)rd8(0x80576af1u);
        r9 = (u32)rd8(0x80576af2u);
        r0 = (u32)rd8(0x80576af3u);
        wr8(r1 + 0x54u, (u8)r7);
        wr8(r1 + 0x55u, (u8)r10);
        wr8(r1 + 0x56u, (u8)r9);
        wr8(r1 + 0x57u, (u8)r0);
        a.r[0] = r1 + 0x1d0u;
        a.r[1] = 0x81200000u;
        a.r[2] = (r4 + 0x1fu) & 0xffffffe0u;
        a.r[3] = r6;
        a.r[4] = 0u;
        a.r[5] = 0u;
        r3 = tc_call(0x80238f38u, &a);
        f1 = tc_lastf();
        for (;;) {
            a.r[0] = r1 + 0x1d0u;
            r3 = tc_call(0x802390f4u, &a);
            f1 = tc_lastf();
            if (r3 == 0u) break;
            a.r[0] = r1 + 0x1d0u;
            r3 = tc_call(0x802390f4u, &a);
            f1 = tc_lastf();
            if ((s32)r3 <= 2) {
                a.r[0] = r1 + 0x1d0u;
                r3 = tc_call(0x802390f4u, &a);
                f1 = tc_lastf();
                if ((s32)r3 >= 0) continue;
            }
            r3 = tc_call(0x8022e0f8u, &a);
            f1 = tc_lastf();
        }
        a.r[0] = 0x81200000u;
        a.r[1] = (rd32(r31 + 0x14u) + 0x1fu) & 0xffffffe0u;
        r3 = tc_call(0x802277f0u, &a);
        f1 = tc_lastf();
        a.r[0] = r31;
        a.r[1] = 0x80379cf8u;
        a.r[2] = 0xau;
        r3 = tc_call(0x8025bfccu, &a);
        f1 = tc_lastf();
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        if ((s32)r3 <= 0) {
            r0 = 0u;
        } else {
            r0 = 1u;
        }
        if (r0 == 0u) {
            fl_ = 2u;
            break;
        }
        if ((r27 + 0x10000u) == 0xffffu) {
            r6 = rd32(0x805714b4u);
            if (r6 == 0u) {
                if (rd32(0x800030f4u) == 0u) {
                    r6 = 0x910u;
                    wr32(0x805714b4u, 0x910u);
                } else {
                    a.r[0] = 0x40u;
                    a.r[1] = 0x20u;
                    r3 = tc_call(0x80227210u, &a);
                    f1 = tc_lastf();
                    r6 = (u32)rd8(0x80576af0u);
                    r25 = r3;
                    r10 = (u32)rd8(0x80576af1u);
                    r9 = (u32)rd8(0x80576af2u);
                    r0 = (u32)rd8(0x80576af3u);
                    r8 = rd32(0x800030f4u);
                    wr8(r1 + 0x44u, (u8)r6);
                    wr8(r1 + 0x45u, (u8)r10);
                    wr8(r1 + 0x46u, (u8)r9);
                    wr8(r1 + 0x47u, (u8)r0);
                    a.r[0] = r1 + 0x110u;
                    a.r[1] = r3;
                    a.r[2] = 0x40u;
                    a.r[3] = (u32)((s32)r8 >> 2);
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    r3 = tc_call(0x80238f38u, &a);
                    f1 = tc_lastf();
                    for (;;) {
                        a.r[0] = r1 + 0x110u;
                        r3 = tc_call(0x802390f4u, &a);
                        f1 = tc_lastf();
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                        if (r3 == 0u) break;
                        a.r[0] = r1 + 0x110u;
                        r3 = tc_call(0x802390f4u, &a);
                        f1 = tc_lastf();
                        if ((s32)r3 <= 2) {
                            a.r[0] = r1 + 0x110u;
                            r3 = tc_call(0x802390f4u, &a);
                            f1 = tc_lastf();
                            if ((s32)r3 >= 0) continue;
                        }
                        r3 = tc_call(0x8022e0f8u, &a);
                        f1 = tc_lastf();
                    }
                    r4 = rd32(r25 + 0x38u);
                    r6 = (u32)((s32)(rd32(0x800030f4u) + r4) >> 2);
                    wr32(0x805714b4u, r6);
                }
            }
            r27 = (((rd32(r31 + 0x14u) + 0x20u) >> 2u) & 0x3fffffffu) + r6;
        }
        wr32(r30 + 8u, r27);
        r3 = r1 + 0x28u;
        r4 = r1 + 0x2cu;
        r5 = r1 + 0x30u;
        r12 = rd32(r31 + 0x10u);
        lr = 0x80229e2cu;
        if (r12 != 0x802298d0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            a.r[0] = 0x1cu;
            a.r[1] = 1u;
            r3 = tc_call(0x80227210u, &a);
            f1 = tc_lastf();
            r25 = r3;
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = 0x1cu;
            f1 = tc_callf(0x80004338u, &a);
            r3 = tc_lastr();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r4 = 0x80000000u;
            wr32(0x800030f0u, r25);
            r3 = 0x80228554u;
            r12 = rd32(r1 + 0x28u);
            lr = 0x80229e64u;
            if (r12 != 0x802298d0u) {
                a.r[0] = 0x80228554u;
                a.r[1] = 0x80000000u;
                a.r[2] = r5;
                a.r[3] = r6;
                a.r[4] = r7;
                a.r[5] = r8;
                a.r[6] = r9;
                a.r[7] = r10;
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                r3 = tc_call(r12, &a);
                f1 = tc_lastf();
                a.r[0] = r25;
                f1 = tc_callf(0x80227208u, &a);
                r3 = tc_lastr();
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                for (;;) {
                    r12 = rd32(r1 + 0x2cu);
                    r3 = r1 + 0x34u;
                    r4 = r1 + 0x38u;
                    r5 = r1 + 0x3cu;
                    lr = 0x80229f04u;
                    if (r12 == 0x802298d0u) {
                        fl_ = 3u;
                        break;
                    }
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = r7;
                    a.r[5] = r8;
                    a.r[6] = r9;
                    a.r[7] = r10;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    r3 = tc_call(r12, &a);
                    f1 = tc_lastf();
                    r4 = tc_lastr4();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                    if (r3 == 0u) {
                        fl_ = 4u;
                        break;
                    }
                    r5 = (u32)rd8(0x80576af0u);
                    r4 = (u32)rd8(0x80576af1u);
                    r9 = (u32)rd8(0x80576af2u);
                    r0 = (u32)rd8(0x80576af3u);
                    wr8(r1 + 0x40u, (u8)r5);
                    r10 = rd32(r1 + 0x3cu);
                    r6 = rd32(0x805715f8u);
                    wr8(r1 + 0x41u, (u8)r4);
                    r5 = rd32(r1 + 0x38u);
                    r6 = ((r6 & 0x20u) != 0u) ? 0u : (r10 >> (r6 & 0x1fu));
                    r4 = rd32(r1 + 0x34u);
                    wr8(r1 + 0x42u, (u8)r9);
                    wr8(r1 + 0x43u, (u8)r0);
                    a.r[0] = r1 + 0xe0u;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    a.r[3] = r6;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    r3 = tc_call(0x80238f38u, &a);
                    f1 = tc_lastf();
                    for (;;) {
                        a.r[0] = r1 + 0xe0u;
                        r3 = tc_call(0x802390f4u, &a);
                        f1 = tc_lastf();
                        r6 = tc_junkr(6u);
                        r7 = tc_junkr(7u);
                        r8 = tc_junkr(8u);
                        r9 = tc_junkr(9u);
                        r10 = tc_junkr(0xau);
                        if (r3 == 0u) break;
                        a.r[0] = r1 + 0xe0u;
                        r3 = tc_call(0x802390f4u, &a);
                        f1 = tc_lastf();
                        if ((s32)r3 <= 2) {
                            a.r[0] = r1 + 0xe0u;
                            r3 = tc_call(0x802390f4u, &a);
                            f1 = tc_lastf();
                            if ((s32)r3 >= 0) continue;
                        }
                        r3 = tc_call(0x8022e0f8u, &a);
                        f1 = tc_lastf();
                    }
                }
                if (fl_ == 4u) {
                    fl_ = 0u;
                } else if (fl_ == 3u) {
                    fl_ = 0u;
                    continue;
                }
                r12 = rd32(r1 + 0x30u);
                lr = 0x80229f18u;
                if (r12 != 0x802298d0u) {
                    fl_ = 5u;
                    break;
                }
            }
        }
    }
    do {
        if (fl_ == 5u) {
            fl_ = 0u;
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r26 = r3;
            wr32(0x80003180u, rd32(0x80000000u));
            wr8(0x80003184u, 0x80u);
            a.r[0] = 0x1cu;
            a.r[1] = 1u;
            r3 = tc_call(0x80227210u, &a);
            f1 = tc_lastf();
            r25 = r3;
            a.r[0] = r3;
            a.r[1] = r30;
            a.r[2] = 0x1cu;
            r3 = tc_call(0x80004338u, &a);
            f1 = tc_lastf();
            wr32(0x800030f0u, r25);
            wr32(0xcc003024u, 7u);
            r3 = tc_call(0x8022c2b0u, &a);
            f1 = tc_lastf();
            a.r[0] = r26;
            r3 = tc_call(0x8022912cu, &a);
            f1 = tc_lastf();
        } else {
            if (fl_ == 2u) {
                fl_ = 0u;
            } else if (fl_ == 1u) {
                fl_ = 0u;
                break;
            }
            r6 = rd32(0x805714b4u);
            wr32(0x812fdff0u, r28);
            wr32(0x812fdfecu, r29);
            wr8(0x800030e2u, 1u);
            if (r6 == 0u) {
                if (rd32(0x800030f4u) == 0u) {
                    r6 = 0x910u;
                    wr32(0x805714b4u, 0x910u);
                } else {
                    a.r[0] = 0x40u;
                    a.r[1] = 0x20u;
                    r3 = tc_call(0x80227210u, &a);
                    f1 = tc_lastf();
                    r6 = (u32)rd8(0x80576af0u);
                    r25 = r3;
                    r10 = (u32)rd8(0x80576af1u);
                    r9 = (u32)rd8(0x80576af2u);
                    r0 = (u32)rd8(0x80576af3u);
                    r8 = rd32(0x800030f4u);
                    wr8(r1 + 0x24u, (u8)r6);
                    wr8(r1 + 0x25u, (u8)r10);
                    wr8(r1 + 0x26u, (u8)r9);
                    wr8(r1 + 0x27u, (u8)r0);
                    a.r[0] = r1 + 0xb0u;
                    a.r[1] = r3;
                    a.r[2] = 0x40u;
                    a.r[3] = (u32)((s32)r8 >> 2);
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    r3 = tc_call(0x80238f38u, &a);
                    f1 = tc_lastf();
                    for (;;) {
                        a.r[0] = r1 + 0xb0u;
                        r3 = tc_call(0x802390f4u, &a);
                        f1 = tc_lastf();
                        if (r3 == 0u) break;
                        a.r[0] = r1 + 0xb0u;
                        r3 = tc_call(0x802390f4u, &a);
                        f1 = tc_lastf();
                        if ((s32)r3 <= 2) {
                            a.r[0] = r1 + 0xb0u;
                            r3 = tc_call(0x802390f4u, &a);
                            f1 = tc_lastf();
                            if ((s32)r3 >= 0) continue;
                        }
                        r3 = tc_call(0x8022e0f8u, &a);
                        f1 = tc_lastf();
                    }
                    r4 = rd32(r25 + 0x38u);
                    r6 = (u32)((s32)(rd32(0x800030f4u) + r4) >> 2);
                    wr32(0x805714b4u, r6);
                }
            }
            r8 = rd32(r31 + 0x14u);
            r7 = rd32(r31 + 0x18u);
            r5 = (u32)rd8(0x80576af0u);
            r8 = ((r8 + 0x20u) >> 2u) & 0x3fffffffu;
            r10 = (u32)rd8(0x80576af1u);
            r9 = (u32)rd8(0x80576af2u);
            r6 = r8 + r6;
            r0 = (u32)rd8(0x80576af3u);
            r7 = r7 + 0x1fu;
            wr8(r1 + 0x20u, (u8)r5);
            wr8(r1 + 0x21u, (u8)r10);
            wr8(r1 + 0x22u, (u8)r9);
            wr8(r1 + 0x23u, (u8)r0);
            a.r[0] = r1 + 0x80u;
            a.r[1] = 0x81330000u;
            a.r[2] = r7 & 0xffffffe0u;
            a.r[3] = r6;
            a.r[4] = 0u;
            a.r[5] = 0u;
            r3 = tc_call(0x80238f38u, &a);
            f1 = tc_lastf();
            for (;;) {
                a.r[0] = r1 + 0x80u;
                r3 = tc_call(0x802390f4u, &a);
                f1 = tc_lastf();
                if (r3 == 0u) break;
                a.r[0] = r1 + 0x80u;
                r3 = tc_call(0x802390f4u, &a);
                f1 = tc_lastf();
                if ((s32)r3 <= 2) {
                    a.r[0] = r1 + 0x80u;
                    r3 = tc_call(0x802390f4u, &a);
                    f1 = tc_lastf();
                    if ((s32)r3 >= 0) continue;
                }
                r3 = tc_call(0x8022e0f8u, &a);
                f1 = tc_lastf();
            }
            a.r[0] = 0x81330000u;
            a.r[1] = (rd32(r31 + 0x18u) + 0x1fu) & 0xffffffe0u;
            r3 = tc_call(0x802277f0u, &a);
            f1 = tc_lastf();
            r3 = tc_call(0x8022c2b0u, &a);
            f1 = tc_lastf();
            r3 = tc_call(0x80227824u, &a);
            f1 = tc_lastf();
            a.r[0] = 0x81330000u;
            r3 = tc_call(0x8022912cu, &a);
            f1 = tc_lastf();
        }
    } while (0);
    r10 = rd32(r1);
    r24 = rd32(r10 - 0x20u);
    r25 = rd32(r10 - 0x1cu);
    r26 = rd32(r10 - 0x18u);
    r27 = rd32(r10 - 0x14u);
    r28 = rd32(r10 - 0x10u);
    r29 = rd32(r10 - 0xcu);
    r30 = rd32(r10 - 8u);
    r31 = rd32(r10 - 4u);
    r0 = rd32(r10 + 4u);
    return;
}
