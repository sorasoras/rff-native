#include "tc_rt.h"

void fn_80163d10(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0, r9 = 0;
    TcArgs a = {0};
    r9 = rd32((u32)param_1 + 0x20u);
    r4 = rd32(r9 + 0x48u);
    r3 = rd32(r9 + 0x4cu);
    r7 = (r4 >> 0x1fu) & 1u;
    r6 = ((r4 << 0x1bu) & 0xf8000000u) - r7;
    r6 = (r6 << 5u) | (r6 >> 0x1bu);
    r6 = r6 + r7;
    r0 = (((r6 & 0x20u) != 0u) ? 0u : (1u << (r6 & 0x1fu))) & rd32(rd32((u32)param_1 + 0x24u) + (((u32)((u64)(u32)((s32)r4 >> 5) + (u64)(((s32)r4 < 0) && ((r4 & 0x1fu) != 0u))) << 2u) & 0xfffffffcu) + 0x54u);
    if (r0 == 0u || r3 == 2u) {
        a.r[0] = r3;
        a.r[1] = r4;
        (void)tc_call(0x8004fa84u, &a);
        return;
    }
    a.r[0] = r9 + 8u;
    a.r[1] = 0u;
    (void)tc_call(0x8011e5a0u, &a);
    return;
}
