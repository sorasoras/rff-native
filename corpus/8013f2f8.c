#include "tc_rt.h"

u32 fn_8013f2f8(s32 param_1)
{
    u32 r6 = 0;
    r6 = 0u;
    if ((s32)rd32(rd32(0x804beac8u) + 8u) <= param_1 && param_1 < (s32)rd32(rd32(0x804beaccu) + 8u)) {
        r6 = 1u;
    }
    return r6;
}
