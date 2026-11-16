#include "tc_rt.h"

s32 fn_80126278(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    r30 = 0u;
    r29 = 0u;
    while ((s32)r29 < (s32)rd32((u32)param_1 + 0xcu)) {
        r4 = rd32(rd32((u32)param_1 + 0x2cu) + r31);
        r3 = (u32)rd16(r4 + 0xbcu);
        r4 = (u32)rd8(r4 + 0xbfu);
        a.r[0] = r3;
        a.r[1] = r4;
        r3 = tc_call(0x800cd6ccu, &a);
        r5 = r3 & 0xffffu;
        r29 = r29 + 1u;
        r3 = rd32(rd32((u32)param_1 + 0x2cu) + r31);
        r31 = r31 + 4u;
        r30 = r30 + (r5 * (u32)rd8(r3 + 0xbeu));
    }
    return (s32)r30;
}
