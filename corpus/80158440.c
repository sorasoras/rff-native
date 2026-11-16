#include "tc_rt.h"

void fn_80158440(void)
{
    TcArgs a = {0};
    a.r[0] = 0x80571310u;
    (void)tc_call(0x80320f84u, &a);
    return;
}
