#include "tc_rt.h"

u32 fn_80215564(s32 param_1, u32 param_2)
{
    u32 r5 = 0, r6 = 0, r7 = 0;
    wr32((u32)param_1 + 0x3e4u, param_2);
    r7 = 0u;
    r6 = param_2 + ((rd32(param_2) << 4u) & 0xfffffff0u) + 4u;
    r5 = r6;
    while ((s32)r7 < (s32)rd32(param_2)) {
        r7 = r7 + 1u;
        wr32(r5, rd32(r5) + param_2);
        r5 = r5 + 4u;
    }
    wr32((u32)param_1 + 0x3f4u, r6);
    return 1u;
}
