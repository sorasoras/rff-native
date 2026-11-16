#include "tc_rt.h"

u32 fn_80080430(s32 param_1)
{
    return (u32)rd16((u32)param_1 + 0x1deu);
}
