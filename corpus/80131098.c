#include "tc_rt.h"

u32 fn_80131098(s32 param_1)
{
    u32 r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r7 = 0u;
    r6 = (u32)param_1;
    while ((s32)r7 < (s32)rd32((u32)param_1 + 0x54u)) {
        r5 = rd32(rd32(r6 + 0x58u));
        if ((u32)rd16(r5 + 0xcdu) == 0u) {
            wr16(r5 + 0xcdu, 0x3000u);
        }
        r6 = r6 + 4u;
        r7 = r7 + 1u;
    }
    r6 = 0u;
    for (;;) {
        r4 = rd32((u32)param_1 + 0x54u);
        if ((s32)r6 >= (s32)r4) break;
        r4 = r4 - r6;
        r4 = (r4 << 2u) & 0xfffffffcu;
        r4 = (u32)param_1 + r4;
        r4 = rd32(r4 + 0x54u);
        r4 = rd32(r4);
        r5 = (u32)rd16(r4 + 0xcdu);
        if (r5 != 0x3000u) {
            if (r5 != 0u) break;
        } else {
            wr16(r4 + 0xcdu, 0u);
        }
        r6 = r6 + 1u;
    }
    if ((u32)rd16(rd32(rd32((u32)param_1 + 0x58u)) + 0xcdu) != 0u) {
        r6 = (u32)param_1;
        r8 = 0u;
        r7 = 0u;
        while ((s32)r8 < (s32)rd32((u32)param_1 + 0x54u)) {
            r5 = rd32(r6 + 0x58u);
            r6 = r6 + 4u;
            r8 = r8 + 1u;
            r5 = rd32(r5);
            wr16(rd32((u32)param_1 + 0x50u) + r7, rd16(r5 + 0xcdu));
            r7 = r7 + 2u;
        }
        return 1u;
    }
    return 0u;
}
