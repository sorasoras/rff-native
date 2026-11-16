#include "tc_rt.h"

void fn_80211464(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x70u) != 0u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x80070804u, &a);
    }
    a.r[0] = (u32)param_1 + 0xacu;
    a.r[1] = 0u;
    (void)tc_call(0x80051534u, &a);
    return;
}
