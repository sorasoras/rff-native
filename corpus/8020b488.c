#include "tc_rt.h"

void fn_8020b488(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804df158u;
    a.r[1] = 0x8020ab74u;
    a.r[2] = 0x8020abc4u;
    a.r[3] = 0x40u;
    a.r[4] = 0xau;
    (void)tc_call(0x80255624u, &a);
    a.r[0] = 0u;
    a.r[1] = 0x8020b4e0u;
    a.r[2] = 0x804df148u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
