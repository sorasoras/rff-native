#include "tc_rt.h"

void fn_8028c200(void)
{
    u32 r3 = 0, r28 = 0, r29 = 0;
    TcArgs a = {0};
    do {
        a.r[0] = (u32)rd8(0x80539bdcu);
        r3 = tc_call(0x8028a274u, &a);
        r29 = r3;
    } while (r3 == 0u);
    wr16(r3, 0x1000u);
    r28 = (r3 + 0x27u) & 0xffffffe0u;
    wr16(r3 + 2u, 0u);
    wr16(r3 + 4u, (u16)(r28 - (r3 + 8u)));
    a.r[0] = r3;
    r3 = tc_call(0x8028a4ccu, &a);
    r3 = r3 & 0xffffu;
    a.r[0] = rd32(0x80539bc0u);
    a.r[1] = (u32)rd8(0x80539bd2u);
    a.r[2] = r3 - 0x28u - (u32)rd16(r29 + 4u);
    a.r[3] = r28;
    a.r[4] = 0x8028bf50u;
    a.r[5] = r29;
    r3 = tc_call(0x802b7b34u, &a);
    if (r3 != 0u) {
        a.r[0] = r29;
        (void)tc_call(0x8028a35cu, &a);
    }
    wr8(0x80539bebu, 1u);
    return;
}
