#include "tc_rt.h"

void fn_801cad04(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    if (rd32((u32)param_1 + 8u) != (u32)param_2) {
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x801cadb0u, &a);
        wr32((u32)param_1 + 8u, (u32)param_2);
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 0u;
        r3 = tc_call(0x801cb5d0u, &a);
        r31 = r3;
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 1u;
        r3 = tc_call(0x801cb5d0u, &a);
        r30 = r3;
        a.r[0] = (u32)param_1;
        a.r[1] = (u32)param_2;
        a.r[2] = 2u;
        r3 = tc_call(0x801cb5d0u, &a);
        a.r[0] = 0x804bb7d0u;
        a.r[1] = r31;
        a.r[2] = r30;
        a.r[3] = r3;
        (void)tc_call(0x801cbae8u, &a);
    }
    return;
}
