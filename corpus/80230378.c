#include "tc_rt.h"

void fn_80230378(s32 param_1, s32 param_2)
{
    u32 c0eq = 0, ca = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r11 = 0;
    r8 = (u32)param_1 + 6u;
    r5 = (u32)((s32)(ppc_mulhw(-1840700269, (s32)r8) + r8) >> 2);
    r5 = r5 + ((r5 >> 0x1fu) & 1u);
    r6 = r5 * 7u;
    r0 = (u32)((s32)(ppc_mulhw(-1282606671, param_1) + (u32)param_1) >> 8);
    r5 = r0 + ((r0 >> 0x1fu) & 1u);
    r11 = r5 * 0x16du;
    wr32((u32)param_2 + 0x18u, r8 - r6);
    for (;;) {
        if ((s32)r5 < 1) {
            r0 = 0u;
        } else {
            r0 = r5 + 3u;
            r6 = ppc_mulhw(1374389535, (s32)(r5 - 1u));
            r8 = (u32)((s32)r6 >> 7);
            r6 = (u32)((s32)r6 >> 5);
            ca = ((s32)r0 < 0) && ((r0 & 3u) != 0u);
            r0 = (u32)((s32)r0 >> 2);
            r6 = r6 + ((r6 >> 0x1fu) & 1u);
            r0 = (u32)((u64)r0 + (u64)ca) - r6;
            r0 = r8 + ((r8 >> 0x1fu) & 1u) + r0;
        }
        r8 = r11 + r0;
        if (param_1 >= (s32)r8) break;
        r11 = r11 - 0x16du;
        r5 = r5 - 1u;
    }
    r7 = (r5 >> 0x1fu) & 1u;
    r6 = ((r5 << 0x1eu) & 0xc0000000u) - r7;
    wr32((u32)param_2 + 0x14u, r5);
    r0 = (u32)param_1 - r8;
    wr32((u32)param_2 + 0x1cu, r0);
    c0eq = (((r6 << 2u) | (r6 >> 0x1eu)) + r7) == 0u;
    r7 = 0u;
    do {
        if (c0eq) {
            r3 = (u32)((s32)ppc_mulhw(1374389535, (s32)r5) >> 5);
            r3 = r3 + ((r3 >> 0x1fu) & 1u);
            r3 = r3 * 0x64u;
            r3 = r5 - r3;
            if (r3 != 0u) {
                r7 = 1u;
                break;
            }
        }
        r3 = (u32)((s32)ppc_mulhw(1374389535, (s32)r5) >> 7);
        r3 = r3 + ((r3 >> 0x1fu) & 1u);
        r3 = r3 * 0x190u;
        r3 = r5 - r3;
        if (r3 == 0u) {
            r7 = 1u;
        }
    } while (0);
    r6 = 0x8037aae0u;
    if (r7 != 0u) {
        r6 = 0x8037ab10u;
    }
    r7 = 0xcu;
    r3 = 0x30u;
    do {
        r3 = r3 - 4u;
        r7 = r7 - 1u;
    } while ((s32)r0 < (s32)rd32(r6 + r3));
    wr32((u32)param_2 + 0x10u, r7);
    r3 = rd32(r6 + r3);
    r3 = r0 - r3;
    wr32((u32)param_2 + 0xcu, r3 + 1u);
    return;
}
