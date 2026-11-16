#include "tc_rt.h"

void fn_800cb5a8(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x24u);
    if (r4 != 0u) {
        a.r[0] = 0x8046d8c8u;
        a.r[1] = r4;
        (void)tc_call(0x8008c400u, &a);
        wr32((u32)param_1 + 0x24u, 0u);
        wr32((u32)param_1 + 0x18u, 0u);
    }
    return;
}
