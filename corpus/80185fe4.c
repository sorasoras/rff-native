#include "tc_rt.h"

u32 fn_80185fe4(u32 param_1)
{
    u32 r31 = 0;
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x800d9ce0u, &a);
    r31 = param_1 + 0x124u;
    wr32(param_1, 0x8036f508u);
    a.r[0] = r31;
    (void)tc_call(0x8006f1b4u, &a);
    wr32(r31, 0x80350198u);
    wr32(param_1 + 0x208u, 0x8036547cu);
    a.r[0] = param_1 + 0x2acu;
    a.r[1] = 0x80148c14u;
    a.r[2] = 0x80147948u;
    a.r[3] = 0x3cu;
    a.r[4] = 0x14u;
    (void)tc_call(0x80255624u, &a);
    wr32(param_1 + 0x7fcu, 0x80365488u);
    wr32(param_1 + 0x120u, 9u);
    wr32(param_1 + 0x82cu, 0x107cu);
    wr32(param_1 + 0x830u, 0xffffffffu);
    return param_1;
}
