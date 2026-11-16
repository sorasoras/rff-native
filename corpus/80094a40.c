#include "tc_rt.h"

void fn_80094a40(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32((u32)param_1 + 8u, rd32((u32)param_1 + 8u) + (u32)param_2);
    (void)tc_call(0x80094a38u, &a);
    return;
}
