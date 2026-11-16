#include "tc_rt.h"

u32 fn_801ff1f0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0xd0u;
    a.r[1] = 0u;
    (void)tc_call(0x800f8544u, &a);
    return 1u;
}
