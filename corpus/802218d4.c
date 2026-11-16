#include "tc_rt.h"

void fn_802218d4(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 4u;
    a.r[1] = rd32(((rd32(0x80571420u) << 2u) & 0xfffffffcu) - 0x7fcc3640u);
    (void)tc_call(0x800f8544u, &a);
    return;
}
