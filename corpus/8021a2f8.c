#include "tc_rt.h"

u32 fn_8021a2f8(s32 param_1)
{
    u32 r0 = 0, r5 = 0, r6 = 0;
    r5 = rd32((u32)param_1 + 0x60u);
    r6 = 0xffffffffu;
    if (r5 != 0u && (u32)rd8((u32)param_1 + 4u) == 0u) {
        r0 = rd32((u32)param_1 + 0x1cu);
        if (r0 != 0xffffffffu) {
            r0 = (r0 << 3u) & 0xfffffff8u;
            r5 = r5 + r0;
            r6 = (u32)rd16(r5 + 0x10u);
        }
    }
    r5 = rd32((u32)param_1 + 0x5cu);
    if (r5 != 0u && (u32)rd8((u32)param_1 + 3u) == 0u) {
        r0 = rd32((u32)param_1 + 0x18u);
        if (r0 != 0xffffffffu) {
            r0 = (r0 << 3u) & 0xfffffff8u;
            r5 = r5 + r0;
            r0 = (u32)rd16(r5 + 0x10u);
            if (r6 == 0xffffffffu || (s32)r0 < (s32)r6) {
                r6 = r0;
            }
        }
    }
    r5 = rd32((u32)param_1 + 0x58u);
    if (r5 != 0u && (u32)rd8((u32)param_1 + 2u) == 0u) {
        r0 = rd32((u32)param_1 + 0x14u);
        if (r0 != 0xffffffffu) {
            r0 = (r0 << 3u) & 0xfffffff8u;
            r5 = r5 + r0;
            r0 = (u32)rd16(r5 + 0x10u);
            if (r6 == 0xffffffffu || (s32)r0 < (s32)r6) {
                r6 = r0;
            }
        }
    }
    return r6;
}
