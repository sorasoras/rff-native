#include "tc_rt.h"

void fn_8008d340(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = (u32)rd8((u32)param_1 + 1u);
    if (r0 == 3u) {
        wr8((u32)param_1 + 1u, 0u);
    } else {
        a.r[0] = r0;
        a.r[1] = (u32)rd8((u32)param_1 + 2u);
        a.r[2] = (u32)rd8((u32)param_1 + 3u);
        r3 = tc_call(0x8008dbc4u, &a);
        r3 = ((r3 << 2u) & 0xfffffffcu) - 0x7fb8e130u;
        if ((u32)rd8(r3 + 0xc62u) != 0u) {
            r0 = (u32)rd8((u32)param_1 + 5u);
            wr8((u32)param_1 + 3u, 3u);
            r0 = r0 & 0x7fu;
            wr8((u32)param_1 + 5u, (u8)r0);
        } else {
            wr8((u32)param_1 + 1u, 0u);
            wr8((u32)param_1 + 5u, 1u);
        }
    }
    r0 = (u32)rd8((u32)param_1 + 7u);
    wr8((u32)param_1 + 4u, 0u);
    r0 = r0 & 0xf0u;
    wr8((u32)param_1 + 7u, (u8)r0);
    return;
}
