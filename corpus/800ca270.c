#include "tc_rt.h"

u32 fn_800ca270(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 0x140u);
    if (r3 != 0u) {
        r3 = rd32(r3 + 0x30u);
        return r3;
    }
    return 0u;
}
