#include "tc_rt.h"

void fn_8007b16c(s32 param_1, s32 param_2)
{
    if ((u32)param_2 != 0u) {
        wr16((u32)param_1 + 0x34u, (u16)((u32)rd16((u32)param_1 + 0x34u) | 0x10u));
        return;
    }
    wr16((u32)param_1 + 0x34u, (u16)((u32)rd16((u32)param_1 + 0x34u) & 0xffffffefu));
    return;
}
