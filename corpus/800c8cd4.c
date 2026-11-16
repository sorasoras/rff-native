#include "tc_rt.h"

void fn_800c8cd4(s32 param_1, s32 param_2, s32 param_3)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + ((u32)param_2 * 0x60u) + 0x54u;
    a.r[1] = 0u;
    a.r[2] = 0xeu;
    (void)tc_call(0x8000443cu, &a);
    r6 = 0u;
    r3 = 0u;
    r5 = (u32)param_1 + ((u32)param_2 * 0x60u);
    while ((s32)r6 < 6 && (u32)rd16((u32)param_3 + r3) != 0u) {
        r0 = (u32)rd16((u32)param_3 + r3);
        r4 = r5 + r3;
        r6 = r6 + 1u;
        r3 = r3 + 2u;
        wr16(r4 + 0x54u, (u16)r0);
    }
    return;
}
