#include "tc_rt.h"

u32 fn_802ee818(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 8u);
    if (r3 != 0u) {
        r3 = (u32)rd16(r3 + 0xau);
        return r3;
    }
    return 0u;
}
