#include "tc_rt.h"

void fn_8029893c(u32 param_1, u32 param_2, u32 param_3, s32 param_4)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r4 = 0, r5 = 0, r26 = 0, r29 = 0, r30 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    (void)param_1;
    wr32(0x817fdee0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdfe8u, 0u);
    wr32(0x817fdfecu, 0u);
    wr32(0x817fdff0u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdffcu, 0u);
    r26 = param_2;
    r30 = rd32(0x8053efd4u);
    r29 = (u32)rd8(0x8053f006u);
    a.r[0] = 0x8053efd8u;
    (void)tc_call(0x8028d290u, &a);
    wr8(0x8053f006u, 0u);
    do {
        if ((u32)param_4 != 0u) {
            wr16(0x817fdeeau, 0u);
            wr16(0x817fdee8u, 9u);
            wr8(0x817fdeecu, 0u);
        } else {
            r4 = 0x817fdeecu;
            r3 = 0xf8u;
            if (param_3 < 0xf8u) {
                r3 = param_3;
            }
            r5 = r3 & 0xffffu;
            wr16(0x817fdeeau, (u16)r3);
            wr16(0x817fdee8u, 0u);
            r3 = r5;
            if (r5 != 0u) {
                r0 = (r5 >> 3u) & 0x1fffffffu;
                ctr = r0;
                if (r0 != 0u) {
                    do {
                        r5 = r5 - 8u;
                        wr8(r4, rd8(r26));
                        wr8(r4 + 1u, rd8(r26 + 1u));
                        wr8(r4 + 2u, rd8(r26 + 2u));
                        wr8(r4 + 3u, rd8(r26 + 3u));
                        wr8(r4 + 4u, rd8(r26 + 4u));
                        wr8(r4 + 5u, rd8(r26 + 5u));
                        wr8(r4 + 6u, rd8(r26 + 6u));
                        r0 = (u32)rd8(r26 + 7u);
                        r26 = r26 + 8u;
                        wr8(r4 + 7u, (u8)r0);
                        r4 = r4 + 8u;
                        ctr = ctr - 1u;
                    } while (ctr != 0u);
                    r3 = r3 & 7u;
                    if (r3 == 0u) break;
                }
                ctr = r3;
                do {
                    r0 = (u32)rd8(r26);
                    r5 = r5 - 1u;
                    r26 = r26 + 1u;
                    wr8(r4, (u8)r0);
                    r4 = r4 + 1u;
                    ctr = ctr - 1u;
                } while (ctr != 0u);
            }
        }
    } while (0);
    a.r[0] = 0x8053f000u;
    a.r[1] = 0u;
    a.r[2] = 6u;
    f1 = tc_callf(0x8000443cu, &a);
    r4 = tc_lastr4();
    if ((r29 & 1u) != 0u) {
        wr32(0x8053efd4u, 0u);
        if (r30 != 0u) {
            a.r[0] = 0x817fdee8u;
            a.r[1] = r4;
            a.r[2] = 0u;
            a.r[3] = 0u;
            a.f[0] = f1;
            (void)tc_call(r30, &a);
        }
    }
    return;
}
