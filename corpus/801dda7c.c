#include "tc_rt.h"

u32 fn_801dda7c(u32 param_1, u32 param_2, u32 param_3, f64 param_f1, f64 param_f2)
{
    u32 r0 = 0, r3 = 0, r5 = 0, r31 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.f[0] = param_f1;
    a.f[1] = param_f2;
    a.r[0] = rd32(param_1);
    a.r[1] = param_2;
    a.r[2] = 0u;
    a.r[3] = 0x804890c8u;
    r3 = tc_call(0x801dffccu, &a);
    r31 = r3;
    r5 = rd32(param_3 + 4u);
    r0 = rd32(param_3 + 8u);
    wr32(0x817fdfe8u, rd32(param_3));
    wr32(0x817fdfecu, r5);
    wr32(0x817fdff0u, r0);
    a.r[0] = r3;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x8015811cu, &a);
    return r31;
}
