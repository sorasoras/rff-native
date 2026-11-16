#include "tc_rt.h"

u32 fn_802b134c(s32 param_1, u32 param_2)
{
    u32 c0eq = 0, r0 = 0, r3 = 0, r4 = 0, r6 = 0;
    r3 = (u32)param_1;
    r4 = param_2;
    r6 = 0xffu;
    for (;;) {
        c0eq = (r3 & 0xffffu) == 0u;
        r3 = r3 - 1u;
        if (c0eq) break;
        r0 = (u32)rd8(r4);
        r4 = r4 + 1u;
        r0 = r6 ^ r0;
        r6 = (u32)rd8(r0 - 0x7fcb7b80u);
    }
    return (0xffu - r6) & 0xffu;
}
