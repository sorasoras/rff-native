#include "tc_rt.h"

u32 fn_8015c6e8(u32 param_1)
{
    u32 r3 = 0, r31 = 0;
    TcArgs a = {0};
    a.r[0] = rd32(param_1);
    a.r[1] = 0x73cu;
    a.r[2] = 4u;
    a.r[3] = 0x8015c6c0u;
    r3 = tc_call(0x800a7710u, &a);
    r31 = r3;
    a.r[0] = r3;
    (void)tc_call(0x800d3704u, &a);
    return r31;
}
