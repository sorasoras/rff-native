#include "tc_rt.h"

u32 fn_8011b0e4(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    wr32(param_1, 0x803628c8u);
    a.r[0] = param_1 + 0x10u;
    a.r[1] = 0xffffffffu;
    a.r[2] = 0x10u;
    (void)tc_call(0x8000443cu, &a);
    wr32(param_1 + 0xcu, 0u);
    return param_1;
}
