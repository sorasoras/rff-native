#include "tc_rt.h"

s32 fn_803119c0(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r28 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fcfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    r29 = 0u;
    wr32(0x817fdff0u, 0u);
    r3 = rd32((u32)param_1 + 0xc018u) + ((u32)param_2 * 0x1cu);
    a.r[0] = r3;
    a.r[1] = 0x817fcfe8u;
    a.r[2] = (u32)rd16(r3 + 8u);
    r3 = tc_call(0x803200acu, &a);
    r31 = r3 & 0xffffu;
    r28 = 0u;
    while ((r28 & 0xffffu) < r31) {
        a.r[0] = rd32(((r28 << 2u) & 0x3fffcu) - 0x7e803018u);
        r3 = tc_call(0x80310d14u, &a);
        r29 = r29 + r3;
        r28 = r28 + 1u;
    }
    return (s32)r29;
}
