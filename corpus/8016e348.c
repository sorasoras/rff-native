#include "tc_rt.h"

void fn_8016e348(s32 param_1)
{
    TcArgs a = {0};
    if ((u32)rd8((u32)param_1 + 0x16f0u) == 1u) {
        wr8((u32)param_1 + 0x16f0u, 3u);
        a.r[0] = 0x804b9da0u;
        a.r[1] = 0xd3cu;
        (void)tc_call(0x8010a74cu, &a);
        return;
    }
    return;
}
