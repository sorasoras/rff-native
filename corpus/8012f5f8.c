#include "tc_rt.h"

void fn_8012f5f8(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    a.r[1] = 0u;
    a.r[2] = 1u;
    (void)tc_call(0x80130b5cu, &a);
    return;
}
