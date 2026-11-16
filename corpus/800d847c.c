#include "tc_rt.h"

void fn_800d847c(void)
{
    u32 lr = 0, r0 = 0, r1 = 0, r3 = tc_argr(0u), r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r12 = 0;
    u32 r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    for (;;) {
        wr32(r1 - 0x10u, r1);
        r1 = r1 - 0x10u;
        wr32(r1 + 0x14u, lr);
        wr32(r1 + 0xcu, r31);
        r31 = 0x804b1df8u;
        wr32(r1 + 8u, r30);
        r30 = 0u;
        do {
            a.r[0] = r31;
            r3 = tc_call(0x80157e6cu, &a);
            f1 = tc_lastf();
            r30 = r30 + 1u;
            r31 = r31 + 0x54u;
        } while ((s32)r30 < 320);
        r3 = tc_call(0x80311554u, &a);
        f1 = tc_lastf();
        r30 = r3;
        r31 = 0u;
        do {
            a.r[0] = r30;
            a.r[1] = r31;
            r3 = tc_call(0x80311838u, &a);
            f1 = tc_lastf();
            a.r[0] = r30;
            a.r[1] = r31;
            r3 = tc_call(0x80311930u, &a);
            f1 = tc_lastf();
            a.r[0] = r30;
            a.r[1] = r31;
            f1 = tc_callf(0x803119c0u, &a);
            r3 = tc_lastr();
            r4 = tc_lastr4();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            r31 = r31 + 1u;
        } while ((s32)r31 < 2);
        r3 = rd32(r30);
        r12 = rd32(r3);
        r12 = rd32(r12 + 0xcu);
        lr = 0x800d8504u;
        if (r12 != 0x800d847cu) {
            a.r[0] = r3;
            a.r[1] = r4;
            a.r[2] = r5;
            a.r[3] = r6;
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
            r3 = tc_call(r12, &a);
            f1 = tc_lastf();
            r0 = rd32(r1 + 0x14u);
            r31 = rd32(r1 + 0xcu);
            r30 = rd32(r1 + 8u);
            return;
        }
    }
}
