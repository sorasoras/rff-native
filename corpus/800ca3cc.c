#include "tc_rt.h"

void fn_800ca3cc(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xacu;
    (void)tc_call(0x800cb55cu, &a);
    return;
}
