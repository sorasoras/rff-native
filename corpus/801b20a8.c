#include "tc_rt.h"

u32 fn_801b20a8(u32 param_1)
{
    u32 r0 = 0, r6 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    r6 = rd32(0x80372494u);
    r0 = rd32(0x80372498u);
    wr32(0x817fdfe8u, rd32(0x80372490u));
    wr32(0x817fdfecu, r6);
    wr32(0x817fdff0u, r0);
    a.r[0] = param_1;
    a.r[1] = 1u;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x801b2420u, &a);
    wr32(0x8057118cu, rd32(0x8057118cu) | 8u);
    return 1u;
}
