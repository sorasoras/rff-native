#include "tc_rt.h"

u32 fn_8031f878(u32 param_1, u32 param_2)
{
    u32 ctr = 0, r0 = 0, r3 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0;
    r8 = param_1 + rd32(param_1);
    r0 = (u32)rd16(r8 + 4u);
    if (param_2 >= r0) {
        return 0u;
    }
    r9 = r8 + 8u;
    r10 = 0u;
    ctr = r0;
    if ((s32)r0 > 0) {
        do {
            r3 = (u32)rd8(r9);
            r0 = (u32)rd8(r9 + 1u);
            r9 = r9 + 2u;
            r3 = (r3 << 8u) & 0xffffff00u;
            r0 = r3 + r0;
            r9 = r9 + r0;
            r6 = ((u32)rd8(r9 + 2u) << 8u) & 0xffffff00u;
            r7 = (u32)rd8(r9 + 3u);
            r0 = ((u32)rd8(r9 + 1u) << 0x10u) & 0xffff0000u;
            r5 = ((u32)rd8(r9) << 0x18u) & 0xff000000u;
            r9 = r9 + 8u;
            r0 = r5 + r0;
            r0 = r7 + r6 + r0;
            if (r10 == param_2) {
                return r8 + r0;
            }
            r10 = r10 + 1u;
            ctr = ctr - 1u;
        } while (ctr != 0u);
    }
    return 0u;
}
