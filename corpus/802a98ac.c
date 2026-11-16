#include "tc_rt.h"

void fn_802a98ac(u32 param_1)
{
    u32 lr = 0, r0 = 0, r1 = 0, r3 = 0, r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r12 = 0;
    u32 r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r1 = 0x817fe000u;
    lr = 0x817ff000u;
    r3 = param_1;
    for (;;) {
        wr32(r1 - 0x10u, r1);
        r1 = r1 - 0x10u;
        wr32(r1 + 0x14u, lr);
        wr32(r1 + 0xcu, 0u);
        wr32(r1 + 8u, r30);
        r30 = r3;
        wr8(r3, 0u);
        r3 = r3 + 0x10u;
        a.r[0] = r3;
        r3 = tc_call(0x8028d290u, &a);
        f1 = tc_lastf();
        r3 = rd32(r30 + 0x50u);
        if (r3 != 0u) {
            a.r[0] = r3;
            r3 = tc_call(0x8028a35cu, &a);
            f1 = tc_lastf();
            wr32(r30 + 0x50u, 0u);
        }
        a.r[0] = r30 + 0x2au;
        f1 = tc_callf(0x80299fa8u, &a);
        r3 = tc_lastr();
        r3 = rd32(r30 + 8u);
        while (r3 != 0u) {
            a.r[0] = r3;
            f1 = tc_callf(0x802aace4u, &a);
            r3 = tc_lastr();
            r3 = rd32(r30 + 8u);
        }
        if ((rd32(r30 + 4u) - 4u) <= 1u) {
            a.r[0] = r30 + 0x2au;
            f1 = tc_callf(0x80293524u, &a);
            r3 = tc_lastr();
        }
        while (rd32(r30 + 0x44u) != 0u) {
            a.r[0] = r30 + 0x44u;
            r3 = tc_call(0x8028a9f8u, &a);
            f1 = tc_lastf();
            a.r[0] = r3;
            f1 = tc_callf(0x8028a35cu, &a);
            r3 = tc_lastr();
        }
        r3 = (u32)rd16(0x805411d8u);
        if (r3 >= 1u) {
            wr16(0x805411d8u, (u16)(r3 - 1u));
        }
        r0 = (u32)rd16(r30 + 0x38u);
        r0 = (u32)rd16(0x80540a24u) + r0;
        wr16(0x80540a24u, (u16)r0);
        a.f[0] = f1;
        a.f[1] = 0.0;
        a.f[2] = 0.0;
        a.f[3] = 0.0;
        a.f[4] = 0.0;
        a.f[5] = 0.0;
        a.f[6] = 0.0;
        a.f[7] = 0.0;
        f1 = tc_callf(0x802a80d0u, &a);
        r3 = tc_lastr();
        r4 = tc_lastr4();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
        r12 = rd32(r30 + 0x54u);
        if (r12 == 0u) break;
        r3 = 1u;
        wr32(r30 + 0x54u, 0u);
        lr = 0x802a9994u;
        if (r12 != 0x802a98acu) {
            a.r[0] = 1u;
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
            break;
        }
    }
    r0 = rd32(r1 + 0x14u);
    r31 = rd32(r1 + 0xcu);
    r30 = rd32(r1 + 8u);
    return;
}
