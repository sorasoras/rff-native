#include "tc_rt.h"

void fn_8013c394(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x68u;
    a.r[1] = 0x8033a46du;
    (void)tc_call(0x8013b0dcu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xf4u;
    a.r[1] = 0x8033a46du;
    (void)tc_call(0x8013b0dcu, &a);
    r3 = rd32((u32)param_1 + 0x1cu);
    r3 = r3 + ((rd32(r3 + 0x5f0u) << 2u) & 0xfffffffcu);
    r3 = rd32(r3 + 0x44u);
    a.r[0] = r3;
    (void)tc_call(0x8013b920u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x54u;
    (void)tc_call(0x8013bbc8u, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x5a0u);
    a.r[1] = 0x8033a46du;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x5a0u);
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x2721u;
    (void)tc_call(0x8010a75cu, &a);
    return;
}
