#include "tc_rt.h"

void fn_80263fec(void)
{
    u32 r3 = tc_argr(0u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u);
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    wr32(0x817fdff0u, 0u);
    do {
    } while (((rd32(0xcd00680cu) & 1u) == 1u || (rd32(0xcd006820u) & 1u) == 1u) || (rd32(0xcd006834u) & 1u) == 1u);
    a.r[0] = 0x7f8000u;
    r3 = tc_call(0x8022c640u, &a);
    f1 = tc_lastf();
    wr32(0xcd006800u, 0u);
    wr32(0xcd006814u, 0u);
    wr32(0xcd006828u, 0u);
    wr32(0xcd006800u, 0x2000u);
    a.r[0] = 9u;
    a.r[1] = 0x80263c4cu;
    r3 = tc_call(0x8022c2fcu, &a);
    f1 = tc_lastf();
    a.r[0] = 0xau;
    a.r[1] = 0x80263d04u;
    r3 = tc_call(0x8022c2fcu, &a);
    f1 = tc_lastf();
    a.r[0] = 0xbu;
    a.r[1] = 0x80263f1cu;
    r3 = tc_call(0x8022c2fcu, &a);
    f1 = tc_lastf();
    a.r[0] = 0xcu;
    a.r[1] = 0x80263c4cu;
    r3 = tc_call(0x8022c2fcu, &a);
    f1 = tc_lastf();
    a.r[0] = 0xdu;
    a.r[1] = 0x80263d04u;
    r3 = tc_call(0x8022c2fcu, &a);
    f1 = tc_lastf();
    a.r[0] = 0xeu;
    a.r[1] = 0x80263f1cu;
    r3 = tc_call(0x8022c2fcu, &a);
    f1 = tc_lastf();
    a.r[0] = 0xfu;
    a.r[1] = 0x80263c4cu;
    r3 = tc_call(0x8022c2fcu, &a);
    f1 = tc_lastf();
    a.r[0] = 0x10u;
    a.r[1] = 0x80263d04u;
    r3 = tc_call(0x8022c2fcu, &a);
    f1 = tc_lastf();
    a.r[0] = 0u;
    a.r[1] = 2u;
    a.r[2] = 0x805719e8u;
    r3 = tc_call(0x802643acu, &a);
    f1 = tc_lastf();
    if (rd32(0x80571448u) != 0u) {
        wr32(0x800030c4u, 0u);
        wr32(0x800030c0u, 0u);
        wr32(0x80500a90u, 0u);
        wr32(0x80500a50u, 0u);
        a.r[0] = 0u;
        r3 = tc_call(0x802636ccu, &a);
        f1 = tc_lastf();
        a.r[0] = 1u;
        f1 = tc_callf(0x802636ccu, &a);
        r3 = tc_lastr();
        r5 = tc_junkr(5u);
        r6 = tc_junkr(6u);
        r7 = tc_junkr(7u);
        r8 = tc_junkr(8u);
        r9 = tc_junkr(9u);
        r10 = tc_junkr(0xau);
    } else {
        a.r[0] = 0u;
        a.r[1] = 0u;
        a.r[2] = 0x817fdfe8u;
        r3 = tc_call(0x802643acu, &a);
        f1 = tc_lastf();
        if (r3 != 0u && (rd32(0x817fdfe8u) - 0x7010000u) == 0u) {
            a.r[0] = 1u;
            a.r[1] = 0u;
            f1 = tc_callf(0x802648d0u, &a);
            r3 = tc_lastr();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
        } else {
            a.r[0] = 1u;
            a.r[1] = 0u;
            a.r[2] = 0x817fdfe8u;
            r3 = tc_call(0x802643acu, &a);
            f1 = tc_lastf();
            r5 = tc_junkr(5u);
            r6 = tc_junkr(6u);
            r7 = tc_junkr(7u);
            r8 = tc_junkr(8u);
            r9 = tc_junkr(9u);
            r10 = tc_junkr(0xau);
            if (r3 != 0u && (rd32(0x817fdfe8u) - 0x7010000u) == 0u) {
                a.r[0] = 0u;
                a.r[1] = 2u;
                f1 = tc_callf(0x802648d0u, &a);
                r3 = tc_lastr();
                r5 = tc_junkr(5u);
                r6 = tc_junkr(6u);
                r7 = tc_junkr(7u);
                r8 = tc_junkr(8u);
                r9 = tc_junkr(9u);
                r10 = tc_junkr(0xau);
            }
        }
    }
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = rd32(0x80570c10u);
    a.r[2] = r5;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    r3 = tc_call(0x80226610u, &a);
    f1 = tc_lastf();
    return;
}
