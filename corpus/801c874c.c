#include "tc_rt.h"

void fn_801c874c(s32 param_1)
{
    TcArgs a = {0};
    if ((u32)((s32)((rd32((u32)param_1 + 0x148u) << 6u) & 0xc0000000u) >> 31) == 0u) {
        if ((u32)rd8((u32)param_1 + 0xcfcu) != 0u) {
            return;
        }
        wr8((u32)param_1 + 0xcfcu, 1u);
        (void)tc_call(0x801c871cu, &a);
        return;
    }
    return;
}
