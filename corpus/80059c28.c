#include "tc_rt.h"

void fn_80059c28(void)
{
    TcArgs a = {0};
    a.r[0] = 0x280u;
    a.r[1] = 0x1e0u;
    a.r[2] = 4u;
    a.r[3] = 0u;
    (void)tc_call(0x8004b820u, &a);
    a.r[0] = 0u;
    a.r[1] = 0u;
    a.r[2] = 0x280u;
    a.r[3] = 0x1e0u;
    (void)tc_call(0x8004b830u, &a);
    a.r[0] = 0x803d2a80u;
    a.r[1] = 1u;
    a.r[2] = 0u;
    (void)tc_call(0x8004b844u, &a);
    (void)tc_call(0x8004b8acu, &a);
    wr32(0x80468a80u, 1u);
    return;
}
