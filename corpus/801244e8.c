#include "tc_rt.h"

void fn_801244e8(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32((u32)param_1 + 0x1cu);
    a.r[0] = r3;
    a.r[1] = rd32(r3 + 0x74u);
    (void)tc_call(0x8012442cu, &a);
    return;
}
