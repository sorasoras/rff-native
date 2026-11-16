#include "tc_rt.h"

u32 fn_801c192c(void)
{
    u32 r3 = 0, r4 = 0;
    r4 = rd32(0x804dc98cu);
    r3 = rd32(((rd32(0x804dc98cu) << 2u) & 0xfffffffcu) - 0x7fb236f8u);
    if ((s32)r4 < 32) {
        wr32(0x804dc98cu, r4 + 1u);
        return r3;
    }
    wr32(0x804dc98cu, 0u);
    return r3;
}
