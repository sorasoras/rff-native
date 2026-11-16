#include "tc_rt.h"

u32 fn_801efc58(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    wr32(param_1, 0x80376380u);
    a.r[0] = param_1 + 0x128u;
    a.r[1] = 0u;
    a.r[2] = 0x14u;
    (void)tc_call(0x8000443cu, &a);
    wr32(param_1 + 0x120u, 0u);
    wr32(param_1 + 0x140u, 0xfffffu);
    wr32(param_1 + 0x13cu, 0u);
    wr32(param_1 + 0x144u, 0u);
    return param_1;
}
