#include "tc_rt.h"

u32 fn_8028fd70(u32 param_1)
{
    u32 r3 = 0;
    TcArgs a = {0};
    a.r[0] = 0x8053d5f4u;
    a.r[1] = 0u;
    a.r[2] = 0x104u;
    (void)tc_call(0x8000443cu, &a);
    (void)tc_call(0x8028b6ccu, &a);
    a.r[0] = 1u;
    a.r[1] = 0x80577358u;
    (void)tc_call(0x8028d73cu, &a);
    a.r[0] = 2u;
    a.r[1] = 0x80577360u;
    (void)tc_call(0x8028d73cu, &a);
    (void)tc_call(0x8028b6d0u, &a);
    a.r[0] = 0xcu;
    r3 = tc_call(0x8028a0d4u, &a);
    if (r3 != 0u) {
        wr16(r3, 0x100u);
        wr32(r3 + 8u, param_1);
        a.r[0] = r3;
        (void)tc_call(0x8028d750u, &a);
        r3 = 0u;
    } else {
        r3 = 1u;
    }
    return r3;
}
