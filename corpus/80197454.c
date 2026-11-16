#include "tc_rt.h"

void fn_80197454(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r8 = 0u;
    r6 = 0u;
    r7 = rd32(param_1 + 0x10u);
    while ((s32)r8 < (s32)rd32(param_1 + 0xcu)) {
        r8 = r8 + 1u;
        r4 = rd32(rd32(param_1 + 0x2cu) + r6);
        r6 = r6 + 4u;
        wr32(r4 + 0x54u, 0u);
    }
    r30 = (r7 << 2u) & 0xfffffffcu;
    r29 = 0u;
    r31 = 0u;
    while ((s32)r29 < (s32)rd32(param_1)) {
        a.r[0] = param_1;
        a.r[1] = r29;
        r3 = tc_call(0x801894d8u, &a);
        r0 = r31 + r30;
        r31 = r31 + 4u;
        r29 = r29 + 1u;
        wr32(rd32(rd32(param_1 + 0x2cu) + r0) + 0x54u, r3);
    }
    return;
}
