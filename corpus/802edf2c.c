#include "tc_rt.h"

void fn_802edf2c(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r6 = param_4;
    r7 = rd32(param_1 + 0xcu);
    r31 = 0u;
    r29 = 0u;
    r30 = r7 + rd32(r7 + 0x10u);
    for (;;) {
        r4 = rd32(param_1 + 0xcu);
        if ((r29 & 0xffffu) >= (u32)rd16(r4 + 0xeu)) break;
        r4 = r4 + rd32(r30 + ((r29 << 2u) & 0x3fffcu));
        if ((u32)rd8(r4 + 0x15u) != 0u) {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x40u), &a);
            f1 = tc_lastf();
            r6 = 0u;
            r7 = 0u;
            if (r3 != 0u) {
                if (r31 == 0u) {
                    r31 = rd32(param_1 + 0x18u);
                }
                r4 = rd32(param_1 + 0x18u) + (((u32)rd16(param_1 + 0x1cu) << 4u) & 0xfffffff0u);
                ctr = ((r4 + 0xfu - r31) >> 4u) & 0xfffffffu;
                if (r31 >= r4) {
                    r31 = 0u;
                } else {
                    while (rd32(r31 + 8u) != 0u) {
                        r31 = r31 + 0x10u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            r31 = 0u;
                            break;
                        }
                    }
                }
                if (r31 != 0u) {
                    wr32(r31 + 8u, param_1);
                    wr16(r31 + 0xcu, (u16)r29);
                    wr8(r31 + 0xeu, (u8)param_4);
                    a.r[0] = r3;
                    a.r[1] = r31;
                    f1 = tc_callf(0x802ed65cu, &a);
                    r6 = 0u;
                    r7 = 0u;
                    r31 = r31 + 0x10u;
                } else {
                    r31 = 0u;
                }
                if (r31 == 0u) break;
            }
        } else {
            a.r[0] = param_2;
            a.r[1] = r4;
            a.r[2] = param_3;
            a.r[3] = r6;
            a.r[4] = r7;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_2) + 0x3cu), &a);
            f1 = tc_lastf();
            r6 = 0u;
            r7 = 0u;
            if (r3 != 0u) {
                if (r31 == 0u) {
                    r31 = rd32(param_1 + 0x18u);
                }
                r4 = rd32(param_1 + 0x18u) + (((u32)rd16(param_1 + 0x1cu) << 4u) & 0xfffffff0u);
                ctr = ((r4 + 0xfu - r31) >> 4u) & 0xfffffffu;
                if (r31 >= r4) {
                    r31 = 0u;
                } else {
                    while (rd32(r31 + 8u) != 0u) {
                        r31 = r31 + 0x10u;
                        ctr = ctr - 1u;
                        if (ctr == 0u) {
                            r31 = 0u;
                            break;
                        }
                    }
                }
                if (r31 != 0u) {
                    wr32(r31 + 8u, param_1);
                    wr16(r31 + 0xcu, (u16)r29);
                    wr8(r31 + 0xeu, (u8)param_4);
                    a.r[0] = r3;
                    a.r[1] = r31;
                    f1 = tc_callf(0x802e4dd8u, &a);
                    r6 = 0u;
                    r7 = 0u;
                    r31 = r31 + 0x10u;
                } else {
                    r31 = 0u;
                }
                if (r31 == 0u) break;
            }
        }
        r29 = r29 + 1u;
    }
    return;
}
