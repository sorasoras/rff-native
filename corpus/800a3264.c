#include "tc_rt.h"

u32 fn_800a3264(u32 param_1, u32 param_2)
{
    u32 r3 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = param_1;
    r3 = tc_call(0x800a2d40u, &a);
    a.r[0] = r3;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = param_2;
    (void)tc_call(0x8009bf34u, &a);
    return rd32(0x817fdfe8u);
}
