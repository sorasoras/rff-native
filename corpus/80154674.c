#include "tc_rt.h"

void fn_80154674(s32 param_1)
{
    wr8((u32)param_1 + 8u, 0u);
    wr32((u32)param_1 + 0xcu, 0u);
    wr32((u32)param_1 + 0x38u, 0xffffffffu);
    wr8((u32)param_1 + 0x44u, 0u);
    wr32((u32)param_1 + 0x48u, 0u);
    wr32((u32)param_1 + 0x74u, 0xffffffffu);
    wr8((u32)param_1 + 0x80u, 0u);
    wr32((u32)param_1 + 0x84u, 0u);
    wr32((u32)param_1 + 0xb0u, 0xffffffffu);
    return;
}
