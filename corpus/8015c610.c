#include "tc_rt.h"

u32 fn_8015c610(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800efd28u, &a);
    wr32(param_1, 0x80368fd8u);
    a.r[0] = param_1 + 0xcu;
    (void)tc_call(0x8015c730u, &a);
    a.r[0] = param_1 + 0x10u;
    (void)tc_call(0x8015bde4u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x8015c664u, &a);
    return param_1;
}
