#include "tc_rt.h"

void fn_80211444(s32 param_1)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0xf4u);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = (u32)param_1 + 0xacu;
        (void)tc_call(0x8007b03cu, &a);
        return;
    }
    return;
}
