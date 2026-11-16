#include "tc_rt.h"

void fn_80073d0c(u32 param_1, u32 param_2)
{
    u32 fl_ = 0, lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = 0, r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    u32 r12 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0, t0 = 0, t7 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    r4 = param_2;
    for (;;) {
        wr32(r1 - 0x30u, r1);
        r1 = r1 - 0x30u;
        wr32(r1 + 0x34u, lr);
        t0 = r1 + 0x14u;
        wr32(t0, r25);
        wr32(t0 + 4u, r26);
        wr32(t0 + 8u, r27);
        wr32(t0 + 0xcu, r28);
        wr32(t0 + 0x10u, r29);
        wr32(t0 + 0x14u, r30);
        wr32(t0 + 0x18u, r31);
        r30 = 0x80469948u;
        r25 = r3;
        r26 = r4;
        r31 = 0x80479948u;
        a.r[0] = r3;
        r3 = tc_call(0x8007d150u, &a);
        f1 = tc_lastf();
        r28 = rd32(r3 + 0xcu);
        a.r[0] = r4;
        r3 = tc_call(0x8007d150u, &a);
        f1 = tc_lastf();
        r27 = rd32(r3 + 0xcu);
        r3 = tc_call(0x8020e0e8u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x80077bf0u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x8020b328u, &a);
        f1 = tc_lastf();
        a.r[0] = 0u;
        r3 = tc_call(0x80076fa8u, &a);
        f1 = tc_lastf();
        a.r[0] = 0x803d29f8u;
        r3 = tc_call(0x80097480u, &a);
        f1 = tc_lastf();
        a.r[0] = 0x80475e24u;
        r3 = tc_call(0x8017cb70u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x800d847cu, &a);
        f1 = tc_lastf();
        f1 = tc_callf(0x800d851cu, &a);
        r3 = tc_lastr();
        r4 = tc_lastr4();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        r3 = rd32(0x80571140u);
        if (r3 != 0u) {
            r12 = rd32(r3);
            r12 = rd32(r12 + 0x18u);
            lr = 0x80073d94u;
            if (r12 == 0x80073d0cu) continue;
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
        }
        a.r[0] = 0x80471ed0u;
        r3 = tc_call(0x80090d90u, &a);
        f1 = tc_lastf();
        a.r[0] = rd32(0x804863d8u);
        r3 = tc_call(0x8006b570u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x80073c94u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x800cf258u, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x80074e5cu, &a);
        f1 = tc_lastf();
        r3 = tc_call(0x80074984u, &a);
        f1 = tc_lastf();
        r29 = rd32(0x8046ad24u);
        while (r29 != 0u) {
            r3 = r29;
            r29 = rd32(r29);
            r3 = rd32(r3 + 8u);
            a.r[0] = r3;
            r3 = tc_call(0x8006ff00u, &a);
            f1 = tc_lastf();
        }
        r3 = tc_call(0x80074a90u, &a);
        f1 = tc_lastf();
        a.r[0] = r25;
        r3 = tc_call(0x8007d150u, &a);
        f1 = tc_lastf();
        r3 = rd32(r3 + 4u);
        r3 = tc_call(0x800736dcu, &a);
        f1 = tc_lastf();
        a.r[0] = r25;
        a.r[1] = r26;
        r3 = tc_call(0x800f5dc8u, &a);
        f1 = tc_lastf();
        r31 = 0x8046d89cu;
        while (rd32(0x8046d8a4u) != 0u) {
            a.r[0] = 0x8046d89cu;
            r3 = tc_call(0x8007b09cu, &a);
            f1 = tc_lastf();
            r29 = r3;
            a.r[0] = 0x8046d874u;
            a.r[1] = rd32(r3 + 0x108u);
            r3 = tc_call(0x8007aff0u, &a);
            f1 = tc_lastf();
            a.r[0] = r29;
            r3 = tc_call(0x8009569cu, &a);
            f1 = tc_lastf();
            a.r[0] = r29;
            a.r[1] = 1u;
            r3 = tc_call(0x80094f54u, &a);
            f1 = tc_lastf();
        }
        a.r[0] = 0x8046d89cu;
        f1 = tc_callf(0x8007ae84u, &a);
        r3 = tc_lastr();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        if (r28 == 0u || r28 != r27) {
            r27 = rd32(0x8046d874u);
            wr32(0x8057119cu, 0u);
            while (r27 != 0u) {
                r3 = r27;
                r27 = rd32(r27);
                r28 = rd32(r3 + 8u);
                a.r[0] = r28;
                r3 = tc_call(0x8009569cu, &a);
                f1 = tc_lastf();
                a.r[0] = r28;
                a.r[1] = 1u;
                r3 = tc_call(0x80094f54u, &a);
                f1 = tc_lastf();
            }
            a.r[0] = 0x8046d874u;
            f1 = tc_callf(0x8007ae84u, &a);
            r3 = tc_lastr();
            r4 = tc_lastr4();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r27 = rd32(0x8046adecu);
            for (;;) {
                if (r27 == 0u) {
                    a.r[0] = 0x8046adecu;
                    r3 = tc_call(0x8007ae84u, &a);
                    f1 = tc_lastf();
                    a.r[0] = 0x8046ae40u;
                    r3 = tc_call(0x8013e87cu, &a);
                    f1 = tc_lastf();
                    fl_ = 4u;
                    break;
                }
                r3 = r27;
                r27 = rd32(r27);
                r28 = rd32(r3 + 8u);
                r12 = rd32(r28);
                r3 = r28;
                r12 = rd32(r12 + 0x6cu);
                lr = 0x80073f48u;
                if (r12 == 0x80073d0cu) {
                    fl_ = 1u;
                    break;
                }
                a.r[0] = r28;
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
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                r12 = rd32(r28);
                r3 = r28;
                r12 = rd32(r12 + 0x18u);
                lr = 0x80073f5cu;
                if (r12 == 0x80073d0cu) {
                    fl_ = 2u;
                    break;
                }
                a.r[0] = r28;
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
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                if (r28 != 0u) {
                    r12 = rd32(r28);
                    r3 = r28;
                    r4 = 1u;
                    r12 = rd32(r12 + 8u);
                    lr = 0x80073f7cu;
                    if (r12 == 0x80073d0cu) {
                        fl_ = 3u;
                        break;
                    }
                    a.r[0] = r28;
                    a.r[1] = 1u;
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
                    f1 = tc_callf(r12, &a);
                    r3 = tc_lastr();
                    r4 = tc_lastr4();
                    r5 = tc_junkr(5u);
                    r6 = tc_junkr(6u);
                    r7 = tc_junkr(7u);
                    r8 = tc_junkr(8u);
                    r9 = tc_junkr(9u);
                    r10 = tc_junkr(0xau);
                }
            }
            if (fl_ == 4u) {
                fl_ = 0u;
                break;
            }
            if (fl_ == 3u) {
                fl_ = 0u;
            } else if (fl_ == 2u) {
                fl_ = 0u;
            } else if (fl_ == 1u) {
                fl_ = 0u;
            }
        } else {
            r27 = rd32(0x8046d874u);
            while (r27 != 0u) {
                r3 = r27;
                r27 = rd32(r27);
                r3 = rd32(r3 + 8u);
                wr32(r3 + 0xd4u, rd32(r3 + 0xd4u) & 0x7fffffffu);
                a.r[0] = r3;
                f1 = tc_callf(0x8009626cu, &a);
                r3 = tc_lastr();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            }
            r27 = rd32(0x8046adecu);
            for (;;) {
                if (r27 == 0u) {
                    fl_ = 7u;
                    break;
                }
                r3 = r27;
                r27 = rd32(r27);
                r28 = rd32(r3 + 8u);
                r4 = 0u;
                r3 = r28;
                wr32(r28 + 0x74u, rd32(r28 + 0x74u) & 0x7fffffffu);
                r12 = rd32(r28);
                r12 = rd32(r12 + 0x88u);
                lr = 0x80073ec0u;
                if (r12 == 0x80073d0cu) {
                    fl_ = 5u;
                    break;
                }
                a.r[0] = r28;
                a.r[1] = 0u;
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
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
                r4 = tc_lastr4();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
                r12 = rd32(r28);
                r3 = r28;
                r12 = rd32(r12 + 0x6cu);
                lr = 0x80073ed4u;
                if (r12 == 0x80073d0cu) {
                    fl_ = 6u;
                    break;
                }
                a.r[0] = r28;
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
                f1 = tc_callf(r12, &a);
                r3 = tc_lastr();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            }
            if (fl_ == 7u) {
                fl_ = 0u;
                break;
            }
            if (fl_ == 6u) {
                fl_ = 0u;
            } else if (fl_ == 5u) {
                fl_ = 0u;
            }
        }
    }
    a.r[0] = 0u;
    r3 = tc_call(0x80074ae0u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x8046ae14u;
    r3 = tc_call(0x8007ae84u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x8046ad4cu;
    r3 = tc_call(0x8007ae84u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x8046ad24u;
    r3 = tc_call(0x8007ae84u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x8046ad9cu;
    r3 = tc_call(0x8007ae84u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x8046ad74u;
    r3 = tc_call(0x8007ae84u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x8046b7e4u;
    r3 = tc_call(0x8007ae84u, &a);
    f1 = tc_lastf();
    t7 = r1 + 0x14u;
    r25 = rd32(t7);
    r26 = rd32(t7 + 4u);
    r27 = rd32(t7 + 8u);
    r28 = rd32(t7 + 0xcu);
    r29 = rd32(t7 + 0x10u);
    r30 = rd32(t7 + 0x14u);
    r31 = rd32(t7 + 0x18u);
    r0 = rd32(r1 + 0x34u);
    return;
}
