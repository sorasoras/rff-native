#include "tc_rt.h"

void fn_802b7c90(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, s32 param_6, u32 param_7, u32 param_8, u32 param_9, s32 param_10, f64 param_f1, f64 param_f2, f64 param_f3, f64 param_f4, f64 param_f5, f64 param_f6, f64 param_f7, f64 param_f8)
{
    u32 r3 = 0, r4 = 0, r14 = 0, r15 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_9;
    (void)param_10;
    r23 = rd32(0x817fe008u);
    r14 = (u32)rd8(0x817fe00fu);
    if ((param_7 != 0u || (u32)param_6 == 0u) && (param_7 & 0x1fu) == 0u) {
        a.r[0] = rd32(0x80570e70u);
        a.r[1] = 0xe0u;
        a.r[2] = 0x20u;
        r3 = tc_call(0x80270904u, &a);
        f1 = tc_lastf();
        r30 = r3;
        if (r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80398104u;
            a.r[1] = rd32(0x80570e70u);
            a.r[2] = 0xe0u;
            a.r[3] = r3;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802b723cu, &a);
            f1 = tc_lastf();
        }
        a.r[0] = rd32(0x80570e70u);
        a.r[1] = 0x20u;
        a.r[2] = 0x20u;
        r3 = tc_call(0x80270904u, &a);
        f1 = tc_lastf();
        r29 = r3;
        if (r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80398104u;
            a.r[1] = rd32(0x80570e70u);
            a.r[2] = 0x20u;
            a.r[3] = r3;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802b723cu, &a);
            f1 = tc_lastf();
        }
        a.r[0] = rd32(0x80570e70u);
        a.r[1] = 0x20u;
        a.r[2] = 0x20u;
        r3 = tc_call(0x80270904u, &a);
        f1 = tc_lastf();
        r28 = r3;
        if (r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80398104u;
            a.r[1] = rd32(0x80570e70u);
            a.r[2] = 0x20u;
            a.r[3] = r3;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802b723cu, &a);
            f1 = tc_lastf();
        }
        a.r[0] = rd32(0x80570e70u);
        a.r[1] = 0x20u;
        a.r[2] = 0x20u;
        r3 = tc_call(0x80270904u, &a);
        f1 = tc_lastf();
        r27 = r3;
        if (r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80398104u;
            a.r[1] = rd32(0x80570e70u);
            a.r[2] = 0x20u;
            a.r[3] = r3;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802b723cu, &a);
            f1 = tc_lastf();
        }
        a.r[0] = rd32(0x80570e70u);
        a.r[1] = 0x20u;
        a.r[2] = 0x20u;
        r3 = tc_call(0x80270904u, &a);
        f1 = tc_lastf();
        r26 = r3;
        if (r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80398104u;
            a.r[1] = rd32(0x80570e70u);
            a.r[2] = 0x20u;
            a.r[3] = r3;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802b723cu, &a);
            f1 = tc_lastf();
        }
        a.r[0] = rd32(0x80570e70u);
        a.r[1] = 0x20u;
        a.r[2] = 0x20u;
        r3 = tc_call(0x80270904u, &a);
        f1 = tc_lastf();
        r25 = r3;
        if (r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80398104u;
            a.r[1] = rd32(0x80570e70u);
            a.r[2] = 0x20u;
            a.r[3] = r3;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802b723cu, &a);
            f1 = tc_lastf();
        }
        a.r[0] = rd32(0x80570e70u);
        a.r[1] = 0x20u;
        a.r[2] = 0x20u;
        r3 = tc_call(0x80270904u, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r24 = r3;
        if (r3 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80398104u;
            a.r[1] = rd32(0x80570e70u);
            a.r[2] = 0x20u;
            a.r[3] = r3;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            f1 = tc_callf(0x802b723cu, &a);
            r3 = tc_lastr();
            r4 = tc_lastr4();
        }
        if (r29 == 0u || r28 == 0u || r27 == 0u || r26 == 0u || r25 == 0u || r24 == 0u || r30 == 0u) {
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x8039830cu;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            r3 = tc_call(0x802b723cu, &a);
            f1 = tc_lastf();
        } else {
            wr8(r29, (u8)param_2);
            wr8(r28, (u8)param_3);
            wr16(r26, (u16)(((param_4 << 8u) & 0xff00u) | ((param_4 >> 8u) & 0xffu)));
            wr16(r25, (u16)(((param_5 << 8u) & 0xff00u) | ((param_5 >> 8u) & 0xffu)));
            wr16(r24, (u16)((((u32)param_6 << 8u) & 0xff00u) | (((u32)param_6 >> 8u) & 0xffu)));
            wr8(r27, 0u);
            wr32(r30, r29);
            wr32(r30 + 4u, 1u);
            wr32(r30 + 8u, r28);
            wr32(r30 + 0xcu, 1u);
            wr32(r30 + 0x10u, r26);
            wr32(r30 + 0x14u, 2u);
            wr32(r30 + 0x18u, r25);
            wr32(r30 + 0x1cu, 2u);
            wr32(r30 + 0x20u, r24);
            wr32(r30 + 0x24u, 2u);
            wr32(r30 + 0x28u, r27);
            wr32(r30 + 0x2cu, 1u);
            wr32(r30 + 0x30u, param_7);
            wr32(r30 + 0x34u, (u32)param_6);
            a.r[0] = r29;
            a.r[1] = 0x20u;
            r3 = tc_call(0x80227738u, &a);
            f1 = tc_lastf();
            a.r[0] = r28;
            a.r[1] = 0x20u;
            r3 = tc_call(0x80227738u, &a);
            f1 = tc_lastf();
            a.r[0] = r27;
            a.r[1] = 0x20u;
            r3 = tc_call(0x80227738u, &a);
            f1 = tc_lastf();
            a.r[0] = r26;
            a.r[1] = 0x20u;
            r3 = tc_call(0x80227738u, &a);
            f1 = tc_lastf();
            a.r[0] = r25;
            a.r[1] = 0x20u;
            r3 = tc_call(0x80227738u, &a);
            f1 = tc_lastf();
            a.r[0] = r24;
            a.r[1] = 0x20u;
            r3 = tc_call(0x80227738u, &a);
            f1 = tc_lastf();
            a.r[0] = r30;
            a.r[1] = 0xe0u;
            r3 = tc_call(0x80227738u, &a);
            f1 = tc_lastf();
            if (r14 != 0u) {
                a.r[0] = rd32(0x80570e70u);
                a.r[1] = 0x80u;
                a.r[2] = 0x20u;
                r3 = tc_call(0x80270904u, &a);
                f1 = tc_lastf();
                r4 = tc_lastr4();
                r14 = r3;
                if (r3 == 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80398104u;
                    a.r[1] = rd32(0x80570e70u);
                    a.r[2] = 0x80u;
                    a.r[3] = r3;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    f1 = tc_callf(0x802b723cu, &a);
                    r3 = tc_lastr();
                    r4 = tc_lastr4();
                }
                if (r14 != 0u) {
                    a.r[0] = r14;
                    a.r[1] = 0u;
                    a.r[2] = 0x80u;
                    f1 = tc_callf(0x8000443cu, &a);
                    r3 = tc_lastr();
                    wr32(r14, param_8);
                    wr32(r14 + 8u, r23);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80398354u;
                    a.r[1] = param_8;
                    a.r[2] = r23;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x802b7194u, &a);
                    f1 = tc_lastf();
                    wr32(r14 + 0x34u, 7u);
                    wr32(r14 + 0x14u, r29);
                    wr32(r14 + 0x18u, r28);
                    wr32(r14 + 0x1cu, r26);
                    wr32(r14 + 0x20u, r25);
                    wr32(r14 + 0x24u, r24);
                    wr32(r14 + 0x28u, r27);
                    wr32(r14 + 0x2cu, r30);
                    wr32(r14 + 0x40u, param_7);
                    wr16(r14 + 0x44u, (u16)param_6);
                    a.r[0] = param_1;
                    a.r[1] = 0u;
                    a.r[2] = 6u;
                    a.r[3] = 1u;
                    a.r[4] = r30;
                    a.r[5] = 0x802b73e8u;
                    a.r[6] = r14;
                    r3 = tc_call(0x80270114u, &a);
                    f1 = tc_lastf();
                    r15 = r3;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x80398378u;
                    a.r[1] = r3;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x802b7194u, &a);
                    f1 = tc_lastf();
                    if ((s32)r15 >= 0) {
                        return;
                    }
                    if (r14 != 0u) {
                        a.r[0] = rd32(0x80570e70u);
                        a.r[1] = r14;
                        r3 = tc_call(0x80270908u, &a);
                        f1 = tc_lastf();
                        if ((s32)r3 < 0) {
                            a.f[0] = f1;
                            a.f[1] = 0.0;
                            a.f[2] = 0.0;
                            a.f[3] = 0.0;
                            a.f[4] = 0.0;
                            a.f[5] = 0.0;
                            a.f[6] = 0.0;
                            a.f[7] = 0.0;
                            a.r[0] = 0x803980b8u;
                            a.r[1] = rd32(0x80570e70u);
                            a.r[2] = r14;
                            a.r[3] = r3;
                            a.r[4] = 0u;
                            a.r[5] = 0u;
                            a.r[6] = 0u;
                            a.r[7] = 0u;
                            r3 = tc_call(0x802b723cu, &a);
                            f1 = tc_lastf();
                        }
                    }
                } else {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x8039832cu;
                    a.r[1] = r4;
                    a.r[2] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x802b723cu, &a);
                    f1 = tc_lastf();
                }
            } else {
                a.r[0] = param_1;
                a.r[1] = 0u;
                a.r[2] = 6u;
                a.r[3] = 1u;
                a.r[4] = r30;
                r3 = tc_call(0x802701f8u, &a);
                f1 = tc_lastf();
            }
        }
        if (r29 != 0u) {
            a.r[0] = rd32(0x80570e70u);
            a.r[1] = r29;
            r3 = tc_call(0x80270908u, &a);
            f1 = tc_lastf();
            if ((s32)r3 < 0) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803980b8u;
                a.r[1] = rd32(0x80570e70u);
                a.r[2] = r29;
                a.r[3] = r3;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x802b723cu, &a);
                f1 = tc_lastf();
            }
        }
        if (r28 != 0u) {
            a.r[0] = rd32(0x80570e70u);
            a.r[1] = r28;
            r3 = tc_call(0x80270908u, &a);
            f1 = tc_lastf();
            if ((s32)r3 < 0) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803980b8u;
                a.r[1] = rd32(0x80570e70u);
                a.r[2] = r28;
                a.r[3] = r3;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x802b723cu, &a);
                f1 = tc_lastf();
            }
        }
        if (r26 != 0u) {
            a.r[0] = rd32(0x80570e70u);
            a.r[1] = r26;
            r3 = tc_call(0x80270908u, &a);
            f1 = tc_lastf();
            if ((s32)r3 < 0) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803980b8u;
                a.r[1] = rd32(0x80570e70u);
                a.r[2] = r26;
                a.r[3] = r3;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x802b723cu, &a);
                f1 = tc_lastf();
            }
        }
        if (r25 != 0u) {
            a.r[0] = rd32(0x80570e70u);
            a.r[1] = r25;
            r3 = tc_call(0x80270908u, &a);
            f1 = tc_lastf();
            if ((s32)r3 < 0) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803980b8u;
                a.r[1] = rd32(0x80570e70u);
                a.r[2] = r25;
                a.r[3] = r3;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x802b723cu, &a);
                f1 = tc_lastf();
            }
        }
        if (r24 != 0u) {
            a.r[0] = rd32(0x80570e70u);
            a.r[1] = r24;
            r3 = tc_call(0x80270908u, &a);
            f1 = tc_lastf();
            if ((s32)r3 < 0) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803980b8u;
                a.r[1] = rd32(0x80570e70u);
                a.r[2] = r24;
                a.r[3] = r3;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x802b723cu, &a);
                f1 = tc_lastf();
            }
        }
        if (r27 != 0u) {
            a.r[0] = rd32(0x80570e70u);
            a.r[1] = r27;
            r3 = tc_call(0x80270908u, &a);
            f1 = tc_lastf();
            if ((s32)r3 < 0) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803980b8u;
                a.r[1] = rd32(0x80570e70u);
                a.r[2] = r27;
                a.r[3] = r3;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x802b723cu, &a);
                f1 = tc_lastf();
            }
        }
        if (r30 != 0u) {
            a.r[0] = rd32(0x80570e70u);
            a.r[1] = r30;
            r3 = tc_call(0x80270908u, &a);
            f1 = tc_lastf();
            if ((s32)r3 < 0) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803980b8u;
                a.r[1] = rd32(0x80570e70u);
                a.r[2] = r30;
                a.r[3] = r3;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                r3 = tc_call(0x802b723cu, &a);
                f1 = tc_lastf();
            }
        }
    } else {
        a.f[0] = param_f1;
        a.f[1] = param_f2;
        a.f[2] = param_f3;
        a.f[3] = param_f4;
        a.f[4] = param_f5;
        a.f[5] = param_f6;
        a.f[6] = param_f7;
        a.f[7] = param_f8;
        a.r[0] = 0x803982f0u;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = param_4;
        a.r[4] = param_5;
        a.r[5] = (u32)param_6;
        a.r[6] = param_7;
        a.r[7] = param_8;
        r3 = tc_call(0x802b723cu, &a);
        f1 = tc_lastf();
    }
    return;
}
