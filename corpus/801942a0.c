#include "tc_rt.h"

u32 fn_801942a0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x20u);
    (void)tc_call(0x80193cfcu, &a);
    return 1u;
}
