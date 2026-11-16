#include "tc_rt.h"

void fn_80268ed0(void)
{
    u32 r0 = 0, r1 = 0, r2 = 0, r3 = tc_argr(0u), r4 = tc_argr(1u), r5 = tc_argr(2u), r6 = tc_argr(3u), r7 = tc_argr(4u), r8 = tc_argr(5u), r9 = tc_argr(6u), r10 = tc_argr(7u), r11 = tc_argr(8u);
    u32 r12 = tc_argr(9u), r13 = 0, r14 = 0, r15 = 0, r16 = 0, r17 = 0, r18 = 0, r19 = 0, r20 = 0, r21 = 0, r22 = 0, r23 = 0;
    u32 r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r0 = rd32(0x805027a0u);
    r0 = rd32(0x80502794u);
    r0 = rd32(0x80502798u);
    r0 = rd32(0x8050279cu);
    r0 = rd32(0x805027a8u);
    r0 = rd32(0x805027a4u);
    r3 = rd32(0x80502720u);
    r4 = rd32(0x80502724u);
    r5 = rd32(0x80502728u);
    r6 = rd32(0x8050272cu);
    r7 = rd32(0x80502730u);
    r8 = rd32(0x80502734u);
    r9 = rd32(0x80502738u);
    r10 = rd32(0x8050273cu);
    r11 = rd32(0x80502740u);
    r12 = rd32(0x80502744u);
    r13 = rd32(0x80502748u);
    r14 = rd32(0x8050274cu);
    r15 = rd32(0x80502750u);
    r16 = rd32(0x80502754u);
    r17 = rd32(0x80502758u);
    r18 = rd32(0x8050275cu);
    r19 = rd32(0x80502760u);
    r20 = rd32(0x80502764u);
    r21 = rd32(0x80502768u);
    r22 = rd32(0x8050276cu);
    r23 = rd32(0x80502770u);
    r24 = rd32(0x80502774u);
    r25 = rd32(0x80502778u);
    r26 = rd32(0x8050277cu);
    r27 = rd32(0x80502780u);
    r28 = rd32(0x80502784u);
    r29 = rd32(0x80502788u);
    r30 = rd32(0x8050278cu);
    r31 = rd32(0x80502790u);
    r0 = rd32(0x80502714u);
    r1 = rd32(0x80502718u);
    r2 = rd32(0x8050271cu);
    r3 = tc_call(0x80269518u, &a);
    f1 = tc_lastf();
    return;
}
