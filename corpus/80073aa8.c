#include "tc_rt.h"

void fn_80073aa8(void)
{
    u32 r3 = 0, r4 = 0, r29 = 0, r30 = 0, r31 = 0;
    TcArgs a = {0};
    r4 = rd32(0x8046ad74u);
    while (r4 != 0u) {
        r3 = r4;
        r4 = rd32(r4);
        r3 = rd32(r3 + 8u);
        if ((u32)((s32)rd32(r3 + 0x148u) >> 31) != 0u) {
            return;
        }
    }
    r31 = 0x80486508u;
    r29 = 0u;
    r30 = 0x8048645cu;
    do {
        if (((u32)rd8(r31) & 1u) != 0u) {
            a.r[0] = r29;
            a.r[1] = 7u;
            a.r[2] = 0x3e7u;
            (void)tc_call(0x800eb44cu, &a);
            wr8(r30, (u8)((u32)rd8(r30) | 1u));
        }
        r29 = r29 + 1u;
        r30 = r30 + 1u;
        r31 = r31 + 1u;
    } while (r29 < 0xabu);
    a.r[0] = 0x80486508u;
    a.r[1] = 0u;
    a.r[2] = 0xabu;
    (void)tc_call(0x8000443cu, &a);
    return;
}
