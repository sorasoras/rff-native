#include "tc_rt.h"

void fn_80080018(s32 param_1, u32 param_2, u32 param_3, u32 param_4, s32 param_5)
{
    u32 r0 = 0;
    f64 f0 = 0.0;
    f0 = (f64)rdf32(0x80572860u);
    r0 = rd32((u32)param_1 + 0x148u) | 0x4000000u;
    wr32((u32)param_1 + 0x264u, param_2);
    wr32((u32)param_1 + 0x270u, 0u);
    wr32((u32)param_1 + 0x268u, param_3);
    wr32((u32)param_1 + 0x26cu, (u32)param_5);
    wr32((u32)param_1 + 0x274u, param_4);
    wrf32d((u32)param_1 + 0x278u, f0);
    wr32((u32)param_1 + 0x148u, r0);
    if ((u32)param_5 != 0u) {
        wr32((u32)param_1 + 0xccu, 1u);
        return;
    }
    return;
}
