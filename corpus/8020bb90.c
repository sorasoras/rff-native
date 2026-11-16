#include "tc_rt.h"

u32 fn_8020bb90(s32 param_1)
{
    u32 r3 = 0;
    r3 = rd32((u32)param_1 + 4u);
    if (r3 != 0u) {
        r3 = rd32(r3);
        return r3;
    }
    return 0xffffffffu;
}
