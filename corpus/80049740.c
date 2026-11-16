#include "tc_rt.h"

void fn_80049740(void)
{
    TcArgs a = {0};
    wr8(0x803c624cu, 0u);
    wr32(0x803c6250u, 0x10u);
    wr8(0x803c6240u, 0u);
    wr8(0x803c6241u, 0u);
    wr8(0x803c6242u, 0u);
    wr8(0x803c6243u, 0u);
    wr8(0x803c6244u, 0u);
    wr8(0x803c6245u, 0u);
    wr8(0x803c6246u, 0u);
    wr8(0x803c6247u, 0u);
    wr8(0x803c6248u, 0u);
    wr8(0x803c6249u, 0u);
    wr8(0x803c624au, 0u);
    wr8(0x803c624bu, 0u);
    a.r[0] = 0u;
    a.r[1] = 0u;
    (void)tc_call(0x8004a1f8u, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8004a4fcu, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8004a73cu, &a);
    a.r[0] = 0u;
    (void)tc_call(0x8004a87cu, &a);
    (void)tc_call(0x8004a7f8u, &a);
    wr32(0x803c62b4u, 0xffffffffu);
    wr32(0x803c62b8u, 0xffffffffu);
    wr32(0x803c62bcu, 0xffffffffu);
    return;
}
