#include "tc_rt.h"

void fn_800fb1d4(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r30 = 0;
    TcArgs a = {0};
    wr32(rd32((u32)param_1 + 0x1cu) + 0x434u, 1u);
    r4 = rd32((u32)param_1 + 0x1cu);
    wr32((u32)param_1 + 0x1288u, 1u);
    r30 = r4 + 0x44u;
    r4 = rd32(r4 + 0x430u);
    a.r[0] = r30;
    a.r[1] = r4;
    a.r[2] = 1u;
    (void)tc_call(0x80119fb0u, &a);
    wr32(r30 + 0x3e8u, 1u);
    r3 = rd32((u32)param_1 + 0x1cu);
    r30 = r3 + 0x44u;
    a.r[0] = r30;
    a.r[1] = 0u;
    a.r[2] = rd32(r3 + 0x42cu);
    (void)tc_call(0x80119fb0u, &a);
    wr32(r30 + 0x3ecu, 0u);
    r3 = rd32((u32)param_1 + 0x28u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x80185a10u, &a);
    }
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800fa8b4u, &a);
    return;
}
