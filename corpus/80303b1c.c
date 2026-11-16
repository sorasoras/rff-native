#include "tc_rt.h"

void fn_80303b1c(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x817fcdb0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r26 = 0u;
    r27 = 0u;
    while (r26 < rd32(param_r3 + 0x38u)) {
        a.r[0] = rd32(param_r3 + 0x3cu) + r27;
        r3 = tc_call(0x80305b4cu, &a);
        f1 = tc_lastf();
        r27 = r27 + 0x5cu;
        r26 = r26 + 1u;
    }
    if (rd32(param_r3 + 0x44u) >= 2u) {
        r29 = param_r3 + 0x50u;
        a.r[0] = r29;
        r3 = tc_call(0x8022d56cu, &a);
        f1 = tc_lastf();
        a.r[0] = 0x817fd9e8u;
        a.r[1] = 0x803031e4u;
        a.r[2] = 0x80303204u;
        a.r[3] = 0xcu;
        a.r[4] = 0x80u;
        r3 = tc_call(0x80255624u, &a);
        f1 = tc_lastf();
        while (rd32(param_r3 + 0x44u) != 0u) {
            r27 = rd32(param_r3 + 0x48u);
            wr32(0x817fcdd8u, r27);
            a.r[0] = param_r3 + 0x44u;
            a.r[1] = 0x817fcdd8u;
            r3 = tc_call(0x802deab0u, &a);
            f1 = tc_lastf();
            r3 = (u32)rd8(r27 - 0x54u);
            r3 = r3 + rd32(r27 - 0x98u);
            if ((s32)r3 > 127) {
                r0 = 0x7fu;
            } else {
                r0 = r3 & ~(u32)((s32)r3 >> 31);
            }
            r0 = r0 * 0xcu;
            r3 = r0 - 0x7e802618u;
            wr32(0x817fcddcu, r3 + 4u);
            a.r[0] = r3;
            a.r[1] = 0x817fcddcu;
            a.r[2] = r27;
            r3 = tc_call(0x802deba4u, &a);
            f1 = tc_lastf();
        }
        r27 = 0x817fd9e8u;
        r30 = param_r3 + 0x48u;
        r28 = 0u;
        do {
            if (rd32(r27) != 0u) {
                while (rd32(r27) != 0u) {
                    r26 = rd32(r27 + 4u);
                    wr32(0x817fcde0u, r26);
                    a.r[0] = r27;
                    a.r[1] = 0x817fcde0u;
                    r3 = tc_call(0x802deab0u, &a);
                    f1 = tc_lastf();
                    wr32(0x817fcde4u, r30);
                    a.r[0] = param_r3 + 0x44u;
                    a.r[1] = 0x817fcde4u;
                    a.r[2] = r26;
                    r3 = tc_call(0x802deba4u, &a);
                    f1 = tc_lastf();
                }
            }
            r28 = r28 + 1u;
            r27 = r27 + 0xcu;
        } while ((s32)r28 < 128);
        a.r[0] = 0x817fd9e8u;
        a.r[1] = 0x80303204u;
        a.r[2] = 0xcu;
        a.r[3] = 0x80u;
        r3 = tc_call(0x8025571cu, &a);
        f1 = tc_lastf();
        a.r[0] = r29;
        r3 = tc_call(0x8022d648u, &a);
        f1 = tc_lastf();
    }
    if (rd32(param_r3 + 0x6cu) >= 2u) {
        r29 = param_r3 + 0x78u;
        a.r[0] = r29;
        r3 = tc_call(0x8022d56cu, &a);
        f1 = tc_lastf();
        a.r[0] = 0x817fd3e8u;
        a.r[1] = 0x8030325cu;
        a.r[2] = 0x8030327cu;
        a.r[3] = 0xcu;
        a.r[4] = 0x80u;
        r3 = tc_call(0x80255624u, &a);
        f1 = tc_lastf();
        while (rd32(param_r3 + 0x6cu) != 0u) {
            r26 = rd32(param_r3 + 0x70u);
            wr32(0x817fcdc8u, r26);
            a.r[0] = param_r3 + 0x6cu;
            a.r[1] = 0x817fcdc8u;
            r3 = tc_call(0x802deab0u, &a);
            f1 = tc_lastf();
            r3 = (u32)rd8(r26 - 0x54u);
            r3 = r3 + rd32(r26 - 0x98u);
            if ((s32)r3 > 127) {
                r0 = 0x7fu;
            } else {
                r0 = r3 & ~(u32)((s32)r3 >> 31);
            }
            r0 = r0 * 0xcu;
            r3 = r0 - 0x7e802c18u;
            wr32(0x817fcdccu, r3 + 4u);
            a.r[0] = r3;
            a.r[1] = 0x817fcdccu;
            a.r[2] = r26;
            r3 = tc_call(0x802deba4u, &a);
            f1 = tc_lastf();
        }
        r27 = 0x817fd3e8u;
        r30 = param_r3 + 0x70u;
        r28 = 0u;
        do {
            if (rd32(r27) != 0u) {
                while (rd32(r27) != 0u) {
                    r26 = rd32(r27 + 4u);
                    wr32(0x817fcdd0u, r26);
                    a.r[0] = r27;
                    a.r[1] = 0x817fcdd0u;
                    r3 = tc_call(0x802deab0u, &a);
                    f1 = tc_lastf();
                    wr32(0x817fcdd4u, r30);
                    a.r[0] = param_r3 + 0x6cu;
                    a.r[1] = 0x817fcdd4u;
                    a.r[2] = r26;
                    r3 = tc_call(0x802deba4u, &a);
                    f1 = tc_lastf();
                }
            }
            r28 = r28 + 1u;
            r27 = r27 + 0xcu;
        } while ((s32)r28 < 128);
        a.r[0] = 0x817fd3e8u;
        a.r[1] = 0x8030327cu;
        a.r[2] = 0xcu;
        a.r[3] = 0x80u;
        r3 = tc_call(0x8025571cu, &a);
        f1 = tc_lastf();
        a.r[0] = r29;
        r3 = tc_call(0x8022d648u, &a);
        f1 = tc_lastf();
    }
    if (rd32(param_r3 + 0x94u) >= 2u) {
        r29 = param_r3 + 0xa0u;
        a.r[0] = r29;
        r3 = tc_call(0x8022d56cu, &a);
        f1 = tc_lastf();
        a.r[0] = 0x817fcde8u;
        a.r[1] = 0x803032d4u;
        a.r[2] = 0x803032f4u;
        a.r[3] = 0xcu;
        a.r[4] = 0x80u;
        r3 = tc_call(0x80255624u, &a);
        f1 = tc_lastf();
        while (rd32(param_r3 + 0x94u) != 0u) {
            r26 = rd32(param_r3 + 0x98u);
            wr32(0x817fcdb8u, r26);
            a.r[0] = param_r3 + 0x94u;
            a.r[1] = 0x817fcdb8u;
            r3 = tc_call(0x802deab0u, &a);
            f1 = tc_lastf();
            r3 = (u32)rd8(r26 - 0x54u);
            r3 = r3 + rd32(r26 - 0x98u);
            if ((s32)r3 > 127) {
                r0 = 0x7fu;
            } else {
                r0 = r3 & ~(u32)((s32)r3 >> 31);
            }
            r0 = r0 * 0xcu;
            r3 = r0 - 0x7e803218u;
            wr32(0x817fcdbcu, r3 + 4u);
            a.r[0] = r3;
            a.r[1] = 0x817fcdbcu;
            a.r[2] = r26;
            r3 = tc_call(0x802deba4u, &a);
            f1 = tc_lastf();
        }
        r27 = 0x817fcde8u;
        r30 = param_r3 + 0x98u;
        r28 = 0u;
        do {
            if (rd32(r27) != 0u) {
                while (rd32(r27) != 0u) {
                    r26 = rd32(r27 + 4u);
                    wr32(0x817fcdc0u, r26);
                    a.r[0] = r27;
                    a.r[1] = 0x817fcdc0u;
                    r3 = tc_call(0x802deab0u, &a);
                    f1 = tc_lastf();
                    wr32(0x817fcdc4u, r30);
                    a.r[0] = param_r3 + 0x94u;
                    a.r[1] = 0x817fcdc4u;
                    a.r[2] = r26;
                    r3 = tc_call(0x802deba4u, &a);
                    f1 = tc_lastf();
                }
            }
            r28 = r28 + 1u;
            r27 = r27 + 0xcu;
        } while ((s32)r28 < 128);
        a.r[0] = 0x817fcde8u;
        a.r[1] = 0x803032f4u;
        a.r[2] = 0xcu;
        a.r[3] = 0x80u;
        r3 = tc_call(0x8025571cu, &a);
        f1 = tc_lastf();
        a.r[0] = r29;
        r3 = tc_call(0x8022d648u, &a);
        f1 = tc_lastf();
    }
    return;
}
