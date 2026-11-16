#include "tc_rt.h"

void fn_80123f68(s32 param_1, s32 param_2)
{
    u32 r0 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0xcu);
    wr32((u32)param_1 + 0x14u, (u32)param_2);
    if (r0 != 0u) {
        a.r[0] = r0;
        a.r[1] = rd32((u32)param_2 + 0x30u);
        (void)tc_call(0x80103564u, &a);
        return;
    }
    return;
}
