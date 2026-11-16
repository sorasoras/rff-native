#include "tc_rt.h"

void fn_802f8588(s32 param_1)
{
    if ((u32)param_1 != 0u) {
        wr32((u32)param_1 + 0xdcu, 0u);
        wr32((u32)param_1 + 0xe0u, 0u);
        return;
    }
    return;
}
