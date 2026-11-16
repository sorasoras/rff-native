#include "tc_rt.h"

void fn_8027f9f0(s32 param_1, s32 param_2, u32 param_3)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r31 = 0;
    TcArgs a = {0};
    r9 = 0u;
    r31 = rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7faf46b0u);
    r4 = rd32(r31 + 0x974u);
    if ((u32)param_2 == 0u) {
        r8 = 0u;
        ctr = 2u;
        do {
            r7 = r4 + r8;
            r6 = (u32)rd8(r4 + r8);
            r8 = r8 + 7u;
            r9 = r9 + r6;
            r9 = r9 + (u32)rd8(r7 + 1u);
            r9 = r9 + (u32)rd8(r7 + 2u);
            r9 = r9 + (u32)rd8(r7 + 3u);
            r9 = r9 + (u32)rd8(r7 + 4u);
            r0 = (u32)rd8(r7 + 6u);
            r9 = r9 + (u32)rd8(r7 + 5u);
            r7 = r4 + r8;
            r6 = (u32)rd8(r4 + r8);
            r9 = r9 + r0;
            r8 = r8 + 7u;
            r9 = r9 + r6;
            r9 = r9 + (u32)rd8(r7 + 1u);
            r9 = r9 + (u32)rd8(r7 + 2u);
            r9 = r9 + (u32)rd8(r7 + 3u);
            r9 = r9 + (u32)rd8(r7 + 4u);
            r0 = (u32)rd8(r7 + 6u);
            r9 = r9 + (u32)rd8(r7 + 5u);
            r7 = r4 + r8;
            r6 = (u32)rd8(r4 + r8);
            r9 = r9 + r0;
            r8 = r8 + 7u;
            r9 = r9 + r6;
            r9 = r9 + (u32)rd8(r7 + 1u);
            r9 = r9 + (u32)rd8(r7 + 2u);
            r9 = r9 + (u32)rd8(r7 + 3u);
            r9 = r9 + (u32)rd8(r7 + 4u);
            r9 = r9 + (u32)rd8(r7 + 5u);
            r9 = r9 + (u32)rd8(r7 + 6u);
            ctr = ctr - 1u;
        } while (ctr != 0u);
        r6 = r8 + r4;
        r9 = r9 + (u32)rd8(r4 + r8);
        r9 = r9 + (u32)rd8(r6 + 1u);
        r9 = r9 + (u32)rd8(r6 + 2u);
        r9 = r9 + (u32)rd8(r6 + 3u);
        r9 = r9 + (u32)rd8(r6 + 4u);
        if ((u32)rd8(r4 + 0x2fu) == ((r9 + 0x55u) & 0xffu)) {
            a.r[0] = r31;
            a.r[1] = r4;
            a.r[2] = 0x38u;
            (void)tc_call(0x80004338u, &a);
            wr32(r31 + ((param_3 << 2u) & 0x3fcu) + 0x38u, 0u);
        } else {
            wr32(r31 + ((param_3 << 2u) & 0x3fcu) + 0x38u, 0xfffffffcu);
        }
    }
    return;
}
