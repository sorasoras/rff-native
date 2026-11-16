#include "tc_rt.h"

void fn_801e8074(s32 param_1, s32 param_2)
{
    wr32((u32)param_1 + 0x348u, rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x340u));
    wr32((u32)param_1 + 0x334u, 0u);
    wr32((u32)param_1 + 0x338u, 0u);
    wr32((u32)param_1 + 0x33cu, 0u);
    wr32((u32)param_1 + 0x9dcu, 0xffffffffu);
    wr32((u32)param_1 + 0x9e0u, 0xffffffffu);
    wr32((u32)param_1 + 0x9e4u, 0xffffffffu);
    wr32((u32)param_1 + 0x9e8u, 0xffffffffu);
    wr32((u32)param_1 + 0x9ecu, 0xffffffffu);
    wr32((u32)param_1 + 0x9f0u, 0xffffffffu);
    wr32((u32)param_1 + 0x9f4u, 0xffffffffu);
    wr32((u32)param_1 + 0x9f8u, 0xffffffffu);
    wr32((u32)param_1 + 0x9fcu, 0xffffffffu);
    wr32((u32)param_1 + 0xa00u, 0xffffffffu);
    wr32((u32)param_1 + 0xa04u, 0xffffffffu);
    wr32((u32)param_1 + 0xa08u, 0xffffffffu);
    wr32((u32)param_1 + 0xa0cu, 0xffffffffu);
    wr32((u32)param_1 + 0xa10u, 0xffffffffu);
    wr32((u32)param_1 + 0xa14u, 0xffffffffu);
    wr32((u32)param_1 + 0xa18u, 0xffffffffu);
    wr32((u32)param_1 + 0xa1cu, 0xffffffffu);
    wr32((u32)param_1 + 0xa20u, 0xffffffffu);
    wr32((u32)param_1 + 0xa24u, 0xffffffffu);
    wr32((u32)param_1 + 0xa28u, 0xffffffffu);
    return;
}
