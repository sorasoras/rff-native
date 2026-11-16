#include "tc_rt.h"

void fn_8021e3ac(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = (u32)param_1 + 0x20u;
    (void)tc_call(0x800f8610u, &a);
    a.r[0] = rd32((u32)param_1 + 0x1cu) + 0x44u;
    (void)tc_call(0x8011a00cu, &a);
    return;
}
