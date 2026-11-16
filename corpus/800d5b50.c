#include "tc_rt.h"

void fn_800d5b50(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r5 = 0;
    (void)param_1;
    r5 = (u32)rd8(0x8057318du);
    r3 = (u32)rd8(0x8057318eu);
    r0 = (u32)rd8(0x8057318fu);
    wr8(param_2, rd8(0x8057318cu));
    wr8(param_2 + 1u, (u8)r5);
    wr8(param_2 + 2u, (u8)r3);
    wr8(param_2 + 3u, (u8)r0);
    return;
}
