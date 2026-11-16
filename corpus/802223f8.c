#include "tc_rt.h"

s32 fn_802223f8(s32 param_1)
{
    u32 ctr = 0, r3 = 0, r4 = 0, r5 = 0;
    r3 = (u32)param_1;
    r4 = 0xffffffffu;
    r5 = 0u;
    ctr = 2u;
    do {
        if (rd32(r3 + 0x30u) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0xa4u) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0x118u) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0x18cu) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0x200u) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0x274u) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0x2e8u) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r5 = r5 + 1u;
        if (rd32(r3 + 0x35cu) == 0u) {
            r4 = r5;
            return (s32)r4;
        }
        r3 = r3 + 0x3a0u;
        r5 = r5 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return (s32)r4;
}
