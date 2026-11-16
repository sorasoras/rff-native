#include "tc_rt.h"

void fn_802d2ef4(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0xd4u) != 0u) {
        a.r[0] = rd32(0x805474e0u);
        (void)tc_call(0x8026d4a0u, &a);
        wr32((u32)param_1 + 0xd4u, 0u);
        wr16((u32)param_1 + 0xf8u, 0u);
    }
    return;
}
