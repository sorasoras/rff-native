#include "tc_rt.h"

s32 fn_801dae7c(void)
{
    u32 r3 = 0, r4 = 0, r5 = 0;
    r3 = 0u;
    r5 = rd32(0x8046ad74u);
    while (r5 != 0u) {
        r4 = r5;
        r5 = rd32(r5);
        r4 = rd32(r4 + 8u);
        r4 = rd32(r4 + 0x154u);
        if ((r4 - 0x49530000u) == 0x534du) {
            r3 = r3 + 1u;
        }
    }
    return (s32)r3;
}
