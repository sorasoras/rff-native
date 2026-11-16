#include "tc_rt.h"

u32 fn_80121540(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    wr32(param_1, 0x80362dc8u);
    a.r[0] = 0x804beaa0u;
    a.r[1] = 0xffffffffu;
    a.r[2] = 0x20u;
    (void)tc_call(0x8000443cu, &a);
    return param_1;
}
