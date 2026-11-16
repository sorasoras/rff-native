#include "tc_rt.h"

void fn_801d65ec(s32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    r0 = rd32((u32)param_1 + 0x290u);
    if ((s32)r0 < 10) {
        r0 = (r0 << 2u) & 0xfffffffcu;
        r3 = rd32((u32)param_1 + r0 + 0x268u);
        if (r3 != 0u) {
            a.r[0] = r3;
            a.r[1] = 0u;
            a.f[0] = 0.0;
            (void)tc_call(rd32(rd32(r3 + 0x74u) + 0x14u), &a);
        }
    }
    wr32((u32)param_1 + 0x268u, 0u);
    wr32((u32)param_1 + 0x26cu, 0u);
    wr32((u32)param_1 + 0x270u, 0u);
    wr32((u32)param_1 + 0x274u, 0u);
    wr32((u32)param_1 + 0x278u, 0u);
    wr32((u32)param_1 + 0x27cu, 0u);
    wr32((u32)param_1 + 0x280u, 0u);
    wr32((u32)param_1 + 0x284u, 0u);
    wr32((u32)param_1 + 0x288u, 0u);
    wr32((u32)param_1 + 0x28cu, 0u);
    return;
}
