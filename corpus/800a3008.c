#include "tc_rt.h"

u32 fn_800a3008(u32 param_1, u32 param_2, u32 param_3)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    wr32(0x817fdff4u, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x800a36d0u, &a);
    if (r3 == 0u) {
        r3 = 0u;
    } else {
        wr32(0x817fdfe8u, 0u);
        a.r[0] = param_1;
        (void)tc_call(0x800a2d38u, &a);
        a.r[0] = param_1;
        r3 = tc_call(0x800a2d38u, &a);
        a.r[0] = r3;
        a.r[1] = param_2;
        a.r[2] = param_3;
        a.r[3] = 0x800a2d54u;
        a.r[4] = 0x817fdfe8u;
        (void)tc_call(0x8009bf8cu, &a);
        r3 = rd32(0x817fdfe8u);
    }
    return r3;
}
