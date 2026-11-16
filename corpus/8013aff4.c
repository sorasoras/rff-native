#include "tc_rt.h"

void fn_8013aff4(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32((u32)param_1 + 0x2cu);
    if (r0 != 0u) {
        a.r[0] = r0;
        (void)tc_call(0x800fe9bcu, &a);
    }
    r7 = rd32(0x8033a37cu);
    r6 = rd32(0x8033a380u);
    r0 = (rd32((u32)param_1 + 0x80u) << 2u) & 0xfffffffcu;
    r5 = rd32(0x8033a384u);
    wr32(0x817fdfe8u, rd32(0x8033a378u));
    r3 = rd32((u32)param_1 + 0x84u);
    wr32(0x817fdfecu, r7);
    wr32(0x817fdff0u, r6);
    wr32(0x817fdff4u, r5);
    a.r[0] = r3;
    a.r[1] = rd32(r0 - 0x7e802018u);
    (void)tc_call(0x801ed110u, &a);
    a.r[0] = rd32((u32)param_1 + 0x84u);
    a.r[1] = rd32((u32)param_1 + 0x88u);
    (void)tc_call(0x801ec6bcu, &a);
    return;
}
