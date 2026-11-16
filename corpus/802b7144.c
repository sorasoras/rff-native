#include "tc_rt.h"

void fn_802b7144(u32 param_1, s32 param_2)
{
    u32 r0 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    if (param_1 > 1u) {
        r5 = param_1 - 1u;
        r8 = 0u;
        while ((s32)(r8 & 0xffffu) < (s32)r5) {
            r7 = (u32)param_2 + ((r8 << 1u) & 0x1fffeu);
            r6 = (u32)rd16(r7 + 0x50u);
            r0 = (u32)rd16(r7 + 0x4eu);
            if (r0 > r6) {
                wr16(r7 + 0x4eu, (u16)r6);
                r8 = 0xffffu;
                wr16(r7 + 0x50u, (u16)r0);
            }
            r8 = r8 + 1u;
        }
        return;
    }
    return;
}
