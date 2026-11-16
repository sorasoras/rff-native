#include "tc_rt.h"

void fn_802b8594(s32 param_1)
{
    u32 r3 = 0;
    r3 = ((u32)param_1 * 0x538u) - 0x7faba3a8u;
    wr8(r3 + 0x524u, 1u);
    wr8(r3 + 0x525u, 1u);
    return;
}
