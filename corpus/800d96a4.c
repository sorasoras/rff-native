#include "tc_rt.h"

s32 fn_800d96a4(s32 param_1)
{
    u32 r4 = 0;
    r4 = rd32((u32)param_1 + 0x10u);
    if (r4 == 0u) {
        return 0;
    }
    return (s32)((u32)rd16(r4 + 0x18u) + (u32)rd16(r4 + 0xcu));
}
