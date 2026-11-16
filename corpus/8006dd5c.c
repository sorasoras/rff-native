#include "tc_rt.h"

u32 fn_8006dd5c(s32 param_1, u32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r11 = 0, r12 = 0;
    u32 r28 = 0, r29 = 0, r30 = 0, sw_ = 0;
    f64 f0 = 0.0, f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0, f9 = 0.0, f10 = 0.0, f11 = 0.0;
    f64 f12 = 0.0, f13 = 0.0;
    TcArgs a = {0};
    r4 = param_2;
    r5 = (u32)param_3;
    r28 = 0u;
    r29 = (u32)param_1;
    do {
        r3 = rd32(r29 + 0x163cu);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.f[0] = f1;
            f1 = tc_callf(rd32(rd32(r3) + 0x18u), &a);
            r4 = tc_lastr4();
            r5 = 0u;
            r3 = rd32(r29 + 0x163cu);
            if (r3 != 0u) {
                a.r[0] = r3;
                a.r[1] = 1u;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                f1 = tc_callf(rd32(rd32(r3) + 8u), &a);
                r4 = tc_lastr4();
                r5 = 0u;
            }
            wr32(r29 + 0x163cu, 0u);
        }
        r28 = r28 + 1u;
        r29 = r29 + 4u;
    } while (r28 < 2u);
    if ((u32)param_3 != 0u) {
        if (param_2 <= 8u) {
            r3 = rd32(((param_2 << 2u) & 0xfffffffcu) - 0x7fcaff58u);
            sw_ = r3;
            switch (sw_) {
            case 0x8006e264u:
                break;
            case 0x8006de04u:
                r3 = tc_call(0x8006bb94u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0xacu;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0xacu;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                    }
                    r30 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0xacu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r30 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x8007021cu, &a);
                }
                wr32((u32)param_1 + 0x163cu, r30);
                a.r[0] = r30;
                a.r[1] = (u32)param_3 + 0x21eu;
                a.r[2] = 0x804890c8u;
                a.r[3] = 0x804890c8u;
                a.r[4] = 1u;
                a.r[5] = 1u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r30) + 0x48u), &a);
                a.r[0] = rd32((u32)param_1 + 0x163cu);
                a.r[1] = (u32)param_1;
                a.r[2] = 0x15u;
                (void)tc_call(0x80070380u, &a);
                break;
            case 0x8006dec0u:
                r3 = tc_call(0x8006bb94u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0xacu;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0xacu;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                    }
                    r30 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0xacu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r30 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x8007021cu, &a);
                }
                wr32((u32)param_1 + 0x163cu, r30);
                a.r[0] = r30;
                a.r[1] = (u32)param_3 + 0x208u;
                a.r[2] = 0x804890c8u;
                a.r[3] = 0x804890c8u;
                a.r[4] = 1u;
                a.r[5] = 1u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r30) + 0x48u), &a);
                a.r[0] = rd32((u32)param_1 + 0x163cu);
                a.r[1] = (u32)param_1;
                a.r[2] = 0x15u;
                (void)tc_call(0x80070380u, &a);
                break;
            case 0x8006df7cu:
                r3 = tc_call(0x8006bb94u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0xacu;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0xacu;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                    }
                    r30 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0xacu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r30 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x8007021cu, &a);
                }
                wr32((u32)param_1 + 0x163cu, r30);
                a.r[0] = r30;
                a.r[1] = 0x20du;
                a.r[2] = 0x804890c8u;
                a.r[3] = 0x804890c8u;
                a.r[4] = 1u;
                a.r[5] = 1u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r30) + 0x48u), &a);
                a.r[0] = rd32((u32)param_1 + 0x163cu);
                a.r[1] = (u32)param_1;
                a.r[2] = 0x15u;
                (void)tc_call(0x80070380u, &a);
                r3 = tc_call(0x8006bb94u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0xacu;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0xacu;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                    }
                    r30 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0xacu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r30 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x8007021cu, &a);
                }
                wr32((u32)param_1 + 0x1640u, r30);
                a.r[0] = r30;
                a.r[1] = 0x20cu;
                a.r[2] = 0x804890c8u;
                a.r[3] = 0x804890c8u;
                a.r[4] = 1u;
                a.r[5] = 1u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r30) + 0x48u), &a);
                a.r[0] = rd32((u32)param_1 + 0x1640u);
                a.r[1] = (u32)param_1;
                a.r[2] = 0x14u;
                (void)tc_call(0x80070380u, &a);
                break;
            case 0x8006e0f0u:
                r3 = tc_call(0x8006bb94u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0xacu;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0xacu;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                    }
                    r30 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0xacu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r30 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x8007021cu, &a);
                }
                wr32((u32)param_1 + 0x163cu, r30);
                a.r[0] = r30;
                a.r[1] = 0x222u;
                a.r[2] = 0x804890c8u;
                a.r[3] = 0x804890c8u;
                a.r[4] = 1u;
                a.r[5] = 1u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r30) + 0x48u), &a);
                a.r[0] = rd32((u32)param_1 + 0x163cu);
                a.r[1] = (u32)param_1;
                a.r[2] = 0x15u;
                (void)tc_call(0x80070380u, &a);
                break;
            case 0x8006e1acu:
                r3 = tc_call(0x8006bb94u, &a);
                r4 = r3;
                if (rd32(r3 + 0x10u) == 0u) {
                    if (rd32(r3 + 0x20u) == 0u) {
                        r3 = rd32(r3);
                        a.r[0] = r3;
                        a.r[1] = 0xacu;
                        a.r[2] = rd32(r4 + 0xcu);
                        a.r[3] = r4 + 0x18u;
                        r3 = tc_call(0x80040cd8u, &a);
                        f1 = tc_lastf();
                    } else {
                        r3 = r3 + 0x24u;
                        a.r[0] = r3;
                        a.r[1] = 0x20u;
                        a.r[2] = 0xacu;
                        r3 = tc_call(0x80094e80u, &a);
                        f1 = tc_lastf();
                    }
                    r30 = r3;
                } else {
                    r3 = rd32(r3);
                    a.r[0] = r3;
                    a.r[1] = 0xacu;
                    a.r[2] = rd32(r4 + 0xcu);
                    a.r[3] = r4 + 0x18u;
                    r3 = tc_call(0x80040db8u, &a);
                    f1 = tc_lastf();
                    r30 = r3;
                }
                if (r3 != 0u) {
                    r3 = r3;
                    a.r[0] = r3;
                    f1 = tc_callf(0x8007021cu, &a);
                }
                wr32((u32)param_1 + 0x163cu, r30);
                a.r[0] = r30;
                a.r[1] = 0x235u;
                a.r[2] = 0x804890c8u;
                a.r[3] = 0x804890c8u;
                a.r[4] = 1u;
                a.r[5] = 1u;
                a.f[0] = f1;
                (void)tc_call(rd32(rd32(r30) + 0x48u), &a);
                a.r[0] = rd32((u32)param_1 + 0x163cu);
                a.r[1] = (u32)param_1;
                a.r[2] = 0x15u;
                (void)tc_call(0x80070380u, &a);
                break;
            default:
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.f[0] = f1;
                r3 = tc_call(sw_, &a);
                r0 = 0u;
                r4 = tc_lastr4();
                r5 = 0u;
                r6 = 0u;
                r7 = 0u;
                r8 = 0u;
                r9 = 0u;
                r10 = 0u;
                r11 = 0u;
                r12 = 0u;
                f0 = 0.0;
                f2 = 0.0;
                f3 = 0.0;
                f4 = 0.0;
                f5 = 0.0;
                f6 = 0.0;
                f7 = 0.0;
                f8 = 0.0;
                f9 = 0.0;
                f10 = 0.0;
                f11 = 0.0;
                f12 = 0.0;
                f13 = 0.0;
                ctr = 0u;
                return r3;
            }
        }
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
