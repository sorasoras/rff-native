#include "tc_rt.h"

void fn_8014b42c(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x8014b364u, &a);
    if (r3 != 0u) {
        a.r[0] = (u32)param_1 + (rd32((u32)param_1 + 0x168u) * 0xcu) + 0x50u;
        (void)tc_call(0x80163f60u, &a);
    }
    return;
}
