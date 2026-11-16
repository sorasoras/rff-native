#include "tc_rt.h"

s32 fn_802465c8(void)
{
    u32 r3 = 0, r4 = 0, r5 = 0, r6 = 0;
    if (rd32(0x80571908u) != 0u) {
        r5 = rd32(0x8057190cu);
        r3 = rd32(0x80571910u);
        r4 = r5 + 1u;
        r6 = rd32(0x80571914u);
        wr32(0x8057190cu, r4 - (ppc_divwu(r4, r3) * r3));
        return (s32)(r6 + (r5 * 0x38u));
    }
    return 0;
}
