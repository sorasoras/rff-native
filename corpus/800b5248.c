#include "tc_rt.h"

void fn_800b5248(f64 param_1, s32 param_2, u32 param_3, u32 param_4, u32 param_5, u32 param_6, u32 param_7)
{
    u32 r0 = 0, r4 = 0, r10 = 0;
    r10 = rd32((u32)param_2 + 0x15d4u);
    if (r10 != 0u) {
        wr32((u32)param_2 + 0x15d4u, rd32(r10 + 0x20u));
        wr32(r10, param_3);
        wr32(r10 + 4u, param_5);
        wr32(r10 + 8u, param_6);
        wr32(r10 + 0x20u, 0u);
        wr32(r10 + 0xcu, 0u);
        wr32(r10 + 0x10u, param_4);
        wr32(r10 + 0x14u, param_7);
        wr32(r10 + 0x18u, 0u);
        wrf32d(r10 + 0x1cu, param_1);
        r4 = rd32((u32)param_2 + 0x15d8u);
        if (r4 != 0u) {
            for (;;) {
                r0 = rd32(r4 + 0x20u);
                if (r0 == 0u) break;
                r4 = r0;
            }
            wr32(r4 + 0x20u, r10);
            return;
        }
        wr32((u32)param_2 + 0x15d8u, r10);
        return;
    }
    return;
}
