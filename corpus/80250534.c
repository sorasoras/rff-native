#include "tc_rt.h"

void fn_80250534(void)
{
    u32 r3 = tc_argr(0u), r4 = tc_argr(1u), r30 = 0;
    f64 f1 = tc_argf(0u);
    TcArgs a = {0};
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    wr8(0xcc008000u, 0x61u);
    r4 = rd32(0x80576c88u);
    wr32(0xcc008000u, 0x45000002u);
    r30 = r3;
    if (rd32(r4 + 0x5fcu) != 0u) {
        r3 = tc_call(0x802508fcu, &a);
        f1 = tc_lastf();
    }
    wr32(0xcc008000u, 0u);
    wr32(0xcc008000u, 0u);
    wr32(0xcc008000u, 0u);
    wr32(0xcc008000u, 0u);
    wr32(0xcc008000u, 0u);
    wr32(0xcc008000u, 0u);
    wr32(0xcc008000u, 0u);
    wr32(0xcc008000u, 0u);
    r3 = tc_call(0x802250a0u, &a);
    f1 = tc_lastf();
    wr8(0x805719a0u, 0u);
    a.r[0] = r30;
    r3 = tc_call(0x8022c2d8u, &a);
    f1 = tc_lastf();
    r3 = tc_call(0x8022c2b0u, &a);
    f1 = tc_lastf();
    r30 = r3;
    while ((u32)rd8(0x805719a0u) == 0u) {
        a.r[0] = 0x80571998u;
        r3 = tc_call(0x8022ffe4u, &a);
        f1 = tc_lastf();
    }
    a.r[0] = r30;
    r3 = tc_call(0x8022c2d8u, &a);
    f1 = tc_lastf();
    return;
}
