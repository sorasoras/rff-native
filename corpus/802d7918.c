#include "tc_rt.h"

void fn_802d7918(s32 param_1, s32 param_2)
{
    u32 c0lt = 0, r0 = 0;
    c0lt = param_2 < 2;
    if ((u32)param_2 == 2u) {
        r0 = rd32(0x8039b174u);
        wr32((u32)param_1 + 4u, rd32(0x8039b170u));
        wr32((u32)param_1 + 8u, r0);
        wr32((u32)param_1 + 0xcu, rd32(0x8039b178u));
        return;
    }
    if (c0lt) {
        c0lt = param_2 < 0;
        if ((u32)param_2 == 0u) {
            r0 = rd32(0x8039b15cu);
            wr32((u32)param_1 + 4u, rd32(0x8039b158u));
            wr32((u32)param_1 + 8u, r0);
            wr32((u32)param_1 + 0xcu, rd32(0x8039b160u));
            return;
        }
        if (!c0lt) {
            r0 = rd32(0x8039b168u);
            wr32((u32)param_1 + 4u, rd32(0x8039b164u));
            wr32((u32)param_1 + 8u, r0);
            wr32((u32)param_1 + 0xcu, rd32(0x8039b16cu));
            return;
        }
    }
    r0 = rd32(0x8039b180u);
    wr32((u32)param_1 + 4u, rd32(0x8039b17cu));
    wr32((u32)param_1 + 8u, r0);
    wr32((u32)param_1 + 0xcu, rd32(0x8039b184u));
    return;
}
