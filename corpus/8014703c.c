#include "tc_rt.h"

s32 fn_8014703c(s32 param_1)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0;
    r3 = (u32)param_1;
    r4 = 0xffffffffu;
    r5 = 0u;
    ctr = 2u;
    do {
        if (rd32(r3 + 4u) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 8u) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0xcu) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0x10u) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0x14u) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0x18u) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0x1cu) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0x20u) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0x24u) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0x28u) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r3 = r3 + 0x28u;
        r5 = r5 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return (s32)r4;
}
