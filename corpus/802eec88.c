#include "tc_rt.h"

void fn_802eec88(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0, r24 = 0, r25 = 0, r26 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    a.r[0] = param_2;
    a.r[1] = param_2;
    a.r[2] = param_3;
    a.r[3] = param_4;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(param_2) + 0x10u), &a);
    f1 = tc_lastf();
    r31 = r3;
    a.r[0] = r3;
    a.r[1] = rd32(param_1 + 4u);
    a.r[2] = param_4;
    a.r[3] = (u32)rd16(param_1 + 0x12u);
    a.f[0] = f1;
    f1 = tc_callf(rd32(rd32(r3) + 0x10u), &a);
    r4 = tc_lastr4();
    r5 = (u32)rd16(param_1 + 0x10u);
    r30 = 0u;
    if (r5 != 0xffffu) {
        r25 = rd32(r31 + 0x18u);
        r3 = r25 + (((u32)rd16(r31 + 0x1cu) << 4u) & 0xfffffff0u);
        ctr = ((r3 + 0xfu - r25) >> 4u) & 0xfffffffu;
        if (r25 >= r3) {
            r25 = 0u;
        } else {
            while (rd32(r25 + 8u) != 0u) {
                r25 = r25 + 0x10u;
                ctr = ctr - 1u;
                if (ctr == 0u) {
                    r25 = 0u;
                    break;
                }
            }
        }
        if (r25 != 0u) {
            wr32(r25 + 8u, r31);
            wr16(r25 + 0xcu, (u16)r5);
            wr8(r25 + 0xeu, 1u);
            a.r[0] = param_3;
            a.r[1] = r25;
            f1 = tc_callf(0x802e4dd8u, &a);
            r4 = tc_lastr4();
            r5 = 0u;
            r30 = r25 + 0x10u;
        } else {
            r30 = 0u;
        }
    }
    a.r[0] = param_3;
    a.r[1] = r4;
    a.r[2] = r5;
    a.r[3] = 0u;
    a.f[0] = f1;
    r3 = tc_call(rd32(rd32(param_3) + 0x64u), &a);
    f1 = tc_lastf();
    r5 = 0u;
    r4 = (u32)rd8(param_1 + 0x26u);
    if (r4 > (r3 & 0xffu)) {
        r4 = r3;
    }
    r26 = r4 & 0xffu;
    r29 = 0u;
    while ((r29 & 0xffu) < r26) {
        r24 = param_1 + ((r29 << 1u) & 0x1feu);
        if ((u32)rd16(r24 + 0x14u) != 0xffffu) {
            a.r[0] = param_3;
            a.r[1] = r29 & 0xffu;
            a.r[2] = r5;
            a.r[3] = 0u;
            a.f[0] = f1;
            r3 = tc_call(rd32(rd32(param_3) + 0x6cu), &a);
            f1 = tc_lastf();
            r5 = (u32)rd16(r24 + 0x14u);
            if (r30 == 0u) {
                r30 = rd32(r31 + 0x18u);
            }
            r4 = rd32(r31 + 0x18u) + (((u32)rd16(r31 + 0x1cu) << 4u) & 0xfffffff0u);
            ctr = ((r4 + 0xfu - r30) >> 4u) & 0xfffffffu;
            if (r30 >= r4) {
                r30 = 0u;
            } else {
                while (rd32(r30 + 8u) != 0u) {
                    r30 = r30 + 0x10u;
                    ctr = ctr - 1u;
                    if (ctr == 0u) {
                        r30 = 0u;
                        break;
                    }
                }
            }
            if (r30 != 0u) {
                wr32(r30 + 8u, r31);
                wr16(r30 + 0xcu, (u16)r5);
                wr8(r30 + 0xeu, 1u);
                a.r[0] = r3;
                a.r[1] = r30;
                f1 = tc_callf(0x802ed65cu, &a);
                r5 = 0u;
                r30 = r30 + 0x10u;
            } else {
                r30 = 0u;
            }
        }
        r29 = r29 + 1u;
    }
    return;
}
