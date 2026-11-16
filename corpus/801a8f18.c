#include "tc_rt.h"

u32 fn_801a8f18(s32 param_1, u32 param_2)
{
    u32 r6 = 0;
    r6 = rd32((u32)param_1 + 0x30u) | rd32((u32)param_1 + 0x34u) | rd32((u32)param_1 + 0x38u) | rd32((u32)param_1 + 0x3cu) | rd32((u32)param_1 + 0x40u) | rd32((u32)param_1 + 0x44u) | rd32((u32)param_1 + 0x48u);
    return r6 & param_2;
}
