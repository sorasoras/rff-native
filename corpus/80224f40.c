#include "tc_rt.h"

void fn_80224f40(void)
{
    TcArgs a = {0};
    a.r[0] = 0x804dfac0u;
    (void)tc_call(0x80222e20u, &a);
    a.r[0] = 0x804dfac0u;
    a.r[1] = 0x80224f88u;
    a.r[2] = 0x804dfab0u;
    (void)tc_call(0x802551b8u, &a);
    return;
}
