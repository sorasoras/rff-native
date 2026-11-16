#include "tc_rt.h"

void fn_802b0360(u32 param_1, u32 param_2, s32 param_3, u32 param_4)
{
    u32 r3 = 0, r4 = 0, r7 = 0, r9 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)rd8(param_4);
    r30 = (u32)rd8(param_4 + 1u);
    a.r[0] = 2u;
    r3 = tc_call(0x8028a274u, &a);
    if (r3 != 0u) {
        wr16(r3 + 4u, 0xcu);
        r9 = ((((0u - r30) | r30) >> 0x1fu) & 1u) + 2u;
        wr8(r3 + 0x14u, (u8)(((u32)((s32)((0u - (u32)param_3) | (u32)param_3) >> 31) & 2u) | 0xe1u));
        wr8(r3 + 0x15u, (u8)(((r9 << 1u) & 0x1feu) | 1u));
        wr8(r3 + 0x16u, (u8)(((param_2 << 2u) & 0x3fcu) | 3u));
        r7 = (u32)rd8(param_4 + 4u);
        r4 = (u32)((s32)((0u - r7) | r7) >> 31) & 2u;
        r7 = r3 + 0x18u;
        r4 = (r4 & 0xfffffffbu) | ((0u - (r31 & 1u)) & 4u);
        r4 = (r4 & 0xffffffbfu) | ((0u - ((r31 >> 2u) & 1u)) & 0x40u);
        r4 = (r4 & 0xffffff7fu) | ((0u - ((r31 >> 3u) & 1u)) & 0x80u);
        wr8(r3 + 0x17u, (u8)(r4 | (((0u - ((r31 >> 1u) & 1u)) & 8u) | 1u)));
        if (r30 != 0u) {
            wr8(r7, (u8)(((r30 << 4u) & 0xff0u) | 3u));
        }
        wr16(r3 + 2u, (u16)((r9 & 0xffu) + 2u));
        a.r[0] = param_1;
        a.r[1] = 0u;
        a.r[2] = r3;
        (void)tc_call(0x802affd8u, &a);
    }
    return;
}
