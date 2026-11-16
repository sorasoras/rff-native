#include "tc_rt.h"

u32 fn_8018dad8(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801a0d1cu, &a);
    wr32(param_1, 0x80370064u);
    a.r[0] = param_1 + 0xc8u;
    a.r[1] = 0x80157d94u;
    a.r[2] = 0x80157e18u;
    a.r[3] = 0x54u;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = param_1 + 0x24cu;
    a.r[1] = 0x8018dbd0u;
    a.r[2] = 0x8018db78u;
    a.r[3] = 0x94u;
    a.r[4] = 4u;
    (void)tc_call(0x80255624u, &a);
    wr32(param_1 + 0x80u, 0u);
    wr32(param_1 + 0x50u, 0u);
    wr32(param_1 + 0x90u, 0u);
    wr32(param_1 + 0x88u, 0u);
    wr32(param_1 + 0x500u, 0u);
    wr32(param_1 + 0x244u, 0u);
    wr32(param_1 + 0x4fcu, 0xffffffffu);
    return param_1;
}
