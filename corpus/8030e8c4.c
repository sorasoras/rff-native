#include "tc_rt.h"

void fn_8030e8c4(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r0 = 0, r3 = 0, r9 = 0;
    if ((s32)param_1 > 127) {
        r0 = 0x7fu;
    } else {
        r0 = param_1 & ~(u32)((s32)param_1 >> 31);
    }
    r9 = r0 * 0xau;
    r0 = (u32)rd16(r9 - 0x7fcb41d8u);
    r9 = r9 - 0x7fcb41d8u;
    r3 = (u32)rd16(r9 + 2u);
    wr16(param_2, (u16)r0);
    r0 = (u32)rd16(r9 + 4u);
    wr16(param_3, (u16)r3);
    r3 = (u32)rd16(r9 + 6u);
    wr16(param_4, (u16)r0);
    r0 = (u32)rd16(r9 + 8u);
    wr16(param_5, (u16)r3);
    wr16(param_6, (u16)r0);
    return;
}
