#include "tc_rt.h"

void fn_8027c74c(u32 param_r3)
{
    u32 r3 = 0, r4 = 0, r22 = 0, r23 = 0, r24 = 0, r25 = 0, r26 = 0, r27 = 0, r28 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r25 = (param_r3 << 2u) & 0xfffffffcu;
    r30 = rd32(r25 - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r29 = (u32)rd8(r30 + 0x8cdu);
    r31 = r3;
    r28 = (u32)rd8(r30 + 0x8c1u);
    r3 = tc_call(0x80286d58u, &a);
    r26 = r3;
    r3 = tc_call(0x8022c2b0u, &a);
    r24 = (u32)(s8)((u32)rd8(r30 + 0x161u) - (u32)rd8(r30 + 0x160u));
    if ((s32)r24 < 0) {
        r24 = (u32)(s8)(r24 + rd32(r30 + 0x168u));
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    r23 = rd32(r25 - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r22 = rd32(r23 + 0x8bcu);
    r23 = (u32)rd8(r23 + 0x8c3u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if (r22 != 0xffffffffu) {
        a.r[0] = (u32)(s8)r23;
        (void)tc_call(0x802894b4u, &a);
    }
    r22 = rd32(r25 - 0x7faf46b0u);
    r3 = tc_call(0x8022c2b0u, &a);
    r23 = rd32(r22 + 0x8bcu);
    r22 = (u32)rd8(r22 + 0x8c3u);
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    if (r23 == 0xffffffffu) {
        r27 = 0u;
    } else {
        a.r[0] = (u32)(s8)r22;
        r3 = tc_call(0x80289510u, &a);
        r27 = r3;
    }
    r22 = (u32)rd8(r30 + 0x8cfu);
    r3 = tc_call(0x8028956cu, &a);
    r30 = r3;
    a.r[0] = r31;
    (void)tc_call(0x8022c2d8u, &a);
    if (r29 == 0u && (r27 & 0xffffu) <= 3u) {
        r4 = r26 & 0xffu;
    }
    return;
}
