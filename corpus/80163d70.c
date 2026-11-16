#include "tc_rt.h"

u32 fn_80163d70(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r29 = 0, r31 = 0;
    TcArgs a = {0};
    r3 = tc_call(0x8004f248u, &a);
    if (r3 == 0u) {
        r31 = rd32(rd32((u32)param_1 + 0x20u) + 0x48u);
        r3 = (r31 >> 0x1fu) & 1u;
        r0 = ((r31 << 0x1bu) & 0xf8000000u) - r3;
        r6 = rd32((u32)param_1 + 0x24u) + (((u32)((u64)(u32)((s32)r31 >> 5) + (u64)(((s32)r31 < 0) && ((r31 & 0x1fu) != 0u))) << 2u) & 0xfffffffcu);
        r0 = (r0 << 5u) | (r0 >> 0x1bu);
        r0 = r0 + r3;
        r0 = ((r0 & 0x20u) != 0u) ? 0u : (1u << (r0 & 0x1fu));
        r0 = rd32(r6 + 0x54u) | r0;
        wr32(r6 + 0x54u, r0);
        do {
            if ((s32)r31 >= 101) {
                if ((s32)r31 >= 103) break;
            } else if (r31 != 0x2au) {
                break;
            }
            r29 = rd32((u32)param_1 + 0x24u);
            a.r[0] = 3u;
            r3 = tc_call(0x8004f804u, &a);
            wr32(r29 + 0x70u, r3);
        } while (0);
        if (rd32(rd32((u32)param_1 + 0x20u) + 0x4cu) == 2u) {
            wr32(rd32((u32)param_1 + 0x24u) + 0x4cu, r31);
        }
        a.r[0] = rd32((u32)param_1 + 0x20u) + 8u;
        a.r[1] = 0u;
        (void)tc_call(0x8011e5a0u, &a);
    }
    return 1u;
}
