#include "tc_rt.h"

void fn_802b02dc(u32 param_1, s32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 != 0u) {
        wr16(r3 + 4u, 0xcu);
        wr8(r3 + 0x14u, (u8)(((u32)((s32)((0u - (u32)param_2) | (u32)param_2) >> 31) & 2u) | 0x61u));
        wr8(r3 + 0x15u, 1u);
        wr16(r3 + 2u, 2u);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = r3;
        (void)tc_call(0x802affd8u, &a);
    }
    return;
}
