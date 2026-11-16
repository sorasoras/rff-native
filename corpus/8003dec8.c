#include "tc_rt.h"

void fn_8003dec8(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r0 = rd32(param_1 + 4u);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r0;
    }
    wr32(param_1 + 4u, r0);
    r30 = 0u;
    r31 = 0u;
    while ((s32)r30 < (s32)(s16)rd16(param_1 + 2u)) {
        a.r[0] = rd32(param_1 + 4u) + r31;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x8003de54u, &a);
        r31 = r31 + 0x28u;
        r30 = r30 + 1u;
    }
    a.r[0] = (u32)(s16)rd16(param_1);
    r3 = tc_call(0x8003dcb0u, &a);
    r0 = rd32(param_1 + 0xcu);
    wr32(param_1 + 8u, r3);
    if (r0 == 0u) {
        r0 = 0u;
    } else {
        r0 = (u32)param_2 + r0;
    }
    wr32(param_1 + 0xcu, r0);
    return;
}
