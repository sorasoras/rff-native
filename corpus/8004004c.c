#include "tc_rt.h"

void fn_8004004c(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r3 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8004a8b8u, &a);
    c0lt = (s32)r3 < 3;
    if (r3 != 3u) {
        if (!c0lt) {
            return;
        }
        if ((s32)r3 < 2) {
            return;
        }
        r3 = tc_call(0x8004a80cu, &a);
        a.r[0] = 1u;
        a.r[1] = r3 & 0xffu;
        (void)tc_call(0x80044e64u, &a);
    } else {
        a.r[0] = rd32((u32)param_2 + 8u);
        r3 = tc_call(0x8004a844u, &a);
        wr8((u32)param_1 + 0x25u, (u8)r3);
    }
    return;
}
