#include "tc_rt.h"

u32 fn_800ce5b4(s32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    wr32((u32)param_1 + 4u, param_2);
    wr32((u32)param_1 + 8u, param_3);
    wr32((u32)param_1 + 0x10u, 0u);
    wr32((u32)param_1 + 0x14u, param_4);
    wr32((u32)param_1 + 0x18u, 0x40u);
    wr32((u32)param_1 + 0xcu, 1u);
    return 1u;
}
