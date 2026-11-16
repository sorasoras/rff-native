#include "tc_rt.h"

u32 fn_8018e1bc(s32 param_1)
{
    u32 r0 = 0, r4 = 0;
    r0 = rd32(0x80486db8u);
    if (r0 != 1u && r0 != 3u) {
        r4 = rd32((u32)param_1 + 0x48u);
        r0 = rd32((u32)param_1 + 0x4cu);
        wr32((u32)param_1 + 0x38u, rd32((u32)param_1 + 0x44u));
        wr32((u32)param_1 + 0x3cu, r4);
        wr32((u32)param_1 + 0x40u, r0);
        r0 = rd32(0x8033caa4u);
        wr32((u32)param_1 + 0x44u, rd32(0x8033caa0u));
        wr32((u32)param_1 + 0x48u, r0);
        wr32((u32)param_1 + 0x4cu, rd32(0x8033caa8u));
    }
    return 1u;
}
