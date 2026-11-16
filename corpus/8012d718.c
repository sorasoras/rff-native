#include "tc_rt.h"

void fn_8012d718(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + (rd32((u32)param_1 + 0x810u) * 0x114u) + 0x3cu;
    a.r[1] = rd32((u32)param_2 + 0x3ecu);
    (void)tc_call(0x801894d8u, &a);
    return;
}
