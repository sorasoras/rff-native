#include "tc_rt.h"

void fn_802b1a8c(s32 param_1)
{
    u32 r4 = 0;
    if ((u32)rd8(rd32((u32)param_1 + 0x6cu) + 0x72u) == 2u) {
        r4 = (u32)rd16((u32)param_1 + 0x98u);
        if (r4 != 0u) {
            wr16((u32)param_1 + 0x98u, (u16)(r4 - 1u));
        }
        if ((u32)rd16((u32)param_1 + 0x98u) != 0u) {
            return;
        }
        wr8((u32)param_1 + 0x24u, 1u);
        return;
    }
    return;
}
