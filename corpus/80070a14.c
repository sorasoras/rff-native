#include "tc_rt.h"

void fn_80070a14(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x70u);
    if (r4 != 0u) {
        a.r[0] = 0x80472f48u;
        a.r[1] = r4;
        (void)tc_call(0x800beee0u, &a);
        wr32((u32)param_1 + 0x70u, 0u);
    }
    wr32((u32)param_1 + 0x74u, 0x2e8u);
    wr8((u32)param_1 + 0x78u, 1u);
    wr8((u32)param_1 + 0x79u, 1u);
    return;
}
