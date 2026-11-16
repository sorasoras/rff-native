#include "tc_rt.h"

void fn_801e5fc8(void)
{
    TcArgs a = {0};
    wr32(0x804dcaf4u, 0u);
    wr32(0x804dcaf8u, 0u);
    wr32(0x804dcafcu, 0u);
    wr32(0x804dcaf8u, 0x804dcaf8u);
    wr32(0x804dcafcu, 0x804dcaf8u);
    a.r[0] = 0x804dcaf4u;
    a.r[1] = 0x801e6058u;
    a.r[2] = 0x804dcae8u;
    (void)tc_call(0x802551b8u, &a);
    wr32(0x804dcb10u, 0u);
    wr32(0x804dcb14u, 0u);
    wr32(0x804dcb0cu, 0u);
    wr32(0x804dcb10u, 0x804dcb10u);
    wr32(0x804dcb14u, 0x804dcb10u);
    a.r[0] = 0x804dcb0cu;
    a.r[1] = 0x801e60b0u;
    a.r[2] = 0x804dcb00u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
