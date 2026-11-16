#include "tc_rt.h"

u32 fn_8014de60(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1;
    (void)tc_call(0x800da160u, &a);
    return rd32((u32)param_1 + 0x78u);
}
