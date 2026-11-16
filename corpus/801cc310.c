#include "tc_rt.h"

u32 fn_801cc310(s32 param_1)
{
    TcArgs a = {0};
    a.r[0] = rd32((u32)param_1 + 0x20u) + 4u;
    a.r[1] = 1u;
    (void)tc_call(0x8011e5a0u, &a);
    return 1u;
}
