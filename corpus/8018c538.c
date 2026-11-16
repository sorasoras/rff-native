#include "tc_rt.h"

u32 fn_8018c538(u32 param_1)
{
    u32 r0 = 0, r6 = 0, r7 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = 0xf7u;
    a.r[1] = 1u;
    (void)tc_call(0x8008273cu, &a);
    r7 = rd32(0x8036fe54u);
    wr32(0x805710f8u, 0u);
    r6 = rd32(0x8036fe58u);
    r0 = rd32(0x8036fe5cu);
    wr32(0x817fdfe8u, r7);
    wr32(0x817fdfecu, r6);
    wr32(0x817fdff0u, r0);
    a.r[0] = param_1;
    a.r[1] = 0u;
    a.r[2] = 0x817fdfe8u;
    (void)tc_call(0x8018ca94u, &a);
    return 1u;
}
