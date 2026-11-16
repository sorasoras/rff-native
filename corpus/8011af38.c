#include "tc_rt.h"

u32 fn_8011af38(u32 param_1)
{
    u32 r0 = 0, r3 = 0;
    TcArgs a = {0};
    if (rd32(0x80571278u) == 0u) {
        a.r[0] = 0u;
        (void)tc_call(0x80043e8cu, &a);
        r0 = rd32(0x805707f0u);
        wr32(0x80571270u, 1u);
        wr32(0x804bc2f4u, 0u);
        wr32(0x804bc2f8u, r0);
        a.r[0] = 0x804bc2f4u;
        (void)tc_call(0x80038accu, &a);
        wr32(0x80571278u, 7u);
    }
    r3 = tc_call(0x80038b40u, &a);
    if (r3 == 0u) {
        wr32(param_1, rd32(0x804bc2fcu));
        if (rd32(0x804bc2fcu) == 0u) {
            a.r[0] = 0x8049df80u;
            (void)tc_call(0x800c91dcu, &a);
        }
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
