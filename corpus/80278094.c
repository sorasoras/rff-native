#include "tc_rt.h"

void fn_80278094(u32 param_r3)
{
    u32 ca = 0, r3 = 0, r4 = 0, r6 = 0, r24 = 0, r25 = 0, r26 = 0, r28 = 0, r29 = 0, r30 = 0;
    TcArgs a = {0};
    r30 = (param_r3 << 2u) & 0xfffffffcu;
    r29 = rd32(r30 - 0x7faf46b0u);
    r28 = 0u;
    if (rd32(r29 + 0x8bcu) != 0xffffffffu) {
        r3 = tc_call(0x8022c2b0u, &a);
        r25 = r3;
        r24 = r29 + (((ppc_cntlzw((u32)rd8(r29 + 0x8c8u)) >> 5u) & 0xffu) * 0x60u) + 0xa0u;
        a.r[0] = r29;
        a.r[1] = r24;
        a.r[2] = r29 + 0x40u;
        r3 = tc_call(0x802773dcu, &a);
        r26 = r3;
        if (r3 != 0u) {
            a.r[0] = r29 + 0x40u;
            a.r[1] = r24;
            a.r[2] = 0x60u;
            (void)tc_call(0x80004338u, &a);
        }
        if ((u32)(s8)rd8(r29 + 0x69u) != 0u) {
            a.r[0] = r29 + 0x40u;
            a.r[1] = 0u;
            a.r[2] = 0x60u;
            (void)tc_call(0x8000443cu, &a);
        }
        a.r[0] = r25;
        (void)tc_call(0x8022c2d8u, &a);
        a.r[0] = param_r3;
        (void)tc_call(0x80277f88u, &a);
        if (r26 != 0u) {
            r28 = 1u;
            r3 = tc_call(0x802302bcu, &a);
            wr32(r29 + 0x8f4u, tc_lastr4());
            wr32(r29 + 0x8f0u, r3);
        } else {
            if ((u32)rd8(0x80571b02u) != 0u) {
                r3 = tc_call(0x802302bcu, &a);
                r4 = tc_lastr4();
                r6 = rd32(r29 + 0x8f4u);
                ca = r6 <= r4;
                r4 = r4 - r6;
                a.r[0] = (u32)((u64)~rd32(r29 + 0x8f0u) + (u64)r3 + (u64)ca);
                a.r[1] = r4;
                a.r[2] = 0u;
                a.r[3] = (rd32(0x800000f8u) >> 2u) & 0x3fffffffu;
                (void)tc_call(0x80255b5cu, &a);
                if ((s32)tc_lastr4() > (s32)((u32)rd8(0x80571b02u) * 0x3cu)) {
                    r29 = rd32(r30 - 0x7faf46b0u);
                    r3 = tc_call(0x8022c2b0u, &a);
                    r26 = rd32(r29 + 0x8bcu);
                    a.r[0] = r3;
                    (void)tc_call(0x8022c2d8u, &a);
                    if (r26 != 0xffffffffu) {
                        r3 = tc_call(0x8022c2b0u, &a);
                        if ((u32)rd8(r29 + 0x986u) != 0u) {
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                        } else {
                            wr8(r29 + 0x986u, 1u);
                            a.r[0] = r3;
                            (void)tc_call(0x8022c2d8u, &a);
                            a.r[0] = param_r3;
                            a.r[1] = 0u;
                            a.r[2] = 0x8027a08cu;
                            (void)tc_call(0x8027a874u, &a);
                        }
                    }
                }
            }
        }
        if (r28 != 0u) {
            (void)tc_call(0x8023f948u, &a);
        }
    }
    return;
}
