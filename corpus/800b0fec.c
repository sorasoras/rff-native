#include "tc_rt.h"

void fn_800b0fec(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu);
    r5 = rd32((u32)param_1 + 0x1628u);
    wr32((u32)param_1 + 0x1628u, r5 ^ (r5 & ((((u32)param_2 & 0x20u) != 0u) ? 0u : (1u << ((u32)param_2 & 0x1fu)))));
    r3 = rd32(r31 + 0x164cu);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80157e6cu, &a);
        wr32(r31 + 0x164cu, 0u);
    }
    return;
}
