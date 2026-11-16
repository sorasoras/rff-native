#include "tc_rt.h"

u32 fn_801c83e0(u32 param_1)
{
    TcArgs a = {0};
    a.r[0] = param_1;
    (void)tc_call(0x801e6f24u, &a);
    wr8(param_1 + 0xcfcu, 0u);
    wr32(param_1, 0x80373968u);
    wr8(param_1 + 0xcfdu, 0u);
    a.r[0] = 0x5eu;
    a.r[1] = 7u;
    a.r[2] = 0xffffffffu;
    (void)tc_call(0x800eb44cu, &a);
    a.r[0] = 0x5du;
    a.r[1] = 7u;
    a.r[2] = 0xffffffffu;
    (void)tc_call(0x800eb44cu, &a);
    a.r[0] = 0x5cu;
    a.r[1] = 7u;
    a.r[2] = 0xffffffffu;
    (void)tc_call(0x800eb44cu, &a);
    a.r[0] = 0x59u;
    a.r[1] = 7u;
    a.r[2] = 0xffffffffu;
    (void)tc_call(0x800eb44cu, &a);
    return param_1;
}
