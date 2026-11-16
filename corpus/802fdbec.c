#include "tc_rt.h"

void fn_802fdbec(s32 param_1, u32 param_2)
{
    wr8((u32)param_1 + 0xebu, (u8)param_2);
    return;
}
