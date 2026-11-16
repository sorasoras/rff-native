#include "tc_rt.h"

u32 fn_8011a668(u32 param_1, u32 param_2)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if (rd32(0x80571278u) == 0u) {
        a.r[0] = 0u;
        (void)tc_call(0x80043e8cu, &a);
        r0 = rd32(0x80571274u);
        wr32(0x80571270u, 1u);
        wr32(0x804bc298u, r0);
        r3 = tc_call(0x800826f8u, &a);
        r0 = rd32(0x805707f0u);
        wr32(0x804bc29cu, r3);
        wr32(0x804bc2a0u, 1u);
        wr32(0x804bc2a4u, r0);
        a.r[0] = 0x804bc298u;
        (void)tc_call(0x80038970u, &a);
        wr32(0x80571278u, 2u);
    }
    r3 = tc_call(0x800389acu, &a);
    if (r3 == 0u) {
        wr32(param_1, rd32(0x804bc2acu));
        wr32(param_2, rd32(0x804bc2a8u));
        wr32(0x80571278u, 0u);
        a.r[0] = 1u;
        (void)tc_call(0x80043e8cu, &a);
        wr32(0x80571270u, 0u);
        r3 = 1u;
    } else {
        r3 = 0u;
    }
    return r3;
}
