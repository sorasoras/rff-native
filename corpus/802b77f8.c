#include "tc_rt.h"

void fn_802b77f8(u32 param_1, u32 param_2, s32 param_3, s32 param_4, u32 param_5, u32 param_6, u32 param_7, s32 param_8)
{
    u32 r3 = 0, r4 = 0, r26 = 0, r27 = 0, r28 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = rd32(0x80570e70u);
    a.r[1] = 0x60u;
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
        a.r[2] = 0x60u;
        a.r[3] = r3;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802b723cu, &a);
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
        (void)tc_call(0x802b723cu, &a);
    }
    a.r[0] = rd32(0x80570e70u);
    a.r[1] = 0x20u;
    a.r[2] = 0x20u;
    r3 = tc_call(0x80270904u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
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
        f1 = tc_callf(0x802b723cu, &a);
        r4 = tc_lastr4();
    }
    if ((r28 == 0u || r27 == 0u) || r26 == 0u) {
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x8039825cu;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x802b723cu, &a);
    } else {
        wr8(r27, (u8)param_2);
        wr16(r26, (u16)param_3);
        wr32(r28, r27);
        wr32(r28 + 4u, 1u);
        wr32(r28 + 8u, r26);
        wr32(r28 + 0xcu, 2u);
        wr32(r28 + 0x10u, (u32)param_4);
        wr32(r28 + 0x14u, (u32)param_3);
        a.r[0] = r27;
        a.r[1] = 0x20u;
        (void)tc_call(0x80227738u, &a);
        a.r[0] = r26;
        a.r[1] = 0x20u;
        (void)tc_call(0x80227738u, &a);
        a.r[0] = r28;
        a.r[1] = 0x60u;
        (void)tc_call(0x80227738u, &a);
        if ((u32)param_8 == 0u) {
            a.r[0] = param_1;
            a.r[1] = param_5;
            a.r[2] = 2u;
            a.r[3] = 1u;
            a.r[4] = r28;
            r3 = tc_call(0x802701f8u, &a);
            f1 = tc_lastf();
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = 0x80398280u;
            a.r[1] = r3;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x802b7194u, &a);
        } else {
            a.r[0] = rd32(0x80570e70u);
            a.r[1] = 0x80u;
            a.r[2] = 0x20u;
            r3 = tc_call(0x80270904u, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
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
                a.r[2] = 0x80u;
                a.r[3] = r3;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x802b723cu, &a);
                r4 = tc_lastr4();
            }
            if (r30 == 0u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803982a0u;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802b723cu, &a);
            } else {
                a.r[0] = r30;
                a.r[1] = 0u;
                a.r[2] = 0x80u;
                f1 = tc_callf(0x8000443cu, &a);
                wr32(r30, param_6);
                wr32(r30 + 8u, param_7);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803982ccu;
                a.r[1] = param_6;
                a.r[2] = param_7;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                (void)tc_call(0x802b7194u, &a);
                wr32(r30 + 0x34u, 3u);
                wr32(r30 + 0x14u, r27);
                wr32(r30 + 0x18u, r26);
                wr32(r30 + 0x1cu, r28);
                wr32(r30 + 0x40u, (u32)param_4);
                wr16(r30 + 0x44u, (u16)param_3);
                a.r[0] = param_1;
                a.r[1] = param_5;
                a.r[2] = 2u;
                a.r[3] = 1u;
                a.r[4] = r28;
                a.r[5] = 0x802b73e8u;
                a.r[6] = r30;
                r3 = tc_call(0x80270114u, &a);
                if ((s32)r3 >= 0) {
                    return;
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
                        (void)tc_call(0x802b723cu, &a);
                    }
                }
            }
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
            (void)tc_call(0x802b723cu, &a);
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
            (void)tc_call(0x802b723cu, &a);
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
            (void)tc_call(0x802b723cu, &a);
        }
    }
    return;
}
