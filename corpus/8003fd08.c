#include "tc_rt.h"

void fn_8003fd08(s32 param_1, u32 param_2)
{
    u32 r30 = 0, r31 = 0;
    TcArgs a = {0};
    (void)tc_call(0x8004b024u, &a);
    r31 = rd32((u32)param_1 + 0x18u);
    r30 = 0u;
    while ((s32)r30 < (s32)(s8)rd8((u32)param_1 + 0x17u)) {
        if ((u32)(s16)rd16(r31) == 0u) {
            a.r[0] = (u32)param_1;
            a.r[1] = r31;
            a.r[2] = param_2;
            (void)tc_call(0x8003fa7cu, &a);
        }
        r30 = r30 + 1u;
        r31 = r31 + 0x10u;
    }
    (void)tc_call(0x8004b0d0u, &a);
    return;
}
