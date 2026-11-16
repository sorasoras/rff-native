#include "tc_rt.h"

void fn_802e76dc(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r0 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    TcArgs a = {0};
    r10 = (u32)rd8(param_2 + 1u);
    r9 = (u32)rd8(param_2 + 2u);
    r8 = (u32)rd8(param_2 + 3u);
    r7 = (u32)rd8(param_3);
    r6 = (u32)rd8(param_3 + 1u);
    r4 = (u32)rd8(param_3 + 2u);
    r0 = (u32)rd8(param_3 + 3u);
    wr8((u32)param_1 + 0x18u, rd8(param_2));
    wr8((u32)param_1 + 0x19u, (u8)r10);
    wr8((u32)param_1 + 0x1au, (u8)r9);
    wr8((u32)param_1 + 0x1bu, (u8)r8);
    wr8((u32)param_1 + 0x1cu, (u8)r7);
    wr8((u32)param_1 + 0x1du, (u8)r6);
    wr8((u32)param_1 + 0x1eu, (u8)r4);
    wr8((u32)param_1 + 0x1fu, (u8)r0);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x802e1e28u, &a);
    return;
}
