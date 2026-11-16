#include "tc_rt.h"

void fn_801655fc(u32 param_1, s32 param_2)
{
    u32 c0lt = 0, ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    c0lt = param_2 < 2;
    if ((u32)param_2 == 2u) {
        r3 = tc_call(0x800545e4u, &a);
        f1 = tc_lastf();
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = r3;
        a.r[1] = 0x36du;
        a.r[2] = 1u;
        a.r[3] = 0u;
        a.r[4] = 0xffffffffu;
        r3 = tc_call(0x80050dd4u, &a);
        r28 = r3;
    } else if (!c0lt) {
        if (param_2 < 4) {
            r3 = tc_call(0x800545e4u, &a);
            f1 = tc_lastf();
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[1] = 0x36bu;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0xffffffffu;
            r3 = tc_call(0x80050dd4u, &a);
            r28 = r3;
        }
    } else {
        c0lt = param_2 < 0;
        if ((u32)param_2 == 0u) {
            r3 = tc_call(0x800545e4u, &a);
            f1 = tc_lastf();
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[1] = 0x36au;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0xffffffffu;
            r3 = tc_call(0x80050dd4u, &a);
            r28 = r3;
        } else if (!c0lt) {
            r3 = tc_call(0x800545e4u, &a);
            f1 = tc_lastf();
            a.f[0] = f1;
            a.f[1] = 0.0;
            a.f[2] = 0.0;
            a.f[3] = 0.0;
            a.f[4] = 0.0;
            a.f[5] = 0.0;
            a.f[6] = 0.0;
            a.f[7] = 0.0;
            a.r[0] = r3;
            a.r[1] = 0x36cu;
            a.r[2] = 1u;
            a.r[3] = 0u;
            a.r[4] = 0xffffffffu;
            r3 = tc_call(0x80050dd4u, &a);
            r28 = r3;
        }
    }
    a.r[0] = r28;
    a.r[1] = 0u;
    (void)tc_call(0x800510bcu, &a);
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    r3 = tc_call(0x80165898u, &a);
    r30 = r3;
    r29 = r28;
    r27 = 0u;
    while (r27 < r30) {
        r26 = rd32(r29);
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = r27;
        r3 = tc_call(0x80165a20u, &a);
        r31 = r3;
        a.r[0] = param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = r27;
        r3 = tc_call(0x801658e0u, &a);
        do {
            if (r31 > 0u) {
                r0 = (r31 >> 1u) & 0x7fffffffu;
                ctr = r0;
                if (r0 != 0u) {
                    do {
                        wr32(r3, rd32(r26));
                        wr32(r3 + 8u, rd32(r26 + 8u));
                        wr32(r3 + 4u, rd32(r26 + 4u));
                        wr32(r3 + 0xcu, rd32(r26 + 0xcu));
                        wr32(r3 + 0x10u, rd32(r26 + 0x10u));
                        wr32(r3 + 0x14u, rd32(r26 + 0x14u));
                        wr32(r3 + 0x18u, rd32(r26 + 0x18u));
                        wr32(r3 + 0x1cu, rd32(r26 + 0x1cu));
                        wr32(r3 + 0x20u, rd32(r26 + 0x20u));
                        wr32(r3 + 0x24u, rd32(r26 + 0x24u));
                        wr32(r3 + 0x2cu, rd32(r26 + 0x2cu));
                        wr32(r3 + 0x28u, rd32(r26 + 0x28u));
                        wr32(r3 + 0x30u, rd32(r26 + 0x30u));
                        wr32(r3 + 0x34u, rd32(r26 + 0x34u));
                        wr32(r3 + 0x38u, rd32(r26 + 0x38u));
                        wr32(r3 + 0x3cu, rd32(r26 + 0x3cu));
                        wr32(r3 + 0x40u, rd32(r26 + 0x40u));
                        r0 = rd32(r26 + 0x44u);
                        r26 = r26 + 0x48u;
                        wr32(r3 + 0x44u, r0);
                        r3 = r3 + 0x48u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r31 = r31 & 1u;
                    if (r31 == 0u) break;
                }
                ctr = r31;
                do {
                    wr32(r3, rd32(r26));
                    wr32(r3 + 8u, rd32(r26 + 8u));
                    wr32(r3 + 4u, rd32(r26 + 4u));
                    wr32(r3 + 0xcu, rd32(r26 + 0xcu));
                    wr32(r3 + 0x10u, rd32(r26 + 0x10u));
                    wr32(r3 + 0x14u, rd32(r26 + 0x14u));
                    wr32(r3 + 0x18u, rd32(r26 + 0x18u));
                    wr32(r3 + 0x1cu, rd32(r26 + 0x1cu));
                    r0 = rd32(r26 + 0x20u);
                    r26 = r26 + 0x24u;
                    wr32(r3 + 0x20u, r0);
                    r3 = r3 + 0x24u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        } while (0);
        r29 = r29 + 8u;
        r27 = r27 + 1u;
    }
    r3 = tc_call(0x800545e4u, &a);
    r6 = r3;
    if (rd32(r3 + 0x10u) == 0u) {
        if (rd32(r3 + 0x20u) == 0u) {
            r5 = rd32(r3 + 0xcu);
            r3 = rd32(r3);
            r6 = r6 + 0x18u;
            a.r[0] = r3;
            a.r[1] = r28;
            a.r[2] = r5;
            a.r[3] = r6;
            (void)tc_call(0x80040e98u, &a);
        } else {
            r3 = r3 + 0x24u;
            a.r[0] = r3;
            a.r[1] = r28;
            (void)tc_call(0x80094ec0u, &a);
        }
    } else {
        r5 = rd32(r3 + 0xcu);
        r3 = rd32(r3);
        r6 = r6 + 0x18u;
        a.r[0] = r3;
        a.r[1] = r28;
        a.r[2] = r5;
        a.r[3] = r6;
        (void)tc_call(0x80040e98u, &a);
    }
    return;
}
