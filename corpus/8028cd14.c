#include "tc_rt.h"

u32 fn_8028cd14(void)
{
    u32 r3 = 0, r4 = 0;
    TcArgs a = {0};
    wr32(0x80571b74u, 0u);
    (void)tc_call(0x8028b590u, &a);
    (void)tc_call(0x8028b784u, &a);
    (void)tc_call(0x8029e848u, &a);
    wr32(0x80571b6cu, 0x80570e18u);
    wr32(0x80571b68u, 0x80348118u);
    (void)tc_call(0x8028cad4u, &a);
    while (rd32(0x80570dd0u) != 0u) {
        (void)tc_call(0x8028b6d4u, &a);
    }
    (void)tc_call(0x8028ce54u, &a);
    a.r[0] = 0x8053d400u;
    (void)tc_call(0x8022671cu, &a);
    r3 = tc_call(0x8023029cu, &a);
    r4 = tc_lastr4();
    a.r[0] = 0x8053d400u;
    a.r[1] = r4;
    a.r[2] = r3;
    a.r[3] = r4;
    a.r[4] = 0u;
    a.r[5] = (ppc_mulhwu(0x10624dd3u, (rd32(0x800000f8u) >> 2u) & 0x3fffffffu) >> 5u) & 0x7fffffeu;
    a.r[6] = 0x8028ccfcu;
    (void)tc_call(0x802269ecu, &a);
    (void)tc_call(0x8028b6c8u, &a);
    for (;;) {
        r3 = tc_call(0x8028fe30u, &a);
        if ((r3 & 0xffu) != 0u) break;
        (void)tc_call(0x8028b6d4u, &a);
    }
    return 0u;
}
