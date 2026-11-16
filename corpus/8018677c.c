#include "tc_rt.h"

void fn_8018677c(s32 param_1, s32 param_2)
{
    if ((u32)param_2 != 0u) {
        if (rd32((u32)param_1 + 0xab4u) == 0xbu) {
            return;
        }
        wr32((u32)param_1 + 0xabcu, (u32)param_2);
        return;
    }
    wr32((u32)param_1 + 0xabcu, (u32)param_2);
    return;
}
