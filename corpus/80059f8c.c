#include "tc_rt.h"

void fn_80059f8c(void)
{
    TcArgs a = {0};
    (void)tc_call(0x800590f0u, &a);
    (void)tc_call(0x800603acu, &a);
    a.r[0] = 0x8057111cu;
    a.r[1] = 0x800603b0u;
    a.r[2] = 0x803d29e0u;
    (void)tc_call(0x802551b8u, &a);
    a.r[0] = 0x803d29f8u;
    (void)tc_call(0x80097d44u, &a);
    a.r[0] = 0x803d29f8u;
    a.r[1] = 0x80097dacu;
    a.r[2] = 0x803d29ecu;
    (void)tc_call(0x802551b8u, &a);
    return;
}
