#include "tc_rt.h"

void fn_802a834c(u32 param_1)
{
    wr16(0x80540a22u, (u16)param_1);
    wr16(0x80540a24u, (u16)param_1);
    return;
}
