#include "tc_rt.h"

void fn_8023f9f0(u32 param_r3)
{
    u32 r0 = 0, r3 = 0, r4 = tc_argr(1u), r6 = tc_argr(3u), r23 = 0, r24 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r29 = param_r3;
    if (rd32(0x80570b20u) != 0u) {
        wr32(0xcd8000c0u, rd32(0xcd8000c0u) & 0xffff7fffu);
    } else {
        wr32(0xcd8000c0u, (rd32(0xcd8000c0u) & 0xffff7fffu) | 0x8000u);
    }
    r3 = tc_call(0x802302bcu, &a);
    f1 = tc_lastf();
    r28 = tc_lastr4();
    r27 = r3;
    do {
        r3 = tc_call(0x802302bcu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r6 = r4 - r28;
        r3 = r3 - (r27 + (r28 > r4));
        r3 = (r3 << 3u) & 0xfffffff8u;
        r3 = (r3 & 0xfffffff8u) | ((r6 >> 0x1du) & 7u);
        a.r[0] = r3;
        a.r[1] = (r6 << 3u) & 0xfffffff8u;
        a.r[2] = 0u;
        a.r[3] = (ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 0xfu) & 0x1ffffu;
        r3 = tc_call(0x80255b5cu, &a);
        f1 = tc_lastf();
        r0 = r3 ^ 0x80000000u;
    } while ((0u - (r0 - (r0 + (((tc_lastr4() < 2u) - 0x80000000u) > r0)))) != 0u);
    r30 = 0u;
    wr32(0xcd8000c0u, rd32(0xcd8000c0u) & 0xffffbfffu);
    do {
        if ((r29 & 0x80u) == 0u) {
            if (rd32(0x80570b20u) != 0u) {
                wr32(0xcd8000c0u, rd32(0xcd8000c0u) & 0xffff7fffu);
            } else {
                wr32(0xcd8000c0u, (rd32(0xcd8000c0u) & 0xffff7fffu) | 0x8000u);
            }
        } else if (rd32(0x80570b20u) != 0u) {
            wr32(0xcd8000c0u, (rd32(0xcd8000c0u) & 0xffff7fffu) | 0x8000u);
        } else {
            wr32(0xcd8000c0u, rd32(0xcd8000c0u) & 0xffff7fffu);
        }
        r3 = tc_call(0x802302bcu, &a);
        f1 = tc_lastf();
        r24 = tc_lastr4();
        r23 = r3;
        do {
            r3 = tc_call(0x802302bcu, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r6 = r4 - r24;
            r3 = r3 - (r23 + (r24 > r4));
            r3 = (r3 << 3u) & 0xfffffff8u;
            r3 = (r3 & 0xfffffff8u) | ((r6 >> 0x1du) & 7u);
            a.r[0] = r3;
            a.r[1] = (r6 << 3u) & 0xfffffff8u;
            a.r[2] = 0u;
            a.r[3] = (ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 0xfu) & 0x1ffffu;
            r3 = tc_call(0x80255b5cu, &a);
            f1 = tc_lastf();
            r0 = r3 ^ 0x80000000u;
        } while ((0u - (r0 - (r0 + (((tc_lastr4() < 2u) - 0x80000000u) > r0)))) != 0u);
        wr32(0xcd8000c0u, (rd32(0xcd8000c0u) & 0xffffbfffu) | 0x4000u);
        r3 = tc_call(0x802302bcu, &a);
        f1 = tc_lastf();
        r23 = tc_lastr4();
        r24 = r3;
        do {
            r3 = tc_call(0x802302bcu, &a);
            f1 = tc_lastf();
            r4 = tc_lastr4();
            r6 = r4 - r23;
            r3 = r3 - (r24 + (r23 > r4));
            r3 = (r3 << 3u) & 0xfffffff8u;
            r3 = (r3 & 0xfffffff8u) | ((r6 >> 0x1du) & 7u);
            a.r[0] = r3;
            a.r[1] = (r6 << 3u) & 0xfffffff8u;
            a.r[2] = 0u;
            a.r[3] = (ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 0xfu) & 0x1ffffu;
            r3 = tc_call(0x80255b5cu, &a);
            f1 = tc_lastf();
            r0 = r3 ^ 0x80000000u;
        } while ((0u - (r0 - (r0 + (((tc_lastr4() < 2u) - 0x80000000u) > r0)))) != 0u);
        r30 = r30 + 1u;
        r29 = (r29 << 1u) & 0xfeu;
        wr32(0xcd8000c0u, rd32(0xcd8000c0u) & 0xffffbfffu);
    } while ((s32)r30 < 8);
    wr32(0xcd8000c4u, (rd32(0xcd8000c4u) & 0xffff7fffu) | 0x4000u);
    r3 = tc_call(0x802302bcu, &a);
    f1 = tc_lastf();
    r31 = tc_lastr4();
    r30 = r3;
    do {
        r3 = tc_call(0x802302bcu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r6 = r4 - r31;
        r3 = r3 - (r30 + (r31 > r4));
        r3 = (r3 << 3u) & 0xfffffff8u;
        r3 = (r3 & 0xfffffff8u) | ((r6 >> 0x1du) & 7u);
        a.r[0] = r3;
        a.r[1] = (r6 << 3u) & 0xfffffff8u;
        a.r[2] = 0u;
        a.r[3] = (ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 0xfu) & 0x1ffffu;
        r3 = tc_call(0x80255b5cu, &a);
        f1 = tc_lastf();
        r0 = r3 ^ 0x80000000u;
    } while ((0u - (r0 - (r0 + (((tc_lastr4() < 2u) - 0x80000000u) > r0)))) != 0u);
    wr32(0xcd8000c0u, (rd32(0xcd8000c0u) & 0xffffbfffu) | 0x4000u);
    r3 = tc_call(0x802302bcu, &a);
    f1 = tc_lastf();
    r26 = tc_lastr4();
    r27 = r3;
    do {
        r3 = tc_call(0x802302bcu, &a);
        f1 = tc_lastf();
        r4 = tc_lastr4();
        r6 = r4 - r26;
        r3 = r3 - (r27 + (r26 > r4));
        r3 = (r3 << 3u) & 0xfffffff8u;
        r3 = (r3 & 0xfffffff8u) | ((r6 >> 0x1du) & 7u);
        a.r[0] = r3;
        a.r[1] = (r6 << 3u) & 0xfffffff8u;
        a.r[2] = 0u;
        a.r[3] = (ppc_mulhwu(0x431bde83u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 0xfu) & 0x1ffffu;
        r3 = tc_call(0x80255b5cu, &a);
        f1 = tc_lastf();
        r0 = r3 ^ 0x80000000u;
    } while ((0u - (r0 - (r0 + (((tc_lastr4() < 2u) - 0x80000000u) > r0)))) != 0u);
    if (rd32(0x80570b20u) != 1u || ((rd32(0xcd8000c8u) >> 0xfu) & 1u) == 0u) {
        if (rd32(0x80570b20u) != 0u) {
            wr32(0xcd8000c0u, rd32(0xcd8000c0u) & 0xffff7fffu);
        } else {
            wr32(0xcd8000c0u, (rd32(0xcd8000c0u) & 0xffff7fffu) | 0x8000u);
        }
        wr32(0xcd8000c4u, (rd32(0xcd8000c4u) & 0xffff7fffu) | 0xc000u);
        wr32(0xcd8000c0u, rd32(0xcd8000c0u) & 0xffffbfffu);
    }
    return;
}
