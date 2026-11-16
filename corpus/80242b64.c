#include "tc_rt.h"

u32 fn_80242b64(s32 param_1)
{
    u32 r3 = 0, r4 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    r4 = (u32)rd8(0x800030e3u);
    r31 = (r4 >> 6u) & 1u;
    wr8(0x800030e3u, (u8)(r4 & 0xffffffbfu));
    if ((u32)param_1 != 0u) {
        wr8(0x800030e3u, (u8)((u32)rd8(0x800030e3u) | 0x40u));
    }
    a.r[0] = r3;
    (void)tc_call(0x8022c2d8u, &a);
    return r31;
}
