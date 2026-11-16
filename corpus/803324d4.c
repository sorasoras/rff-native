#include "tc_rt.h"

u32 fn_803324d4(u32 param_1, u32 param_2)
{
    (void)param_1;
    return (u32)rd16(param_2) & 0x800u;
}
