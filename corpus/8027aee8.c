#include "tc_rt.h"

void fn_8027aee8(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r12 = 0, r30 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    r31 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r30 = r3;
    r4 = r31 + (((ppc_cntlzw((u32)rd8(r31 + 0x8c8u)) >> 5u) & 0xffu) * 0x60u) + 0xa0u;
    if (rd32(r31 + 0x8acu) != 0u) {
        r3 = rd32(r31 + 0x8b0u) + 1u;
        wr32(r31 + 0x8b0u, r3);
        if (r3 >= rd32(r31 + 0x8b4u)) {
            wr32(r31 + 0x8b0u, 0u);
        }
        r3 = rd32(r31 + 0x8b8u);
        if (r3 <= 2u) {
            a.r[0] = rd32(r31 + 0x8acu) + (rd32(r31 + 0x8b0u) * 0x2au);
            a.r[1] = r4;
            a.r[2] = 0x2au;
            f1 = tc_callf(0x80004338u, &a);
            r4 = tc_lastr4();
        } else {
            if ((r3 - 3u) <= 2u) {
                r5 = 0x2au;
                r3 = rd32(r31 + 0x8acu) + (rd32(r31 + 0x8b0u) * 0x32u);
                if ((u32)(s8)rd8(r4 + 0x29u) == 0u) {
                    r5 = 0x32u;
                }
                a.r[0] = r3;
                a.r[1] = r4;
                a.r[2] = r5;
                f1 = tc_callf(0x80004338u, &a);
                r4 = tc_lastr4();
            } else {
                if ((r3 - 6u) <= 2u) {
                    r5 = 0x2au;
                    r3 = rd32(r31 + 0x8acu) + (rd32(r31 + 0x8b0u) * 0x36u);
                    if ((u32)(s8)rd8(r4 + 0x29u) == 0u) {
                        r5 = 0x36u;
                    }
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    f1 = tc_callf(0x80004338u, &a);
                    r4 = tc_lastr4();
                } else {
                    r5 = 0x2au;
                    r3 = rd32(r31 + 0x8acu) + (rd32(r31 + 0x8b0u) * 0x5au);
                    if ((u32)(s8)rd8(r4 + 0x29u) == 0u) {
                        r5 = 0x5au;
                    }
                    a.r[0] = r3;
                    a.r[1] = r4;
                    a.r[2] = r5;
                    f1 = tc_callf(0x80004338u, &a);
                    r4 = tc_lastr4();
                }
            }
        }
    }
    r12 = rd32(r31 + 0x8a8u);
    if (r12 != 0u) {
        a.r[0] = (u32)param_1;
        a.r[1] = r4;
        a.r[2] = 0u;
        a.r[3] = 0u;
        a.f[0] = f1;
        (void)tc_call(r12, &a);
    }
    wr16(r31 + 0x984u, (u16)((u32)rd16(r31 + 0x984u) + 1u));
    a.r[0] = r30;
    (void)tc_call(0x8022c2d8u, &a);
    return;
}
