#include "tc_rt.h"

void fn_801797e4(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804c0f98u;
    a.r[1] = 0x80177804u;
    a.r[2] = 0x80177bb8u;
    a.r[3] = 0x1ecu;
    a.r[4] = 0xc8u;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = 0u;
    a.r[1] = 0x8017983cu;
    a.r[2] = 0x804c0f88u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
