#include "tc_rt.h"

u32 fn_8006b8c4(s32 param_1)
{
    u32 r0 = 0;
    if ((f64)rdf32((u32)param_1 + 0x948u) > (f64)rdf32(0x805725d8u)) {
        return 1u;
    }
    r0 = rd32((u32)param_1 + 0x290u);
    if ((r0 == 0x1bu || r0 == 0x1cu) || r0 == 0x1du) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    if (r0 != 0u) {
        return 1u;
    }
    if ((u32)rd16(0x8049908au) == 0u) {
        return 1u;
    }
    r0 = rd32((u32)param_1 + 0x290u);
    if (r0 == 0x18u || r0 == 0x1au) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    if (r0 != 0u) {
        return 1u;
    }
    if (rd32((u32)param_1 + 0x1648u) != 0u) {
        return 1u;
    }
    return 0u;
}
