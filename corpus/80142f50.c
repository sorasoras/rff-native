#include "tc_rt.h"

void fn_80142f50(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(rd32(param_1) + 0x34u, param_2);
    wr8(rd32(param_1) + 0x38u, (u8)param_3);
    wr8(rd32(param_1) + 0x4cu, (u8)param_4);
    a.r[0] = rd32(param_1);
    a.r[1] = param_2;
    a.r[2] = (u32)(s8)param_3;
    r3 = tc_call(0x801424dcu, &a);
    wr32(rd32(param_1) + 0x3cu, r3);
    r3 = rd32(param_1);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = (u32)(s8)param_3;
    a.r[3] = rd32(r3 + 0x3cu);
    r3 = tc_call(0x8014243cu, &a);
    wr32(rd32(param_1) + 0x28u, r3);
    r3 = rd32(param_1);
    a.r[0] = r3;
    a.r[1] = param_2;
    a.r[2] = (u32)(s8)param_3;
    a.r[3] = rd32(r3 + 0x3cu);
    r3 = tc_call(0x80142580u, &a);
    wr32(rd32(param_1) + 0x2cu, r3);
    wr32(param_1 + 4u, 0u);
    a.r[0] = 0x15u;
    (void)tc_call(0x80141170u, &a);
    return;
}
