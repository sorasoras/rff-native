#include "tc_rt.h"

void fn_801be38c(s32 param_1)
{
    u32 r3 = 0, r30 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801be2f4u, &a);
    r30 = r3;
    a.r[0] = r3;
    a.r[1] = rd32(r3 + 0x3ecu);
    a.r[2] = 0u;
    (void)tc_call(0x80119fb0u, &a);
    wr32(r30 + 0x3e8u, 0u);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801be2f4u, &a);
    r30 = r3;
    a.r[0] = r3;
    a.r[1] = 0u;
    a.r[2] = rd32(r3 + 0x3e8u);
    (void)tc_call(0x80119fb0u, &a);
    wr32(r30 + 0x3ecu, 0u);
    wr32(rd32(0x80571398u) + 0x1c0u, rd32(rd32((u32)param_1 + 0x1cu) + 0x430u));
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44cu;
    a.r[1] = 0xdu;
    (void)tc_call(0x8014b494u, &a);
    return;
}
