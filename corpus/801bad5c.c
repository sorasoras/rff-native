#include "tc_rt.h"

void fn_801bad5c(s32 param_1)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801ba998u, &a);
    r30 = r3;
    a.r[0] = r3;
    a.r[1] = rd32(r3 + 0x3ecu);
    a.r[2] = 0u;
    (void)tc_call(0x80119fb0u, &a);
    wr32(r30 + 0x3e8u, 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801ba998u, &a);
    r30 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = rd32(r3 + 0x3e8u);
    (void)tc_call(0x80119fb0u, &a);
    wr32(r30 + 0x3ecu, 0u);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
    a.r[1] = (u32)rd16(rd32(rd32(rd32((u32)param_1 + 0x28u) + 0x2cu)) + 0xbcu);
    (void)tc_call(0x8014b838u, &a);
    return;
}
