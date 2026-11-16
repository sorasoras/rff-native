#include "tc_rt.h"

void fn_8007d10c(u32 param_1)
{
    wr8(0x80570700u, (u8)param_1);
    return;
}
