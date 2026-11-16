#include "tc_rt.h"

u32 fn_802952a8(u32 param_1)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r5 = 0;
    r5 = 0u;
    r4 = 0x8053f888u;
    ctr = 4u;
    do {
        if (((u32)rd8(r4 + 0x76u) & 0x80u) != 0u && (u32)rd16(r4 + 0x18u) == param_1) {
            return r4;
        }
        r0 = (u32)rd8(r4 + 0xfeu);
        r4 = r4 + 0x88u;
        r0 = r0 & 0x80u;
        if (r0 != 0u && (u32)rd16(r4 + 0x18u) == param_1) {
            return r4;
        }
        r0 = (u32)rd8(r4 + 0xfeu);
        r4 = r4 + 0x88u;
        r0 = r0 & 0x80u;
        if (r0 != 0u && (u32)rd16(r4 + 0x18u) == param_1) {
            return r4;
        }
        r0 = (u32)rd8(r4 + 0xfeu);
        r4 = r4 + 0x88u;
        r0 = r0 & 0x80u;
        if (r0 != 0u && (u32)rd16(r4 + 0x18u) == param_1) {
            return r4;
        }
        r5 = r5 + 3u;
        r4 = r4 + 0x88u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return 0u;
}
