#include "tc_rt.h"

u32 fn_800c4a78(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800c3fccu, &a);
    wr32((u32)param_1 + 0xa48u, 0u);
    wr32((u32)param_1 + 0x290u, 0u);
    return 1u;
}
