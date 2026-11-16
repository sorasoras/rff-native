#include "tc_rt.h"

void fn_801eae2c(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r5 = 0, r6 = 0, r8 = 0;
    r8 = 0u;
    r4 = 0u;
    ctr = 3u;
    do {
        r6 = r4 - 0x7fb6d800u;
        r5 = (u32)param_1 + r4;
        r4 = r4 + 4u;
        r8 = r8 + 2u;
        wr8(r5 + 0x1578u, rd8(r6 + 0x39cu));
        wr8(r5 + 0x1579u, rd8(r6 + 0x39du));
        wr8(r5 + 0x157au, rd8(r6 + 0x39eu));
        r0 = (u32)rd8(r6 + 0x39fu);
        r6 = r4 - 0x7fb6d800u;
        wr8(r5 + 0x157bu, (u8)r0);
        r5 = (u32)param_1 + r4;
        r4 = r4 + 4u;
        wr8(r5 + 0x1578u, rd8(r6 + 0x39cu));
        wr8(r5 + 0x1579u, rd8(r6 + 0x39du));
        wr8(r5 + 0x157au, rd8(r6 + 0x39eu));
        r0 = (u32)rd8(r6 + 0x39fu);
        r6 = r4 - 0x7fb6d800u;
        wr8(r5 + 0x157bu, (u8)r0);
        r5 = (u32)param_1 + r4;
        r4 = r4 + 4u;
        wr8(r5 + 0x1578u, rd8(r6 + 0x39cu));
        wr8(r5 + 0x1579u, rd8(r6 + 0x39du));
        wr8(r5 + 0x157au, rd8(r6 + 0x39eu));
        wr8(r5 + 0x157bu, rd8(r6 + 0x39fu));
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return;
}
