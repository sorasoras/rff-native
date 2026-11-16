#include "tc_rt.h"

u32 fn_800d7c30(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0, r6 = 0, r7 = 0, r31 = 0;
    f64 f1 = 0.0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    r7 = rd32(param_2);
    wr32(0x817fe004u, 0x817ff000u);
    r6 = rd32(param_2 + 4u);
    wr32(0x817fdffcu, 0u);
    r0 = rd32(param_2 + 8u);
    wr32(0x817fdfe8u, r7);
    f1 = (f64)rdf32(0x805739d0u);
    wr32(0x817fdfecu, r6);
    wr32(0x817fdff0u, r0);
    a.f[0] = f1;
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    r3 = tc_call(0x800d8144u, &a);
    r31 = r3;
    (void)tc_call(0x800d8cc8u, &a);
    return r31;
}
