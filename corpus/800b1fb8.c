#include "tc_rt.h"

u32 fn_800b1fb8(s32 param_1, s32 param_2)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x348u);
    if (r3 == 0u) {
        return 0x21u;
    }
    r3 = rd32(r3 + 4u);
    return r3;
}
