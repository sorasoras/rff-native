#include "tc_rt.h"

u32 fn_801891ec(u32 param_1)
{
    u32 r6 = 0;
    r6 = 0u;
    if ((s32)(rd32(param_1 + 0x10u) + rd32(param_1)) < (s32)rd32(param_1 + 0xcu)) {
        r6 = 1u;
    }
    return r6;
}
