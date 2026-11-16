#include "tc_rt.h"

void fn_8003dd50(s32 param_1, u32 param_2, u32 param_3)
{
    u32 r4 = 0;
    r4 = param_2;
    if (rd32((u32)param_1 + 4u) != 0u) {
        if (param_2 != 0u) {
            wr32((u32)param_1 + 0x18u, r4);
            wr32((u32)param_1 + 0x1cu, param_3);
            return;
        }
        r4 = 0x8003dd40u;
        wr32((u32)param_1 + 0x18u, r4);
        wr32((u32)param_1 + 0x1cu, param_3);
        return;
    }
    return;
}
