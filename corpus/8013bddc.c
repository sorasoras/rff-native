#include "tc_rt.h"

void fn_8013bddc(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = rd32(r4 + ((rd32(r4 + 0x5f0u) << 2u) & 0xfffffffcu) + 0x44u);
    (void)tc_call(0x8013b8d8u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x54u;
    (void)tc_call(0x8013bb7cu, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x5a0u);
    a.r[1] = 0x8033a469u;
    (void)tc_call(0x801f100cu, &a);
    a.r[0] = rd32(rd32((u32)param_1 + 0x1cu) + 0x5a0u);
    a.r[1] = 0u;
    (void)tc_call(0x801f10b8u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x68u;
    a.r[1] = 0x8033a469u;
    (void)tc_call(0x8013b0dcu, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xf4u;
    a.r[1] = 0x8033a469u;
    (void)tc_call(0x8013b0dcu, &a);
    a.r[0] = 0x804b9da0u;
    a.r[1] = 0x2721u;
    (void)tc_call(0x8010a75cu, &a);
    return;
}
