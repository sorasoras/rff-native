#include "tc_rt.h"

void fn_80252348(s32 param_1, u32 param_r10, u32 param_r4, u32 param_r5, u32 param_r6, u32 param_r7, u32 param_r8, u32 param_r9)
{
    u32 r0 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = rd32(0x817fe008u);
    a.r[0] = (u32)param_1;
    a.r[1] = param_r4;
    a.r[2] = param_r5;
    a.r[3] = param_r6;
    a.r[4] = param_r7;
    a.r[5] = param_r8;
    a.r[6] = param_r9;
    a.r[7] = param_r10;
    (void)tc_call(0x8025213cu, &a);
    r0 = (u32)rd8((u32)param_1 + 0x1fu);
    wr32((u32)param_1 + 0x18u, r31);
    r0 = r0 & 0xfffffffdu;
    wr8((u32)param_1 + 0x1fu, (u8)r0);
    return;
}
