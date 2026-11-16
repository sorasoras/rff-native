#include "tc_rt.h"

u32 fn_80140980(s32 param_1)
{
    TcArgs a = {0};
    if ((rd32((u32)param_1 + 0x120u) - 1u) <= 1u) {
        a.r[0] = (u32)param_1;
        (void)tc_call(0x800da354u, &a);
    }
    return 1u;
}
