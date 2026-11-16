#include "tc_rt.h"

s32 fn_802ee890(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0xcu);
    if (r3 != 0u) {
        r3 = r3 + rd32(r3 + 8u);
        return (s32)r3;
    }
    return 0;
}
