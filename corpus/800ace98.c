#include "tc_rt.h"

void fn_800ace98(s32 param_1, s32 param_2)
{
    TcArgs a = {0};
    if (param_2 < 16) {
        a.r[0] = rd32((u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu) + 0x88u);
        a.r[1] = 0u;
        (void)tc_call(0x800a796cu, &a);
        return;
    }
    return;
}
