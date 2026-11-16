#include "tc_rt.h"

void fn_80043e8c(u32 param_1)
{
    wr8(0x80571028u, (u8)param_1);
    return;
}
