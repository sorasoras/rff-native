#include "tc_rt.h"

void fn_8011f178(s32 param_1)
{
    TcArgs a = {0};
    if (rd32((u32)param_1 + 0x54u) != 0u) {
        a.r[0] = (u32)param_1 + 0x10u;
        (void)tc_call(0x8011e5d8u, &a);
        return;
    }
    return;
}
