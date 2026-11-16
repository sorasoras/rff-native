#include "tc_rt.h"

void fn_80163598(s32 param_1)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r8 = 0;
    u64 t0 = 0;
    TcArgs a = {0};
    r5 = rd32((u32)param_1 + 0x4cu);
    if ((s32)r5 >= 0) {
        r0 = (r5 << 0x1bu) & 0xf8000000u;
        t0 = (u64)(u32)((s32)r5 >> 5) + (u64)(((s32)r5 < 0) && ((r5 & 0x1fu) != 0u));
        r5 = (r5 >> 0x1fu) & 1u;
        r4 = r0 - r5;
        r8 = (u32)param_1 + (((u32)t0 << 2u) & 0xfffffffcu);
        r4 = (r4 << 5u) | (r4 >> 0x1bu);
        r4 = r4 + r5;
        r4 = ((r4 & 0x20u) != 0u) ? 0u : (1u << (r4 & 0x1fu));
        r4 = rd32(r8 + 0x54u) & ~r4;
        wr32(r8 + 0x54u, r4);
        wr32((u32)param_1 + 0x4cu, 0xffffffffu);
        a.r[0] = 2u;
        (void)tc_call(0x8004f7b0u, &a);
        return;
    }
    return;
}
