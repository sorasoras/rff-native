#include "tc_rt.h"

void fn_8018d1c8(s32 param_1)
{
    u32 r0 = 0;
    r0 = rd32(0x8036fee8u);
    wr32((u32)param_1 + 0x38u, rd32(0x8036fee4u));
    wr32((u32)param_1 + 0x3cu, r0);
    wr32((u32)param_1 + 0x40u, rd32(0x8036feecu));
    return;
}
