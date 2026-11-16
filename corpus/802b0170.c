#include "tc_rt.h"

void fn_802b0170(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5, u32 param_6)
{
    u32 r3 = 0, r8 = 0;
    TcArgs a = {0};
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 != 0u) {
        wr16(r3 + 4u, 0xcu);
        r8 = r3 + 0x18u;
        wr8(r3 + 0x14u, (u8)(((u32)((s32)((0u - (u32)param_3) | (u32)param_3) >> 31) & 2u) | 0x81u));
        wr8(r3 + 0x15u, 0x11u);
        wr8(r3 + 0x16u, (u8)param_2);
        wr8(r3 + 0x17u, (u8)param_5);
        if ((u32)param_3 != 0u) {
            wr8(r8, 0u);
            r8 = r8 + 1u;
        } else {
            wr8(r8, rd8(0x80541213u));
            r8 = r8 + 1u;
        }
        wr8(r8, 0u);
        wr8(r8 + 1u, (u8)param_4);
        wr8(r8 + 2u, (u8)((param_4 >> 8u) & 0xffu));
        wr8(r8 + 3u, 0u);
        wr8(r8 + 4u, (u8)param_6);
        wr16(r3 + 2u, 0xau);
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = r3;
        (void)tc_call(0x802affd8u, &a);
    }
    return;
}
