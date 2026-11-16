#include "tc_rt.h"

u32 fn_8011e214(u32 param_1, s32 param_2)
{
    TcArgs a = {0};
    wr32(param_1, 0x80362960u);
    wr32(param_1 + 0x14u, 0u);
    wr32(param_1 + 0x18u, 0u);
    a.r[0] = param_1 + 4u;
    a.r[1] = 0u;
    a.r[2] = 0x10u;
    (void)tc_call(0x8000443cu, &a);
    if ((u32)param_2 != 0u) {
        a.r[0] = param_1 + 4u;
        a.r[1] = (u32)param_2;
        (void)tc_call(0x8025bd34u, &a);
    }
    return param_1;
}
