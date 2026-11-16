#include "tc_rt.h"

void fn_800310ec(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = 0u;
    for (;;) {
        r5 = rd32((u32)param_1 + 0x34u);
        if (r31 >= r5) break;
        r6 = rd32((u32)param_1 + 0x3cu);
        r7 = rd32((u32)param_1 + 0x38u);
        r4 = r7 + (r6 * r31);
        r0 = (u32)(s16)rd16(rd32(r4 + 0x3cu) + 0x68u);
        if ((s32)r0 < 0 || r0 >= r5) {
            r3 = 0u;
        } else {
            r0 = r6 * r0;
            r3 = r7 + r0;
        }
        if (r3 == 0u) {
            r3 = (u32)param_1;
        }
        wr32(r4 + 0x30u, r3);
        a.r[0] = r3;
        a.r[1] = r4;
        a.r[2] = r4;
        (void)tc_call(0x802337a0u, &a);
        r31 = r31 + 1u;
    }
    return;
}
