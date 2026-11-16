#include "tc_rt.h"

void fn_800400c0(s32 param_1, s32 param_2)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8004a8b8u, &a);
    if (r3 == 3u) {
        r4 = ((u32)rd8((u32)param_1 + 0x25u) + (((u32)rd8((u32)param_2 + 0x54u) << 2u) & 0xfffffffcu)) & 0xffu;
        if (r4 == 0u) {
            r4 = (r4 + 4u) & 0xffu;
        }
        a.r[0] = 1u;
        a.r[1] = r4;
        (void)tc_call(0x80044e64u, &a);
    }
    return;
}
