#include "tc_rt.h"

u32 fn_801e6ef4(u32 param_1, s32 param_2)
{
    u32 r4 = 0;
    (void)param_1;
    wr32(0x817fdff0u, 0x817fe000u);
    r4 = rd32(0x80576324u);
    wr32(0x817fdff8u, rd32(0x80576320u));
    wr32(0x817fdffcu, r4);
    return rd32((((u32)param_2 << 2u) & 0xfffffffcu) - 0x7e802008u);
}
