#include "tc_rt.h"

void fn_8031f90c(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    r9 = 0u;
    r7 = param_1 + rd32(param_1);
    r8 = r7 + 8u;
    while ((s32)r9 < (s32)rd16(r7 + 4u)) {
        r3 = (u32)rd8(r8);
        r9 = r9 + 1u;
        r0 = (u32)rd8(r8 + 1u);
        r8 = r8 + 2u;
        r3 = (r3 << 8u) & 0xffffff00u;
        r0 = r3 + r0;
        r10 = r8;
        r8 = r8 + r0;
        r5 = ((u32)rd8(r8 + 2u) << 8u) & 0xffffff00u;
        r6 = (u32)rd8(r8 + 3u);
        r0 = ((u32)rd8(r8 + 1u) << 0x10u) & 0xffff0000u;
        r4 = ((u32)rd8(r8) << 0x18u) & 0xff000000u;
        r8 = r8 + 8u;
        r0 = r4 + r0;
        r0 = r6 + r5 + r0;
        r4 = r7 + r0;
        wr32(r7 + r0, r10);
        r3 = r4 + 0x20u;
        wr32(r4 + 0x18u, r3);
        wr32(r4 + 0x1cu, r3 + rd32(r4 + 8u));
    }
    return;
}
