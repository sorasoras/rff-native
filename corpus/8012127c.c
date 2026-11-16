#include "tc_rt.h"

u32 fn_8012127c(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x24u);
    a.r[1] = 2u;
    (void)tc_call(0x8011e5a0u, &a);
    return 1u;
}
