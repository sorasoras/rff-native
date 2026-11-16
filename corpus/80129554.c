#include "tc_rt.h"

s32 fn_80129554(s32 param_1, s32 param_2)
{
    u32 r7 = 0;
    wr32(0x817fdfe0u, 0x817fe000u);
    r7 = rd32((u32)param_1 + 0x1cu);
    wr32(0x817fdfe8u, r7 + 0x44u);
    wr32(0x817fdfecu, r7 + 0xb8u);
    wr32(0x817fdff0u, r7 + 0x12cu);
    return (s32)rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7e802018u);
}
