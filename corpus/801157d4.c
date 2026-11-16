#include "tc_rt.h"

u32 fn_801157d4(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x58u);
    if (r3 == 0u) {
        return 0u;
    }
    r3 = (u32)((s32)rd32(r3 + 0x80u) >> 31);
    r3 = (((0u - r3) | r3) >> 0x1fu) & 1u;
    return r3;
}
