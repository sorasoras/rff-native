#include "tc_rt.h"

void fn_8027f700(u32 param_r3, u32 param_r4)
{
    u32 c0lt = 0, r0 = 0, r3 = 0, r12 = 0, r26 = 0, r28 = 0, r29 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r29 = rd32(((param_r3 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r26 = rd32(r29 + 0x974u);
    r28 = r29 + 0x5ecu;
    if (param_r4 != 0u) {
        wr8(r29 + 0x8c1u, 0xfcu);
        wr8(r29 + 0x8c2u, 0u);
    } else {
        (void)tc_call(0x80284b24u, &a);
        wr8(param_r3 - 0x7fa8e4ecu, 0u);
        wr8(param_r3 - 0x7fa8e4e8u, rd8(r26 + 4u));
        r0 = (u32)rd8(r26 + 5u);
        c0lt = (s32)r0 < 2;
        do {
            if (r0 != 2u) {
                if (!c0lt) {
                    if ((s32)r0 < 4) {
                        if (rd32(0x80571448u) == 0u) {
                            wr8(param_r3 - 0x7fa8e4e4u, 0xfbu);
                            r26 = param_r3 - 0x7fa8e4e4u;
                            break;
                        }
                        r26 = param_r3 - 0x7fa8e4e4u;
                        wr8(param_r3 - 0x7fa8e4e8u, 1u);
                        wr8(r26, 2u);
                        wr8(param_r3 - 0x7fa8e4ecu, 1u);
                        break;
                    }
                } else {
                    c0lt = (s32)r0 < 0;
                    if (r0 == 0u) {
                        wr8(param_r3 - 0x7fa8e4e4u, 1u);
                        r26 = param_r3 - 0x7fa8e4e4u;
                        break;
                    }
                    if (!c0lt) {
                        wr8(param_r3 - 0x7fa8e4e4u, 2u);
                        r26 = param_r3 - 0x7fa8e4e4u;
                        break;
                    }
                }
            }
            wr8(param_r3 - 0x7fa8e4e4u, 0xfbu);
            r26 = param_r3 - 0x7fa8e4e4u;
        } while (0);
        if ((u32)rd8(r26) == 2u) {
            r0 = (u32)rd8(param_r3 - 0x7fa8e4e8u);
            if (r0 < 1u || r0 > 3u) {
                wr8(r26, 0xfcu);
            }
        }
        (void)tc_call(0x80284b24u, &a);
        f1 = tc_callf(0x80284b24u, &a);
        r3 = (u32)rd8(r26);
        if (((r3 + 5u) & 0xffu) > 1u) {
            if (((r3 + 0xffu) & 0xffu) > 1u) {
                wr8(r29 + 0x98du, 3u);
                a.r[0] = r28;
                a.r[1] = 0xaau;
                a.r[2] = 0x4a400f0u;
                a.r[3] = 0x8027e5dcu;
                (void)tc_call(0x8027e064u, &a);
                a.r[0] = param_r3;
                (void)tc_call(0x8028416cu, &a);
                a.r[0] = r28;
                a.r[1] = r29 + 0x914u;
                a.r[2] = 6u;
                a.r[3] = 0x4a40040u;
                a.r[4] = 0x8027e5dcu;
                (void)tc_call(0x8027e218u, &a);
                a.r[0] = r28;
                a.r[1] = r29 + 0x91au;
                a.r[2] = 6u;
                a.r[3] = 0x4a40046u;
                a.r[4] = 0x8027e5dcu;
                (void)tc_call(0x8027e218u, &a);
                a.r[0] = r28;
                a.r[1] = r29 + 0x920u;
                a.r[2] = 4u;
                a.r[3] = 0x4a4004cu;
                a.r[4] = 0x8027e5dcu;
                (void)tc_call(0x8027e218u, &a);
                a.r[0] = r28;
                a.r[1] = r29 + 0x934u;
                a.r[2] = 0x20u;
                a.r[3] = 0x4a40020u;
                a.r[4] = rd32(r29 + 0x8a0u);
                (void)tc_call(0x8027e3d0u, &a);
            } else {
                wr8(r29 + 0x98du, 2u);
                a.r[0] = r28;
                a.r[1] = 0xaau;
                a.r[2] = 0x4a400f0u;
                a.r[3] = 0x8027e5dcu;
                (void)tc_call(0x8027e064u, &a);
                a.r[0] = param_r3;
                (void)tc_call(0x80283a7cu, &a);
                a.r[0] = r28;
                a.r[1] = r29 + 0x914u;
                a.r[2] = 6u;
                a.r[3] = 0x4a40040u;
                a.r[4] = 0x8027e5dcu;
                (void)tc_call(0x8027e218u, &a);
                a.r[0] = r28;
                a.r[1] = r29 + 0x91au;
                a.r[2] = 6u;
                a.r[3] = 0x4a40046u;
                a.r[4] = 0x8027e5dcu;
                (void)tc_call(0x8027e218u, &a);
                a.r[0] = r28;
                a.r[1] = r29 + 0x920u;
                a.r[2] = 4u;
                a.r[3] = 0x4a4004cu;
                a.r[4] = 0x8027e5dcu;
                (void)tc_call(0x8027e218u, &a);
                a.r[0] = r28;
                a.r[1] = r29 + 0x934u;
                a.r[2] = 0x20u;
                a.r[3] = 0x4a40020u;
                a.r[4] = rd32(r29 + 0x8a0u);
                (void)tc_call(0x8027e3d0u, &a);
            }
        } else {
            wr8(r29 + 0x8c1u, (u8)r3);
            wr8(r29 + 0x8c2u, rd8(param_r3 - 0x7fa8e4e8u));
            r12 = rd32(r29 + 0x8a0u);
            if (r12 != 0u) {
                a.r[0] = param_r3;
                a.r[1] = (u32)rd8(r29 + 0x8c1u);
                a.r[2] = 0u;
                a.r[3] = 0u;
                a.r[4] = 0u;
                a.f[0] = f1;
                (void)tc_call(r12, &a);
            }
        }
    }
    return;
}
