#include "tc_rt.h"

void fn_8000403c(void)
{
    u32 ctr = 0, r3 = tc_argr(0u), r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r14 = 0, r15 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = tc_call(0x800041a8u, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x800042e0u, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x80004238u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r8 = tc_junkr(8u);
    r9 = tc_junkr(9u);
    r10 = tc_junkr(0xau);
    wr32(0x80000044u, 0u);
    r6 = rd32(0x800000f4u);
    do {
        if (r6 == 0u) {
            if (rd32(0x80000034u) == 0u) break;
            r7 = rd32(0x800030e8u);
        } else {
            r7 = rd32(r6 + 0xcu);
        }
        r5 = 0u;
        if (r7 != 2u) {
            r5 = 1u;
            if (r7 != 3u) {
                if (r7 != 4u) break;
                r3 = tc_call(0x80004028u, &a);
                f1 = tc_lastf();
                break;
            }
        }
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = 0x8026aab8u;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        r3 = tc_call(0x8026aab8u, &a);
        f1 = tc_lastf();
    } while (0);
    r5 = rd32(0x800000f4u);
    if (r5 != 0u) {
        r6 = rd32(r5 + 8u);
        if (r6 != 0u) {
            r6 = r5 + r6;
            r14 = rd32(r6);
            if (r14 != 0u) {
                r15 = r6 + 4u;
                ctr = r14;
                do {
                    r6 = r6 + 4u;
                    wr32(r6, rd32(r6) + r5);
                    ctr = ctr - 1u;
                } while (ctr != 0u);
                wr32(0x80000034u, r15 & 0xffffffe0u);
                wr32(0x80003110u, r15 & 0xffffffe0u);
            }
        }
    }
    r3 = tc_call(0x802251ccu, &a);
    f1 = tc_lastf();
    f1 = tc_callf(0x80225d74u, &a);
    r3 = tc_lastr();
    r6 = tc_junkr(6u);
    r7 = tc_junkr(7u);
    r8 = tc_junkr(8u);
    r9 = tc_junkr(9u);
    r10 = tc_junkr(0xau);
    r3 = (u32)rd16(0x800030e6u);
    do {
        if ((r3 & 0x8000u) != 0u) {
            r3 = r3 & 0x7fffu;
            if (r3 != 1u) break;
        }
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        r3 = tc_call(0x80004000u, &a);
        f1 = tc_lastf();
    } while (0);
    r3 = tc_call(0x80004034u, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    r5 = tc_junkr(5u);
    r6 = tc_junkr(6u);
    r7 = tc_junkr(7u);
    r8 = tc_junkr(8u);
    r9 = tc_junkr(9u);
    r10 = tc_junkr(0xau);
    if (r3 == 1u) {
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r5;
        a.r[3] = r6;
        a.r[4] = r7;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        r3 = tc_call(0x8026ab50u, &a);
        f1 = tc_lastf();
    }
    r3 = tc_call(0x8023368cu, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x8003dc84u, &a);
    f1 = tc_lastf();
    /* the oracle's tail: the mock returns to the poisoned LR (0x800041a4, inside the body), which
       re-executes the tail branch - the loop the original runs forever (the trace = these calls) */
    for (;;) {
        r3 = tc_call(0x802336f4u, &a);
        f1 = tc_lastf();
    }
}
