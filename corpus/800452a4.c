#include "tc_rt.h"

void fn_800452a4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)rd16((u32)param_1 + 0x1ecu);
    a.r[1] = (u32)rd16((u32)param_1 + 0x1eeu);
    a.r[2] = rd32(((rd32((u32)param_1 + 0x194u) << 2u) & 0xfffffffcu) - 0x7fcb07a8u);
    a.r[3] = 0u;
    (void)tc_call(0x8004b820u, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = (u32)rd16((u32)param_1 + 0x1ecu);
    a.r[3] = (u32)rd16((u32)param_1 + 0x1eeu);
    (void)tc_call(0x8004b830u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1e8u);
    a.r[1] = 1u;
    a.r[2] = (u32)rd8((u32)param_1 + 0x1f0u);
    (void)tc_call(0x8004b844u, &a);
    (void)tc_call(0x8004b8acu, &a);
    return;
}
