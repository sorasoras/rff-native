#include "tc_rt.h"

void fn_801b6060(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 4u;
    a.r[1] = 0xau;
    (void)tc_call(0x800f8544u, &a);
    return;
}
