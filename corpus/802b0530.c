#include "tc_rt.h"

void fn_802b0530(u32 param_1, u32 param_2, s32 param_3, u32 param_4, u32 param_5)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 != 0u) {
        wr16(r3 + 4u, 0xcu);
        r4 = r3 + 0x15u;
        wr8(r3 + 0x14u, (u8)(((u32)((s32)((0u - (u32)param_3) | (u32)param_3) >> 31) & 2u) | 0x91u));
        if (param_4 == 0u) {
            wr8(r4, 3u);
            wr8(r4 + 1u, (u8)(((param_2 << 2u) & 0x3fcu) | 3u));
            wr16(r3 + 2u, 3u);
        } else {
            wr8(r4, 0x11u);
            wr8(r4 + 1u, (u8)(((param_2 << 2u) & 0x3fcu) | 3u));
            wr8(r4 + 2u, rd8(param_4));
            wr8(r4 + 3u, (u8)((((u32)rd8(param_4 + 4u) << 4u) & 0xfffffff0u) | ((((u32)rd8(param_4 + 3u) << 3u) & 0xfffffff8u) | ((u32)rd8(param_4 + 1u) | (((u32)rd8(param_4 + 2u) << 2u) & 0xfffffffcu)))));
            wr8(r4 + 4u, rd8(param_4 + 5u));
            wr8(r4 + 5u, rd8(param_4 + 7u));
            wr8(r4 + 6u, rd8(param_4 + 8u));
            wr8(r4 + 7u, (u8)param_5);
            wr8(r4 + 8u, (u8)((param_5 >> 8u) & 0xffu));
            wr16(r3 + 2u, 0xau);
        }
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = r3;
        (void)tc_call(0x802affd8u, &a);
    }
    return;
}
