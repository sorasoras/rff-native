#include "tc_rt.h"

void fn_8020ecc0(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0xcu;
    (void)tc_call(0x8020cc64u, &a);
    a.r[0] = (u32)param_1 + 0xcu;
    (void)tc_call(0x8020cb08u, &a);
    return;
}
