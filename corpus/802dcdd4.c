#include "tc_rt.h"

void fn_802dcdd4(s32 param_1)
{
    u32 r4 = 0, r5 = 0;
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 4u);
    a.r[1] = (u32)((s32)(rd32((u32)param_1 + 0x2cu) + rd32((u32)param_1 + 0x34u)) >> 16);
    (void)tc_call(0x802db38cu, &a);
    a.r[0] = rd32((u32)param_1 + 4u);
    a.r[1] = (u32)((s32)rd32(rd32((u32)param_1 + 8u) + (((u32)rd8((u32)param_1 + 0xcu) << 2u) & 0xfffffffcu) + 0xacu) >> 16);
    (void)tc_call(0x802db3c4u, &a);
    r5 = rd32((u32)param_1 + 8u);
    r4 = r5 + (((u32)rd8((u32)param_1 + 0xcu) << 2u) & 0xfffffffcu);
    r5 = rd32(r5 + 0x68u);
    r4 = (u32)((s32)(r5 + rd32(r4 + 0x6cu)) >> 16);
    a.r[0] = rd32((u32)param_1 + 4u);
    a.r[1] = r4;
    (void)tc_call(0x802db47cu, &a);
    a.r[0] = rd32((u32)param_1 + 4u);
    a.r[1] = (u32)rd8(rd32((u32)param_1 + 8u) + (u32)rd8((u32)param_1 + 0xcu) + 0xecu);
    (void)tc_call(0x802db3fcu, &a);
    return;
}
