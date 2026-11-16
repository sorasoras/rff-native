#include "tc_rt.h"

void fn_801b58fc(s32 param_1)
{
    u32 r9 = 0;
    r9 = rd32((u32)param_1 + 0x10u);
    wr32(rd32(0x80571398u) + 0xccu, rd32((u32)param_1 + ((r9 << 2u) & 0xfffffffcu) + 0x3cu));
    wr32(rd32(0x80571398u) + 0xd0u, rd32((u32)param_1 + (((r9 + 1u) << 2u) & 0xfffffffcu) + 0x3cu));
    wr32(rd32(0x80571398u) + 0xd4u, rd32((u32)param_1 + (((r9 + 2u) << 2u) & 0xfffffffcu) + 0x3cu));
    wr32(rd32(0x80571398u) + 0xd8u, rd32((u32)param_1 + (((r9 + 3u) << 2u) & 0xfffffffcu) + 0x3cu));
    wr32(rd32(0x80571398u) + 0xdcu, rd32((u32)param_1 + (((r9 + 4u) << 2u) & 0xfffffffcu) + 0x3cu));
    wr32(rd32(0x80571398u) + 0xe0u, rd32((u32)param_1 + (((r9 + 5u) << 2u) & 0xfffffffcu) + 0x3cu));
    return;
}
