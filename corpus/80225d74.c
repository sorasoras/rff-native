#include "tc_rt.h"

void fn_80225d74(void)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    if (rd32(0x80571454u) == 0u) {
        wr32(0x80571454u, 1u);
        r3 = tc_call(0x802302bcu, &a);
        wr32(0x8057148cu, tc_lastr4());
        wr32(0x80571488u, r3);
        (void)tc_call(0x8022c2b0u, &a);
        a.r[0] = 0x804dfe40u;
        (void)tc_call(0x80229174u, &a);
        a.r[0] = 0u;
        (void)tc_call(0x802250bcu, &a);
        a.r[0] = 0u;
        (void)tc_call(0x802250c4u, &a);
        a.r[0] = 0u;
        (void)tc_call(0x802250ccu, &a);
        a.r[0] = 0u;
        (void)tc_call(0x802250d4u, &a);
        a.r[0] = 0u;
        (void)tc_call(0x802250dcu, &a);
        a.r[0] = 0u;
        f1 = tc_callf(0x802250e4u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x83900000u;
        a.r[1] = tc_lastr4();
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x8022517cu, &a);
        (void)tc_call(0x8022514cu, &a);
        (void)tc_call(0x80225174u, &a);
        wr32(0x80571480u, 0x80000000u);
        wr32(0x8057147cu, 0u);
        wr32(0x80570ac0u, 0u);
        r5 = rd32(0x800000f4u);
        if (r5 == 0u) {
            if (rd32(0x80000034u) != 0u) {
                wr32(0x80571478u, (u32)rd8(0x800030e8u));
                wr32(0x8057147cu, 0x80571478u);
                wr32(0x80571778u, (u32)rd8(0x800030e9u));
            }
        } else {
            wr32(0x8057147cu, r5 + 0xcu);
            wr32(0x80571778u, rd32(r5 + 0x24u));
            wr8(0x800030e8u, (u8)rd32(r5 + 0xcu));
            wr8(0x800030e9u, (u8)rd32(0x80571778u));
        }
        wr32(0x80570ac0u, 1u);
        r3 = rd32(0x8000310cu);
        if (r3 == 0u) {
            r3 = 0x80589d40u;
            r0 = rd32(rd32(0x80571480u) + 0x30u);
            if (r0 != 0u) {
                r3 = r0;
            }
            if (rd32(rd32(0x80571480u) + 0x30u) == 0u) {
                r4 = rd32(0x8057147cu);
                if (r4 != 0u && rd32(r4) < 2u) {
                    r3 = 0x80587d40u;
                }
            }
        }
        a.r[0] = r3;
        (void)tc_call(0x802271f8u, &a);
        r3 = rd32(0x80003110u);
        if (r3 == 0u) {
            r3 = rd32(rd32(0x80571480u) + 0x34u);
            if (r3 == 0u) {
                r3 = 0x81700000u;
            }
        }
        a.r[0] = r3;
        (void)tc_call(0x802271e0u, &a);
        r3 = rd32(0x80003124u);
        if (r3 != 0u) {
            if (r3 >= 0x90000000u && r3 < 0x90000800u) {
                r3 = 0x90000800u;
            }
            a.r[0] = r3;
            (void)tc_call(0x80227200u, &a);
        }
        r3 = rd32(0x80003128u);
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x802271e8u, &a);
        }
        (void)tc_call(0x802308f8u, &a);
        (void)tc_call(0x802261ecu, &a);
        (void)tc_call(0x8022ececu, &a);
        (void)tc_call(0x802266c4u, &a);
        (void)tc_call(0x8022ca34u, &a);
        (void)tc_call(0x8022c320u, &a);
        (void)tc_call(0x8022850cu, &a);
        (void)tc_call(0x80227b94u, &a);
        f1 = tc_callf(0x80263fecu, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80265474u, &a);
        (void)tc_call(0x8022e378u, &a);
        (void)tc_call(0x8022ed50u, &a);
        (void)tc_call(0x80227464u, &a);
        r3 = tc_call(0x80225134u, &a);
        r3 = r3 & 0xbfffffffu;
        a.r[0] = r3;
        f1 = tc_callf(0x8022513cu, &a);
        r4 = tc_lastr4();
        if (rd32(0x80571448u) == 0u) {
            f1 = tc_callf(0x8022d484u, &a);
            r4 = tc_lastr4();
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        f1 = tc_callf(0x80225ac8u, &a);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x80570a2cu;
        a.r[1] = rd32(0x80570a18u);
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.r[4] = 0u;
        a.r[5] = 0u;
        a.r[6] = 0u;
        a.r[7] = 0u;
        (void)tc_call(0x80228554u, &a);
        r3 = rd32(0x8057147cu);
        if (r3 != 0u && rd32(r3) >= 2u) {
            (void)tc_call(0x8026adb4u, &a);
        }
        if (rd32(0x8057144cu) == 0u && rd32(0x805714bcu) == 0u) {
            (void)tc_call(0x802256ccu, &a);
            (void)tc_call(0x802258a8u, &a);
        }
        (void)tc_call(0x8022c2c4u, &a);
        f1 = tc_callf(0x8026f178u, &a);
        r4 = tc_lastr4();
        if (rd32(0x8057144cu) == 0u && rd32(0x805714bcu) == 0u) {
            (void)tc_call(0x80230ae8u, &a);
            (void)tc_call(0x80273694u, &a);
            do {
                r3 = tc_call(0x80273734u, &a);
            } while (r3 == 1u);
            f1 = tc_callf(0x802318c8u, &a);
            r4 = tc_lastr4();
        }
        if (rd32(0x80571448u) == 0u) {
            r0 = (u32)rd8(0x8000315cu);
            c0lt = (s32)r0 < 129;
            if (r0 == 0x81u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80379338u;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x80228554u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80570a30u;
                a.r[1] = 0x47eu;
                a.r[2] = 0x80379388u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x802285e4u, &a);
                r4 = tc_lastr4();
            }
            r0 = (u32)rd8(0x8000315du);
            c0lt = (s32)r0 < 129;
            if (r0 == 0x81u) {
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x803793a0u;
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x80228554u, &a);
                a.f[0] = f1;
                a.f[1] = 0.0;
                a.f[2] = 0.0;
                a.f[3] = 0.0;
                a.f[4] = 0.0;
                a.f[5] = 0.0;
                a.f[6] = 0.0;
                a.f[7] = 0.0;
                a.r[0] = 0x80570a30u;
                a.r[1] = 0x490u;
                a.r[2] = 0x80379388u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.r[5] = 0u;
                a.r[6] = 0u;
                a.r[7] = 0u;
                f1 = tc_callf(0x802285e4u, &a);
            }
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.r[4] = 0u;
            a.r[5] = 0u;
            a.r[6] = 0u;
            a.r[7] = 0u;
            (void)tc_call(0x80235088u, &a);
            if (rd32(0x80571450u) == 0u) {
                if ((u32)rd16(0x800030e6u) == 0u) {
                    a.r[0] = 0x804dfe60u;
                    a.r[1] = 0x20u;
                    (void)tc_call(0x8022770cu, &a);
                    a.r[0] = 0x804dfe80u;
                    a.r[1] = 0x804dfe60u;
                    a.r[2] = 0x80225a8cu;
                    (void)tc_call(0x8023901cu, &a);
                }
            } else {
                wr16(0x800030e6u, 0x9000u);
            }
            if (rd32(0x80571448u) == 0u) {
                r0 = (u32)rd8(0x80003184u);
            } else {
                r0 = 0x40u;
            }
            if (r0 == 0x80u && rd32(0x805714bcu) == 0u) {
                r3 = tc_call(0x8023a858u, &a);
                if (r3 == 0u) {
                    (void)tc_call(0x8022dfbcu, &a);
                }
            }
        }
        if (rd32(0x80571448u) == 0u && rd32(0x8057144cu) == 0u) {
            (void)tc_call(0x80232774u, &a);
        }
        if (rd32(0x80571448u) == 0u && rd32(0x8057144cu) == 0u && rd32(0x805714bcu) == 0u) {
            (void)tc_call(0x80231480u, &a);
        }
    }
    return;
}
