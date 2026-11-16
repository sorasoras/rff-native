#include "tc_rt.h"

void fn_80138374(s32 param_1)
{
    u32 ctr = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0;
    r9 = 0u;
    r7 = 0u;
    r8 = 0u;
    ctr = 5u;
    do {
        r6 = rd32((u32)param_1 + 0x34u);
        if ((s32)(r6 + r9) < (s32)rd32((u32)param_1 + 0x110u)) {
            r6 = r6 * 0x24u;
            r6 = r6 + (r7 + rd32((u32)param_1 + 0x10cu));
            wr32(rd32(0x80571398u) + r8 + 0xe8u, r6);
        } else {
            wr32(rd32(0x80571398u) + r8 + 0xe8u, 0u);
        }
        r7 = r7 + 0x24u;
        r8 = r8 + 4u;
        r9 = r9 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
