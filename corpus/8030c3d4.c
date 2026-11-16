#include "tc_rt.h"

u32 fn_8030c3d4(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0xcu);
    if (r3 != 0u) {
        r3 = rd32(r3 + 0x14u);
        return r3;
    }
    return 1u;
}
