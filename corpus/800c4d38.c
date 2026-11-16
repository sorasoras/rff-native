#include "tc_rt.h"

void fn_800c4d38(s32 param_1)
{
    u32 r4 = 0;
    TcArgs a = {0};
    r4 = rd32((u32)param_1 + 0x15e4u);
    wr32((u32)param_1 + 0x290u, 0x17u);
    if (r4 != 0u) {
        if (rd32(((rd32(r4 + 8u) << 2u) & 0xfffffffcu) - 0x7fca9e94u) != 0u) {
            a.r[0] = r4;
            (void)tc_call(0x80157e6cu, &a);
        }
        wr32((u32)param_1 + 0x15e4u, 0u);
    }
    return;
}
