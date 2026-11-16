#include "tc_rt.h"

u32 fn_800ed518(s32 param_1, s32 param_2, u32 param_3)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r6 = 0, r7 = 0;
    r6 = rd32((u32)param_1 + 0xcu);
    if (r6 == 0u) {
        return 0u;
    }
    r7 = 0u;
    if (((u32)param_2 == 7u || (u32)param_2 == 0x1eu) || (u32)param_2 == 0x1fu) {
        r7 = (u32)rd8(((u32)param_2 * 0x38u) - 0x7fb64fcbu);
    }
    r4 = 0u;
    r3 = (r7 + ((((u32)param_2 << 2u) & 0xfffffffcu) - (u32)param_2)) * 0xf4u;
    ctr = 0x3du;
    do {
        if ((u32)rd8(r3 + (r4 + r6)) == param_3) {
            return r4 & 0xffu;
        }
        r4 = r4 + 1u;
        if ((u32)rd8(r3 + (r4 + r6)) == param_3) {
            return r4 & 0xffu;
        }
        r4 = r4 + 1u;
        if ((u32)rd8(r3 + (r4 + r6)) == param_3) {
            return r4 & 0xffu;
        }
        r4 = r4 + 1u;
        if ((u32)rd8(r3 + (r4 + r6)) == param_3) {
            return r4 & 0xffu;
        }
        r4 = r4 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return 0u;
}
