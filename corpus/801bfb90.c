#include "tc_rt.h"

void fn_801bfb90(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    if ((u32)param_2 != 0u) {
        a.r[0] = 0u;
        r3 = tc_call(0x801b3a7cu, &a);
        a.r[0] = r3;
        a.r[1] = 0x210u;
        r3 = tc_call(0x801b39d8u, &a);
        r31 = r3;
        if (r3 != 0u) {
            a.r[0] = r3;
            (void)tc_call(0x801c0fa8u, &a);
        }
        wr32((u32)param_1 + 0x38u, r31);
        a.r[0] = r31;
        (void)tc_call(0x801c1080u, &a);
    } else {
        wr32((u32)param_1 + 0x38u, 0u);
    }
    wr32((u32)param_1 + 0x40u, 4u);
    wr32((u32)param_1 + 0x44u, 0xau);
    wr32((u32)param_1 + 0x19cu, 0xffffffffu);
    wr32((u32)param_1 + 0x1a0u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801bffacu, &a);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801c09f4u, &a);
    return;
}
