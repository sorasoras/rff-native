#include "tc_rt.h"

s32 fn_8003802c(u32 param_1, u32 param_2)
{
    u32 ca = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    r7 = rd32(param_1);
    r4 = rd32(param_2);
    r31 = r7 + 0x10u;
    r3 = rd32(rd32(r7) + 0xcu);
    if ((r4 & 1u) != 0u && (r4 & 2u) == 0u) {
        r6 = rd32(r7 + 8u);
        r0 = (rd32(r7 + 4u) * r6) + 0x3fffu;
        ca = ((s32)r0 < 0) && ((r0 & 0x3fffu) != 0u);
        r0 = (u32)((s32)r0 >> 14);
        a.r[0] = r31;
        a.r[1] = r7 + 0x14u;
        a.r[2] = (u32)((u64)r0 + (u64)ca);
        a.r[3] = r6;
        (void)tc_call(0x80037a2cu, &a);
    } else {
        r6 = rd32(r7 + 8u);
        r3 = r3 - 1u;
        r0 = rd32(r7 + 4u) * r6;
        r6 = r6 + 1u;
        r0 = (r3 * 0x1200u) + 0x10000u + r0 - 0x5f61u;
        a.r[0] = r31;
        a.r[1] = r7 + 0x14u;
        a.r[2] = (r0 >> 0xeu) & 0x3ffffu;
        a.r[3] = r6;
        (void)tc_call(0x80037a2cu, &a);
    }
    return (s32)rd32(r31);
}
