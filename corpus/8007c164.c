#include "tc_rt.h"

void fn_8007c164(u32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(rd32((u32)param_2 + 0x38u) + 0x1cu);
    if ((u32)rd8(0x805706f8u) != 0u) {
        a.r[0] = param_1;
        a.r[1] = r31;
        r3 = tc_call(0x8007b7ccu, &a);
        if (r3 == 0u) {
            return;
        }
    }
    r3 = tc_call(0x800309c8u, &a);
    r30 = r3;
    r3 = tc_call(0x800309d4u, &a);
    r29 = r3;
    a.r[0] = param_1;
    a.r[1] = (u32)param_2;
    a.r[2] = r31;
    (void)tc_call(0x80031620u, &a);
    r4 = rd32((u32)param_2 + 0x44u);
    if (r4 != 0u) {
        a.r[0] = 0x800dadd0u;
        a.r[1] = r4;
        (void)tc_call(0x8003dd7cu, &a);
    }
    a.r[0] = r31;
    a.r[1] = r30;
    a.r[2] = r29;
    (void)tc_call(0x8003a22cu, &a);
    if (rd32((u32)param_2 + 0x44u) != 0u) {
        (void)tc_call(0x80040128u, &a);
        a.r[0] = 0u;
        a.r[1] = 0u;
        (void)tc_call(0x8003dd7cu, &a);
    }
    return;
}
