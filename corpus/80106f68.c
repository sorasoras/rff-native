#include "tc_rt.h"

u32 fn_80106f68(s32 param_1)
{
    u32 c0lt = 0, r0 = 0, r4 = 0;
    TcArgs a = {0};
    r0 = rd32(rd32(0x80571398u) + 0x100u);
    c0lt = (s32)r0 < 7;
    if (r0 == 7u) {
        r4 = 3u;
    } else if (!c0lt) {
        if ((s32)r0 >= 9) {
            r4 = 0xffffffffu;
        } else {
            r4 = 1u;
        }
    } else if ((s32)r0 >= 6) {
        r4 = 2u;
    } else if ((s32)r0 >= 0) {
        r4 = 0u;
    } else {
        r4 = 0xffffffffu;
    }
    if ((s32)r4 >= 0) {
        a.r[0] = rd32((u32)param_1 + 0x40u);
        a.r[1] = r4;
        (void)tc_call(0x801ed110u, &a);
        a.r[0] = rd32((u32)param_1 + 0x40u);
        a.r[1] = (u32)param_1;
        (void)tc_call(0x801ec6bcu, &a);
    }
    return 1u;
}
