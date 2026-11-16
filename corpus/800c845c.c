#include "tc_rt.h"

s32 fn_800c845c(s32 param_1)
{
    u32 ctr = 0, r4 = 0, r6 = 0, r7 = 0;
    r6 = 0u;
    r7 = 0u;
    r4 = 0u;
    ctr = 7u;
    do {
        if (rd32((u32)param_1 + r4 + 0x20u) < 0xabu) {
            r6 = r6 + 1u;
        }
        r4 = r4 + 0x60u;
        if (rd32((u32)param_1 + r4 + 0x20u) < 0xabu) {
            r6 = r6 + 1u;
        }
        r4 = r4 + 0x60u;
        if (rd32((u32)param_1 + r4 + 0x20u) < 0xabu) {
            r6 = r6 + 1u;
        }
        r4 = r4 + 0x60u;
        if (rd32((u32)param_1 + r4 + 0x20u) < 0xabu) {
            r6 = r6 + 1u;
        }
        r4 = r4 + 0x60u;
        if (rd32((u32)param_1 + r4 + 0x20u) < 0xabu) {
            r6 = r6 + 1u;
        }
        r4 = r4 + 0x60u;
        if (rd32((u32)param_1 + r4 + 0x20u) < 0xabu) {
            r6 = r6 + 1u;
        }
        r4 = r4 + 0x60u;
        if (rd32((u32)param_1 + r4 + 0x20u) < 0xabu) {
            r6 = r6 + 1u;
        }
        r4 = r4 + 0x60u;
        if (rd32((u32)param_1 + r4 + 0x20u) < 0xabu) {
            r6 = r6 + 1u;
        }
        r4 = r4 + 0x60u;
        if (rd32((u32)param_1 + r4 + 0x20u) < 0xabu) {
            r6 = r6 + 1u;
        }
        r4 = r4 + 0x60u;
        if (rd32((u32)param_1 + r4 + 0x20u) < 0xabu) {
            r6 = r6 + 1u;
        }
        r7 = r7 + 9u;
        r4 = r4 + 0x60u;
        ctr = ctr - 1u;
    } while (ctr != 0u);
    return (s32)r6;
}
