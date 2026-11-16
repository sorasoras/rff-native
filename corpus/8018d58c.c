#include "tc_rt.h"

u32 fn_8018d58c(u32 param_1, s32 param_2, s32 param_3)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r6 = 0, r7 = 0;
    (void)param_1;
    wr32(0x817fdf60u, 0x817fe000u);
    r7 = 0x817fdf64u;
    r6 = 0x8033ab0cu;
    ctr = 0x12u;
    do {
        r3 = rd32(r6 + 4u);
        r6 = r6 + 8u;
        r0 = rd32(r6);
        wr32(r7 + 4u, r3);
        wr32(r7 + 8u, r0);
        r7 = r7 + 8u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    r0 = (u32)param_3 + ((((u32)param_2 << 2u) & 0xfffffffcu) - (u32)param_2);
    if ((s32)r0 < 0 || (s32)r0 >= 36) {
        r0 = 0u;
    }
    r0 = (r0 << 2u) & 0xfffffffcu;
    return rd32(r0 - 0x7e802098u);
}
