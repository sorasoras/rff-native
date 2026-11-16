#include "tc_rt.h"

void fn_80049f80(s32 param_1)
{
    wr32(0x803c62c0u, rd32((((u32)param_1 << 2u) & 0xfffffffcu) - 0x7fcca318u));
    return;
}
