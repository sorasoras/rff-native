#include "tc_rt.h"

void fn_802a51b0(u32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5, s32 param_6, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8, u32 param_r10, u32 param_r9)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, r17 = 0, r20 = 0, r21 = 0, r23 = 0;
    u32 r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0, f2 = 0.0, f3 = 0.0, f4 = 0.0, f5 = 0.0, f6 = 0.0, f7 = 0.0, f8 = 0.0;
    TcArgs a = {0};
    r7 = (u32)param_5;
    r8 = (u32)param_6;
    f1 = param_f1;
    f2 = param_f2;
    f3 = param_f3;
    f4 = param_f4;
    f5 = param_f5;
    f6 = param_f6;
    f7 = param_f7;
    f8 = param_f8;
    r10 = param_r10;
    r9 = param_r9;
    r17 = param_2;
    r27 = (param_1 * 0x34u) - 0x7fabf9e8u;
    r21 = 0u;
    r20 = 0u;
    if (((u32)rd8(r27 + 0x11u) & 0x20u) == 0u) {
        if ((s32)param_2 >= 4) {
            c0lt = (s32)param_2 < 10;
            if (param_2 == 0xau) {
                r23 = (u32)rd16(r27 + 0x16u);
            } else {
                if (!c0lt) {
                    return;
                }
                r23 = (u32)rd16(r27 + 0x14u);
            }
        } else {
            if (param_2 != 1u) {
                return;
            }
            r23 = (u32)rd16(r27 + 0x14u);
        }
        if (param_2 != 9u) {
            if (param_2 == 4u && (param_3 & 8u) != 0u) {
                r21 = 2u;
            }
        } else {
            r21 = 1u;
        }
        r30 = param_3 & 0xfu;
        r29 = param_4 & 0xffu;
        r28 = (param_4 >> 8u) & 0xffu;
        for (;;) {
            if ((u32)param_6 == 0u || r20 != 0u) {
                a.r[0] = 2u;
                r3 = tc_call(0x8028a274u, &a);
                f1 = tc_lastf();
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
                r26 = r3;
                if (r3 == 0u) break;
                wr16(r3 + 4u, 9u);
                r4 = 0u;
                r24 = 0u;
                r25 = 0u;
                r20 = 0u;
            } else {
                r24 = (u32)rd16((u32)param_6 + 2u);
                if ((s32)r24 <= (s32)((u32)rd16(r27 + 0x18u) - 1u)) {
                    r26 = (u32)param_6;
                    r25 = r24;
                    r4 = 0u;
                    wr16((u32)param_6 + 4u, (u16)((u32)rd16((u32)param_6 + 4u) - 1u));
                } else {
                    a.r[0] = 2u;
                    r3 = tc_call(0x8028a274u, &a);
                    f1 = tc_lastf();
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
                    r26 = r3;
                    if (r3 == 0u) {
                        return;
                    }
                    wr16(r3 + 4u, 9u);
                    r4 = 1u;
                    r24 = (u32)rd16((u32)param_6 + 2u);
                    r25 = ((u32)rd16(r27 + 0x18u) - 1u) & 0xffffu;
                }
            }
            r3 = r26 + (u32)rd16(r26 + 4u);
            wr8(r3 + 8u, (u8)(((r17 << 4u) & 0xff0u) | r30));
            r3 = r3 + 9u;
            if (r17 == 4u && (u32)param_5 != 0u) {
                wr8(r3, (u8)param_5);
                r25 = 1u;
                r24 = 1u;
            }
            if (r4 == 0u) {
                if (r21 != 1u) {
                    if (r21 == 2u) {
                        r0 = r25 & 0xffffu;
                        wr8(r3 + r0, (u8)r29);
                        r3 = r3 + r0;
                        wr8(r3 + 1u, (u8)r28);
                    }
                } else {
                    wr8(r3 + (r25 & 0xffffu), (u8)r29);
                }
            } else {
                a.r[0] = r3;
                a.r[1] = (u32)param_6 + (u32)rd16((u32)param_6 + 4u) + 8u;
                a.r[2] = r25 & 0xffffu;
                f1 = tc_callf(0x80004338u, &a);
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
                r0 = (u32)rd16((u32)param_6 + 2u) - r25;
                wr16((u32)param_6 + 4u, (u16)((u32)rd16((u32)param_6 + 4u) + r25));
                wr16((u32)param_6 + 2u, (u16)r0);
            }
            r24 = r24 - r25;
            wr16(r26 + 2u, (u16)(r25 + r21 + 1u));
            if (((u32)rd8(r27 + 0x11u) & 0x20u) != 0u) {
                return;
            }
            a.f[0] = f1;
            a.f[1] = f2;
            a.f[2] = f3;
            a.f[3] = f4;
            a.f[4] = f5;
            a.f[5] = f6;
            a.f[6] = f7;
            a.f[7] = f8;
            a.r[0] = r23;
            a.r[1] = r26;
            a.r[4] = r7;
            a.r[5] = r8;
            a.r[6] = r9;
            a.r[7] = r10;
            r3 = tc_call(0x802a5e34u, &a);
            f1 = tc_lastf();
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
            if ((r3 & 0xffu) == 0u) {
                return;
            }
            if ((r24 & 0xffffu) == 0u) {
                if ((r25 & 0xffffu) == ((u32)rd16(r27 + 0x18u) - 1u)) {
                    r17 = 0xbu;
                    r20 = 1u;
                }
            } else {
                r17 = 0xbu;
            }
            if ((r24 & 0xffffu) == 0u && r20 == 0u) {
                return;
            }
        }
        return;
    }
    if ((u32)param_6 != 0u) {
        a.r[0] = (u32)param_6;
        (void)tc_call(0x8028a35cu, &a);
    }
    return;
}
