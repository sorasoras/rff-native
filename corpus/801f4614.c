#include "tc_rt.h"

s32 fn_801f4614(s32 param_1, s32 param_2)
{
    u32 r0 = 0, r4 = 0, r5 = 0, r6 = 0;
    if ((u32)param_2 != 1u) {
        r5 = rd32((u32)param_1 + 0xfdcu);
        r6 = rd32((u32)param_1 + 0xfe4u);
        wr32((u32)param_1 + 0xfdcu, r5 + 1u);
        return (s32)(r6 + ((r5 << 5u) & 0xffffffe0u));
    }
    r4 = rd32((u32)param_1 + 0xfe0u);
    r5 = rd32((u32)param_1 + 0xfe8u);
    r0 = r4 * 0x48u;
    r4 = r4 + 1u;
    wr32((u32)param_1 + 0xfe0u, r4);
    return (s32)(r5 + r0);
}
