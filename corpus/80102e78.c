#include "tc_rt.h"

u32 fn_80102e78(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r6 = 0;
    TcArgs a = {0};
    r4 = 3u;
    r6 = rd32(rd32(0x80571398u) + 0x38u);
    r0 = rd32(r6 + 0x118u) - rd32(r6 + 0x194u);
    if ((s32)r0 > 0) {
        r4 = 4u;
    }
    if (r0 != 0u) {
        a.r[0] = rd32((u32)param_1 + 0x40u);
        a.r[1] = r4;
        (void)tc_call(0x801ed110u, &a);
        a.r[0] = rd32((u32)param_1 + 0x40u);
        a.r[1] = (u32)param_1;
        (void)tc_call(0x801ec6bcu, &a);
    }
    return 1u;
}
