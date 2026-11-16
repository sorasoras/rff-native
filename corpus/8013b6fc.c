#include "tc_rt.h"

void fn_8013b6fc(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r27 = 0, r28 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfc0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r4 = rd32((u32)param_1 + 0x30u);
    if (r4 != 0u && ((u32)rd8(rd32(r4 + 0x10u) + 0xbbu) & 1u) != 0u) {
        a.r[0] = r4;
        (void)tc_call(0x800fe9bcu, &a);
        r28 = (u32)param_1;
        r27 = 0u;
        do {
            r3 = rd32(r28 + 0x98u);
            if ((s32)r3 < 0) {
                r3 = rd32(r28 + 0x9cu);
                if ((s32)r3 >= 0) {
                    a.r[0] = r3;
                    a.r[1] = 4u;
                    r3 = tc_call(0x8014db4cu, &a);
                    f1 = tc_lastf();
                    if (r3 != 0u) {
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 1u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        r3 = tc_call(0x801ebe1cu, &a);
                        a.r[0] = r3;
                        a.r[1] = 0u;
                        (void)tc_call(0x801ed110u, &a);
                        a.r[0] = (u32)param_1;
                        a.r[1] = r27;
                        r3 = tc_call(0x801894d8u, &a);
                        f1 = tc_lastf();
                        r31 = r3;
                        a.f[0] = f1;
                        a.f[1] = 0.0;
                        a.f[2] = 0.0;
                        a.f[3] = 0.0;
                        a.f[4] = 0.0;
                        a.f[5] = 0.0;
                        a.f[6] = 0.0;
                        a.f[7] = 0.0;
                        a.r[0] = 1u;
                        a.r[3] = 0u;
                        a.r[4] = 0u;
                        a.r[5] = 0u;
                        a.r[6] = 0u;
                        a.r[7] = 0u;
                        r3 = tc_call(0x801ebe1cu, &a);
                        a.r[0] = r3;
                        a.r[1] = r31;
                        (void)tc_call(0x801ec750u, &a);
                    }
                }
            } else if (r3 == 0xcu) {
                r31 = 0u;
                r5 = rd32(0x8033a3d0u);
                r0 = rd32(0x8033a3d4u);
                wr32(0x817fdfc8u, rd32(0x8033a3ccu));
                wr32(0x817fdfccu, r5);
                wr32(0x817fdfd0u, r0);
                a.r[0] = 0xcu;
                a.r[1] = 0xdu;
                r3 = tc_call(0x8014da9cu, &a);
                if (r3 == 0u) {
                    a.r[0] = 0xdu;
                    a.r[1] = 0xdu;
                    r3 = tc_call(0x8014da9cu, &a);
                    f1 = tc_lastf();
                    if (r3 != 0u) {
                        r31 = rd32(0x817fdfccu);
                    }
                } else {
                    a.r[0] = 0xdu;
                    a.r[1] = 0xdu;
                    r3 = tc_call(0x8014da9cu, &a);
                    f1 = tc_lastf();
                    if (r3 == 0u) {
                        r31 = rd32(0x817fdfc8u);
                    } else {
                        r31 = rd32(0x817fdfd0u);
                    }
                }
                if (r31 != 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x801ebe1cu, &a);
                    a.r[0] = r3;
                    a.r[1] = r31;
                    (void)tc_call(0x801ed080u, &a);
                    a.r[0] = (u32)param_1;
                    a.r[1] = r27;
                    r3 = tc_call(0x801894d8u, &a);
                    f1 = tc_lastf();
                    r31 = r3;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x801ebe1cu, &a);
                    a.r[0] = r3;
                    a.r[1] = r31;
                    (void)tc_call(0x801ec750u, &a);
                }
            } else {
                a.r[0] = r3;
                a.r[1] = 0xdu;
                r3 = tc_call(0x8014da9cu, &a);
                f1 = tc_lastf();
                if (r3 != 0u) {
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0x817fdfd8u;
                    a.r[1] = 0x8033a424u;
                    a.r[2] = rd32(r28 + 0x98u);
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    f1 = tc_callf(0x8025b994u, &a);
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x801ebe1cu, &a);
                    a.r[0] = r3;
                    a.r[1] = 0x817fdfd8u;
                    (void)tc_call(0x801ed080u, &a);
                    a.r[0] = (u32)param_1;
                    a.r[1] = r27;
                    r3 = tc_call(0x801894d8u, &a);
                    f1 = tc_lastf();
                    r31 = r3;
                    a.f[0] = f1;
                    a.f[1] = 0.0;
                    a.f[2] = 0.0;
                    a.f[3] = 0.0;
                    a.f[4] = 0.0;
                    a.f[5] = 0.0;
                    a.f[6] = 0.0;
                    a.f[7] = 0.0;
                    a.r[0] = 0u;
                    a.r[3] = 0u;
                    a.r[4] = 0u;
                    a.r[5] = 0u;
                    a.r[6] = 0u;
                    a.r[7] = 0u;
                    r3 = tc_call(0x801ebe1cu, &a);
                    a.r[0] = r3;
                    a.r[1] = r31;
                    (void)tc_call(0x801ec750u, &a);
                }
            }
            r27 = r27 + 1u;
            r28 = r28 + 8u;
        } while ((s32)r27 < 30);
    }
    return;
}
