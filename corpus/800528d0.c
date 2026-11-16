#include "tc_rt.h"

void fn_800528d0(void)
{
    TcArgs a = {0};
    a.r[0] = 0x803ca428u;
    (void)tc_call(0x80079678u, &a);
    a.r[0] = 0x803ca648u;
    (void)tc_call(0x80079678u, &a);
    return;
}
