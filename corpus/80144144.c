#include "tc_rt.h"

u32 fn_80144144(s32 param_1)
{
    wr32((u32)param_1 + 0xcu, rd32((u32)param_1 + 0xcu) + 1u);
    return 1u;
}
