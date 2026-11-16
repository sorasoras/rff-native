#include "tc_rt.h"

u32 fn_8018c018(u32 param_1)
{
    u32 r0 = 0, r5 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    a.r[0] = (rd32(0x805710e0u) * 0x6d0u) - 0x7fc2e738u;
    (void)tc_call(0x80056b64u, &a);
    (void)tc_call(0x800a7ae0u, &a);
    a.r[0] = 0u;
    a.r[1] = 1u;
    (void)tc_call(0x800a796cu, &a);
    a.r[0] = 2u;
    a.r[1] = 0x31u;
    (void)tc_call(0x800a6d5cu, &a);
    r5 = rd32(0x8036fe34u);
    r0 = rd32(0x8036fe38u);
    wr32(0x817fdfe8u, rd32(0x8036fe30u));
    wr32(0x817fdfecu, r5);
    wr32(0x817fdff0u, r0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    (void)tc_call(0x8018d124u, &a);
    return 1u;
}
