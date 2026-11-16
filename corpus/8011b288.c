#include "tc_rt.h"

void fn_8011b288(s32 param_1, s32 param_2)
{
    u32 r4 = 0, r31 = 0;
    TcArgs a = {0};
    r31 = (u32)param_1 + (((u32)param_2 << 2u) & 0xfffffffcu);
    r4 = rd32(r31 + 0x10u);
    if ((s32)r4 >= 0) {
        a.r[0] = 0x804b9e80u;
        a.r[1] = r4;
        (void)tc_call(0x801206f4u, &a);
        wr32(r31 + 0x10u, 0xffffffffu);
    }
    return;
}
