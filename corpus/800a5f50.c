#include "tc_rt.h"

s32 fn_800a5f50(s32 param_1)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 8u, 0u);
    wr32((u32)param_1 + 0xcu, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800a62ccu, &a);
    return param_1;
}
