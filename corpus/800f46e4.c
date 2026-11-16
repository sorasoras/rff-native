#include "tc_rt.h"

u32 fn_800f46e4(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x4cu) != 0u) {
        return 0u;
    }
    a.r[0] = rd32((u32)param_1 + 0x44u);
    (void)tc_call(0x80210144u, &a);
    return 0u;
}
