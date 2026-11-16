#include "tc_rt.h"

u32 fn_8010cae4(u32 param_1, u32 param_2)
{
    u32 r5 = 0, r6 = 0, r7 = 0, r8 = 0;
    r5 = rd32(param_2);
    r6 = rd32(param_2 + 4u);
    r7 = rd32(param_2 + 8u);
    r8 = rd32(param_2 + 0xcu);
    if ((s32)r5 >= 0 && r5 != (u32)rd8(rd32(param_1) + 1u)) {
        return 0u;
    }
    if ((s32)r6 >= 0 && r6 != (u32)rd8(rd32(param_1) + 2u)) {
        return 0u;
    }
    if ((s32)r7 >= 0 && r7 != (u32)rd8(rd32(param_1) + 3u)) {
        return 0u;
    }
    if ((s32)r8 >= 0 && r8 != ((u32)rd8(rd32(param_1) + 5u) & 0x7fu)) {
        return 0u;
    }
    return 1u;
}
