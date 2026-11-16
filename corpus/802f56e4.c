#include "tc_rt.h"

u32 fn_802f56e4(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(0x817fdfd0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    if (param_5 != 0u) {
        wr32(param_5, 0u);
    }
    if (rd32(param_1) == 0u) {
        r3 = 0u;
    } else {
        r0 = rd32(param_3);
        if (r0 == 0u) {
            r3 = rd32(param_1 + 8u);
            r30 = rd32(param_3 + 4u);
            if (r3 == 0u) {
                a.r[0] = 0x817fdfe0u;
                a.r[1] = param_4;
                (void)tc_call(0x8030e960u, &a);
                a.r[0] = 0x817fdfe0u;
                a.r[1] = r30;
                r3 = tc_call(0x8030e9d4u, &a);
                if (r3 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                a.r[0] = 0x817fdfdcu;
                a.r[1] = r3;
                (void)tc_call(0x8030ea5cu, &a);
                a.r[0] = 0x817fdfdcu;
                a.r[1] = param_2;
                a.r[2] = 0u;
                r3 = tc_call(0x8030ea84u, &a);
                return r3;
            }
            r5 = r3 + 8u;
            if (r30 >= rd32(r3 + 8u)) {
                r3 = 0u;
                return r3;
            }
            r4 = r3 + ((r30 << 3u) & 0xfffffff8u);
            r3 = (u32)rd8(r4 + 0xcu);
            r4 = rd32(r4 + 0x10u);
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            r3 = tc_call(0x8030e93cu, &a);
            if (r3 == 0u) {
                r3 = 0u;
                return r3;
            }
            a.r[0] = 0x817fdfd8u;
            a.r[1] = r3;
            (void)tc_call(0x8030ea7cu, &a);
            a.r[0] = 0x817fdfd8u;
            a.r[1] = param_2;
            a.r[2] = param_4;
            r3 = tc_call(0x8030ea84u, &a);
        } else {
            if (r0 == 1u) {
                r0 = rd32(param_3 + 4u);
                if (r0 == 0u) {
                    r3 = 0u;
                    return r3;
                }
                if (param_5 != 0u) {
                    wr32(param_5, r0);
                }
                r7 = rd32(param_3 + 4u);
                r6 = param_2 + 0x14u;
                r5 = r7 + 0x14u;
                wr32(param_2, rd32(r7));
                wr8(param_2 + 4u, rd8(r7 + 4u));
                wr32(param_2 + 8u, rd32(r7 + 8u));
                wr32(param_2 + 0xcu, rd32(r7 + 0xcu));
                wr32(param_2 + 0x10u, rd32(r7 + 0x10u));
                wr32(param_2 + 0x14u, rd32(r7 + 0x14u));
                ctr = 0xdu;
                do {
                    r3 = rd32(r5 + 4u);
                    r5 = r5 + 8u;
                    r0 = rd32(r5);
                    wr32(r6 + 4u, r3);
                    wr32(r6 + 8u, r0);
                    r6 = r6 + 8u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                r3 = 1u;
            } else {
                if (r0 == 2u) {
                    r3 = rd32(param_3 + 4u);
                    if (r3 == 0u) {
                        r3 = 0u;
                        return r3;
                    }
                    a.r[0] = r3;
                    a.r[1] = param_2;
                    a.r[2] = param_3;
                    a.r[3] = param_4;
                    a.r[4] = param_5;
                    a.f[0] = 0.0;
                    r3 = tc_call(rd32(rd32(r3) + 8u), &a);
                    if (r3 == 0u) {
                        r3 = 0u;
                        return r3;
                    }
                    if (param_5 != 0u) {
                        wr32(param_5, r3);
                    }
                    r4 = r3 + 0x14u;
                    r5 = param_2 + 0x14u;
                    wr32(param_2, rd32(r3));
                    wr8(param_2 + 4u, rd8(r3 + 4u));
                    wr32(param_2 + 8u, rd32(r3 + 8u));
                    wr32(param_2 + 0xcu, rd32(r3 + 0xcu));
                    wr32(param_2 + 0x10u, rd32(r3 + 0x10u));
                    r3 = rd32(r3 + 0x14u);
                    wr32(param_2 + 0x14u, r3);
                    ctr = 0xdu;
                    do {
                        r3 = rd32(r4 + 4u);
                        r4 = r4 + 8u;
                        r0 = rd32(r4);
                        wr32(r5 + 4u, r3);
                        wr32(r5 + 8u, r0);
                        r5 = r5 + 8u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r3 = 1u;
                } else {
                    r3 = 0u;
                }
            }
        }
    }
    return r3;
}
