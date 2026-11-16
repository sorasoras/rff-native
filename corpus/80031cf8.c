#include "tc_rt.h"

s32 fn_80031cf8(s32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r6 = 0, r7 = 0;
    r0 = rd32((u32)param_1 + 0x34u);
    r7 = 0u;
    ctr = r0;
    if ((s32)r0 > 0) {
        do {
            r6 = rd32((u32)param_1 + 0x38u) + (rd32((u32)param_1 + 0x3cu) * r7);
            if (param_2 == (u32)rd16(rd32(r6 + 0x3cu) + 0x5eu)) {
                return (s32)r6;
            }
            r7 = r7 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return 0;
}
