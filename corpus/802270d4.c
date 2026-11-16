#include "tc_rt.h"

void fn_802270d4(s32 param_1, u32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    r7 = (u32)param_3 * 0xcu;
    wr32(0x805714a4u, (u32)param_1);
    r8 = 0u;
    wr32(0x805714a0u, (u32)param_3);
    r6 = 0u;
    while ((s32)r8 < (s32)rd32(0x805714a0u)) {
        r0 = rd32(0x805714a4u);
        r8 = r8 + 1u;
        wr32(r6 + r0, 0xffffffffu);
        r9 = r0 + r6;
        r6 = r6 + 0xcu;
        wr32(r9 + 8u, 0u);
        wr32(r9 + 4u, 0u);
    }
    r3 = rd32(0x805714a4u);
    wr32(0x80571498u, param_2 & 0xffffffe0u);
    r3 = r3 + r7;
    wr32(0x80570a48u, 0xffffffffu);
    r3 = (r3 + 0x1fu) & 0xffffffe0u;
    wr32(0x8057149cu, r3);
    return;
}
