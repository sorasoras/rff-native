#include "tc_rt.h"

u32 fn_80037178(s32 param_1)
{
    u32 r3 = 0, r4 = 0;
    r3 = rd32(rd32(0x803a3ea0u) + 4u) + (((u32)param_1 << 4u) & 0xfffffff0u);
    r4 = rd32(r3 + 4u);
    if (r4 == 0u) {
        r4 = rd32(r3);
    }
    return (r4 + 0x1fu) & 0xffffffe0u;
}
