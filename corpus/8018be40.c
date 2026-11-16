#include "tc_rt.h"

u32 fn_8018be40(u32 param_1)
{
    u32 r0 = 0, r3 = 0, r6 = 0;
    TcArgs a = {0};
    wr32(0x817fdfe0u, 0x817fe000u);
    wr32(0x817fe004u, 0x817ff000u);
    wr32(0x817fdffcu, 0u);
    wr32(0x817fdff8u, 0u);
    a.r[0] = param_1;
    (void)tc_call(0x801a0d34u, &a);
    r3 = rd32(0x804863d8u);
    a.r[0] = r3;
    a.r[1] = 0xfu;
    a.r[2] = 1u;
    a.r[3] = 1u;
    a.r[4] = 0u;
    a.r[5] = 0u;
    a.f[0] = (f64)rdf32(0x805752e8u);
    (void)tc_call(rd32(rd32(r3) + 0x54u), &a);
    a.r[0] = 0x804b9e80u;
    a.r[1] = 1u;
    (void)tc_call(0x8011f6bcu, &a);
    a.r[0] = 0x804b9da0u;
    r3 = tc_call(0x8010a680u, &a);
    r6 = rd32(0x8036fe10u);
    r0 = rd32(0x8036fe14u);
    wr32(0x817fdfe8u, rd32(0x8036fe0cu));
    wr32(0x817fdfecu, r6);
    wr32(0x817fdff0u, r0);
    a.r[0] = param_1;
    a.r[1] = 0x817fdfe8u;
    a.r[2] = r3;
    (void)tc_call(0x8018d0a8u, &a);
    a.r[0] = param_1;
    (void)tc_call(0x8018d8e8u, &a);
    return 1u;
}
