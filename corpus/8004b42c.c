#include "tc_rt.h"

void fn_8004b42c(u32 param_1)
{
    wr8(0x80571080u, (u8)param_1);
    return;
}
