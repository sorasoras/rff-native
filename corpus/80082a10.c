#include "tc_rt.h"

void fn_80082a10(u32 param_1, u32 param_2, u32 param_3)
{
    wr16(0x805711b0u, (u16)param_1);
    wr8(0x805711b3u, (u8)param_3);
    wr8(0x805711b2u, (u8)param_2);
    return;
}
