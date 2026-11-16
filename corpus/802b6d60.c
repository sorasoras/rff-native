#include "tc_rt.h"

u32 fn_802b6d60(s32 param_1)
{
    u32 ctr = 0, r0 = 0, r4 = 0, r6 = 0;
    r6 = 4u;
    ctr = 2u;
    do {
        r0 = r6 & 0xffffu;
        r4 = (u32)rd8(r0 - 0x7fcb7a80u);
        r0 = (u32)rd8((u32)param_1 + r0);
        if (r4 != r0) {
            return 0u;
        }
        r6 = r6 + 1u;
        r0 = r6 & 0xffffu;
        r4 = (u32)rd8(r0 - 0x7fcb7a80u);
        r0 = (u32)rd8((u32)param_1 + r0);
        if (r4 != r0) {
            return 0u;
        }
        r6 = r6 + 1u;
        r0 = r6 & 0xffffu;
        r4 = (u32)rd8(r0 - 0x7fcb7a80u);
        r0 = (u32)rd8((u32)param_1 + r0);
        if (r4 != r0) {
            return 0u;
        }
        r6 = r6 + 1u;
        r0 = r6 & 0xffffu;
        r4 = (u32)rd8(r0 - 0x7fcb7a80u);
        r0 = (u32)rd8((u32)param_1 + r0);
        if (r4 != r0) {
            return 0u;
        }
        r6 = r6 + 1u;
        r0 = r6 & 0xffffu;
        r4 = (u32)rd8(r0 - 0x7fcb7a80u);
        r0 = (u32)rd8((u32)param_1 + r0);
        if (r4 != r0) {
            return 0u;
        }
        r6 = r6 + 1u;
        r0 = r6 & 0xffffu;
        r4 = (u32)rd8(r0 - 0x7fcb7a80u);
        r0 = (u32)rd8((u32)param_1 + r0);
        if (r4 != r0) {
            return 0u;
        }
        r6 = r6 + 1u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return 1u;
}
