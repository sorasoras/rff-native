#include "tc_rt.h"

void fn_80048ca0(void)
{
    u32 r0 = 0, r3 = tc_argr(0u), r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r24 = 0, r25 = 0, r26 = 0, r27 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r24 = 0u;
    r26 = rd32(0x803c1dfcu);
    r25 = rd32(0x803c1e00u);
    for (;;) {
        r3 = tc_call(0x80048dc0u, &a);
        f1 = tc_lastf();
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        r27 = r3;
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        a.r[0] = 0x803c1d40u;
        a.r[1] = rd32(r3);
        a.r[2] = r25;
        a.r[3] = r26;
        a.r[4] = 2u;
        a.r[5] = r8;
        a.r[6] = r9;
        a.r[7] = r10;
        r3 = tc_call(0x80234ea0u, &a);
        f1 = tc_lastf();
        if (r3 != r25) {
            if (r3 == 0xffffffffu) {
                wr32(0x803c1de8u, 0xffffffffu);
            }
            if (r24 == 0u) {
                a.r[0] = 0u;
                r3 = tc_call(0x80046720u, &a);
                f1 = tc_lastf();
            }
            a.r[0] = 0x803c2830u;
            r3 = tc_call(0x8022fe50u, &a);
            f1 = tc_lastf();
        }
        wr32(r27 + 4u, r24);
        a.r[0] = r27;
        r3 = tc_call(0x80048dacu, &a);
        f1 = tc_lastf();
        r0 = rd32(0x803c1e04u);
        r26 = r26 + r25;
        r6 = rd32(0x803c1d90u);
        r4 = r24 + r0;
        r5 = rd32(r27);
        r25 = rd32(r5);
        if ((r4 - (ppc_divwu(r4, r6) * r6)) == (r6 - 1u)) {
            if (((u32)rd8(0x803c1de6u) & 1u) != 0u) {
                r26 = rd32(0x803c1da4u);
            } else {
                a.r[0] = 0x803c2830u;
                r3 = tc_call(0x8022fe50u, &a);
                f1 = tc_lastf();
            }
        }
        r24 = r24 + 1u;
    }
}
