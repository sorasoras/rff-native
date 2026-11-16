#include "tc_rt.h"

void fn_80278c28(void)
{
    u32 r0 = 0, r3 = tc_argr(0u), r4 = tc_argr(1u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r24 = 0, r25 = 0, r26 = 0, r27 = 0;
    u32 r28 = 0, r29 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    wr32(0xcd0000c0u, rd32(0xcd0000c0u) | 0x100u);
    a.r[0] = r3;
    r3 = tc_call(0x8022c2d8u, &a);
    f1 = tc_lastf();
    wr8(0x8050c960u, 0xffu);
    wr8(0x8050c961u, 0xffu);
    wr8(0x8050c962u, 0xffu);
    wr8(0x8050c963u, 0xffu);
    wr8(0x8050c964u, 0xffu);
    wr8(0x8050c965u, 0xffu);
    wr8(0x8050c966u, 0xffu);
    wr8(0x8050c967u, 0xffu);
    wr8(0x8050c968u, 0xffu);
    wr8(0x8050c969u, 0xffu);
    wr8(0x8050c96au, 0xffu);
    wr8(0x8050c96bu, 0xffu);
    wr8(0x8050c96cu, 0xffu);
    wr8(0x8050c96du, 0xffu);
    wr8(0x8050c96eu, 0xffu);
    wr8(0x8050c96fu, 0xffu);
    r3 = tc_call(0x80284b24u, &a);
    f1 = tc_lastf();
    r29 = 0x8050c980u;
    r28 = 0x8050b950u;
    r24 = 0u;
    r27 = 0x80571af0u;
    r26 = 0x80571ad8u;
    r25 = 0x80571adcu;
    do {
        wr32(r28, r29);
        wr8(r27, 0u);
        wr32(rd32(r28) + 0x8a4u, 0u);
        a.r[0] = r24;
        r3 = tc_call(0x802789b4u, &a);
        f1 = tc_lastf();
        a.r[0] = r29 + 0x8e4u;
        r3 = tc_call(0x8022efd4u, &a);
        f1 = tc_lastf();
        r24 = r24 + 1u;
        wr8(r26, 0u);
        r28 = r28 + 4u;
        wr8(r25, 0u);
        r27 = r27 + 1u;
        r26 = r26 + 1u;
        r25 = r25 + 1u;
        r29 = r29 + 0x9a0u;
    } while ((s32)r24 < 4);
    wr8(0x80571b02u, 5u);
    r3 = tc_call(0x80226620u, &a);
    f1 = tc_lastf();
    wr32(0x80571af4u, r3);
    r3 = tc_call(0x802266a4u, &a);
    f1 = tc_lastf();
    wr8(0x80571af8u, (u8)r3);
    r3 = tc_call(0x802752b4u, &a);
    f1 = tc_lastf();
    r0 = r3 & 0xffu;
    if (r0 < 1u) {
        r0 = 1u;
    }
    if (r0 > 5u) {
        r0 = 5u;
    }
    wr8(0x80571b01u, (u8)r0);
    r3 = tc_call(0x80275378u, &a);
    f1 = tc_lastf();
    r3 = r3 & 0xffu;
    wr8(0x80571b00u, (u8)((ppc_cntlzw(r3 - 1u) >> 5u) & 0xffu));
    r3 = tc_call(0x8027531cu, &a);
    f1 = tc_lastf();
    r3 = r3 & 0xffu;
    wr32(0x80571afcu, (ppc_cntlzw(r3 - 1u) >> 5u) & 0x7ffffffu);
    r3 = tc_call(0x802753ccu, &a);
    f1 = tc_lastf();
    r7 = tc_junkr(7u);
    r8 = tc_junkr(8u);
    r9 = tc_junkr(9u);
    r10 = tc_junkr(0xau);
    r6 = r3;
    if ((r3 & 0xffu) == 0u) {
        r6 = 0u;
    }
    if ((r3 & 0xffu) >= 0x7fu) {
        r6 = 0x7fu;
    }
    wr8(0x80571afau, (u8)r6);
    r3 = rd32(0x80570db0u);
    wr16(0x80571ad2u, 0u);
    wr8(0x80571ad4u, 0u);
    wr16(0x80571ad6u, 0u);
    wr8(0x80571aedu, 0u);
    wr8(0x80571af9u, 0u);
    wr8(0x80571aeeu, 1u);
    wr8(0x80571aecu, 0xffu);
    a.f[0] = f1;
    a.f[1] = 0.0;
    a.f[2] = 0.0;
    a.f[3] = 0.0;
    a.f[4] = 0.0;
    a.f[5] = 0.0;
    a.f[6] = 0.0;
    a.f[7] = 0.0;
    a.r[0] = r3;
    a.r[2] = 0u;
    a.r[3] = r6;
    a.r[4] = r7;
    a.r[5] = r8;
    a.r[6] = r9;
    a.r[7] = r10;
    r3 = tc_call(0x80226610u, &a);
    f1 = tc_lastf();
    a.r[0] = 0x8050b920u;
    r3 = tc_call(0x8022671cu, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x8023029cu, &a);
    f1 = tc_lastf();
    r4 = tc_lastr4();
    a.r[0] = 0x8050b920u;
    a.r[1] = r4;
    a.r[2] = r3;
    a.r[3] = r4;
    a.r[4] = 0u;
    a.r[5] = (ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 6u) & 0x3ffffffu;
    a.r[6] = 0x80278994u;
    r3 = tc_call(0x802269ecu, &a);
    f1 = tc_lastf();
    return;
}
