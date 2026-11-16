#include "tc_rt.h"

u32 fn_801b9178(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x2cu;
    a.r[1] = 1u;
    (void)tc_call(0x800f8544u, &a);
    return 1u;
}
