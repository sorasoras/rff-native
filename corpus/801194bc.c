#include "tc_rt.h"

u32 fn_801194bc(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x48u);
    a.r[0] = r3;
    a.r[1] = 0u;
    a.f[0] = 0.0;
    r3 = tc_call(rd32(rd32(r3) + 0x70u), &a);
    if (r3 == 0u) {
        r3 = rd32(rd32((u32)param_1 + 0x48u) + 0x148u);
        if (((u32)((s32)((r3 << 3u) & 0xc0000000u) >> 31) == 0u && (u32)((s32)((r3 << 1u) & 0xc0000000u) >> 31) == 0u) && (u32)((s32)((r3 << 4u) & 0xc0000000u) >> 31) == 0u) {
            r3 = 1u;
            return r3;
        }
    }
    r3 = 0u;
    return r3;
}
