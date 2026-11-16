#include "tc_rt.h"

void fn_801465c4(s32 param_1, s32 param_2)
{
    wr32((u32)param_1 + 0xa20u, 0u);
    wr32((u32)param_1 + 0xa24u, 0xau);
    wr16((u32)param_1 + 0xa28u, 0x2e8u);
    wr8((u32)param_1 + 0xa2au, 1u);
    wr8((u32)param_1 + 0xa2bu, 1u);
    wr32((u32)param_1 + 0xa2cu, 0u);
    wr32((u32)param_1 + 0xa3cu, 0u);
    if ((u32)param_2 != 0u) {
        wr32((u32)param_1 + 0xa44u, 0u);
        wr16((u32)param_1 + 0xa40u, 0u);
        wr8((u32)param_1 + 0xa42u, 0u);
        wr8((u32)param_1 + 0xa43u, 0u);
        return;
    }
    return;
}
