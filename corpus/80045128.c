#include "tc_rt.h"

void fn_80045128(s32 param_1)
{
    u32 r3 = 0;
    r3 = 0xffu - (u32)param_1;
    wr8(0x803c1c98u, (u8)r3);
    wr8(0x803c1c99u, (u8)r3);
    wr8(0x803c1c9au, (u8)r3);
    wr8(0x803c1c9bu, 0xffu);
    return;
}
