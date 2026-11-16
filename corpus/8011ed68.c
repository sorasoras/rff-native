#include "tc_rt.h"

void fn_8011ed68(s32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    r3 = rd32(rd32((u32)param_1 + 0x1cu) + 0x50u);
    if (r3 != 0u) {
        a.r[0] = r3;
        (void)tc_call(0x802f5fc0u, &a);
        return;
    }
    return;
}
