#include "tc_rt.h"

void fn_802253dc(u32 param_1)
{
    u32 r9 = 0, r10 = 0;
    r10 = rd32(0xc0003144u);
    r9 = rd32(0xc0003140u);
    wr8(param_1, (u8)((r9 >> 0x18u) & 0xffu));
    wr8(param_1 + 1u, (u8)((r9 >> 0x10u) & 0xffu));
    wr8(param_1 + 3u, (u8)r9);
    wr8(param_1 + 2u, (u8)((r9 >> 8u) & 0xffu));
    wr8(param_1 + 5u, (u8)(((r10 >> 8u) & 0xfu) + (((r10 >> 0xcu) & 0xfu) * 0xau)));
    wr8(param_1 + 4u, (u8)(((r10 >> 0x10u) & 0xfu) + (((r10 >> 0x14u) & 0xfu) * 0xau)));
    wr16(param_1 + 6u, (u16)((r10 & 0xfu) + (((r10 >> 4u) & 0xfu) * 0xau) + 0x7d0u));
    return;
}
