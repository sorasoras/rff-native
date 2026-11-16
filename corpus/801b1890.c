#include "tc_rt.h"

u32 fn_801b1890(s32 param_1)
{
    u32 r0 = 0, r3 = 0, r6 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = (u32)param_1;
    (void)tc_call(0x801a0d34u, &a);
    a.r[0] = (u32)param_1;
    r3 = tc_call(0x801b2e30u, &a);
    if (r3 != 0u) {
        r0 = rd32((u32)param_1 + 8u);
        r3 = (r0 << 3u) & 0xfffffff8u;
        r0 = ((r0 << 1u) & 0xfffffffeu) + 1u;
        r3 = rd32(r3 - 0x7fcc4bd0u);
        r0 = (r0 << 2u) & 0xfffffffcu;
        r0 = rd32(r0 - 0x7fcc4bd0u);
        wr32((u32)param_1 + 0x708u, r3);
        wr32((u32)param_1 + 0x704u, r0);
    }
    a.r[0] = 0x804b9e80u;
    a.r[1] = 1u;
    (void)tc_call(0x8011f6bcu, &a);
    a.r[0] = 0x804b9da0u;
    r3 = tc_call(0x8010a5d0u, &a);
    r6 = rd32(0x80372428u);
    r0 = rd32(0x8037242cu);
    wr32(0x817fdfe8u, rd32(0x80372424u));
    wr32(0x817fdfecu, r6);
    wr32(0x817fdff0u, r0);
    a.r[0] = (u32)param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = r3;
    (void)tc_call(0x801b2594u, &a);
    return 1u;
}
