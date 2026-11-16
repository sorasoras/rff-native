#include "tc_rt.h"

void fn_80067950(s32 param_1, u32 param_2, s32 param_3, s32 param_4)
{
    u32 r3 = 0, r6 = 0;
    r6 = (u32)param_4;
    if ((u32)param_4 != 2u) {
        r6 = 3u;
    }
    r3 = (u32)param_1 + (((u32)param_3 << 3u) & 0xfffffff8u);
    wr32(r3 + 0xa88u, r6);
    wr16(r3 + 0xa84u, rd16(param_2));
    wr8(r3 + 0xa87u, rd8(param_2 + 3u));
    wr8(r3 + 0xa86u, rd8(param_2 + 2u));
    return;
}
